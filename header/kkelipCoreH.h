#ifndef __KKELIP_CORE_H__
#define __KKELIP_CORE_H__

/**/
#define    HIGH_CODE_WS2812                     0F0H
#define    LOW_CODE_WS2812                      0C0H


/*                                                                         */
#define    REG_TIME                             R15

/* TAMANHO DA MEM�RIA DE INFORMA��O 512 BYTES. UTILIZADO POR ESSE SISTEMA 239 BYTES.*/
#define    _239_BYTES_                          000EFH /* 239 */

/*                  FLAGS DE ESTADO DA FLASH                             */
/* N�O INICIALIZADO  */
#define    FLASH_NOT_INI                        0FFFFH

/* INICIALIZADO E SEM PROTE��O PARA LIMPEZA PELO SOFTWARE */
#define    FLASH_INI_LOCK                       0ABBAH


/*             CONTEM O ENDERE�O DA MEM�RIA FLASH INTERNA                */
#define    INFO_FLASH_END                       0202H
#define    INFO_FLASH_LEN_DATA                  _239_BYTES_

/*               POSI��O DA MEM�RIA INFO FLASH INICIAL                  */
#define    INFO_FLASH_POS_INI                   01000H

/* POSI��O DA MEM�RIA INFO FLASH INICIAL COM OS DADOS DO SISTEMA OS
 * PRIMEIROS 2 BYTES SERVEM PARA CONTROLE DA OPERA��O                   */
#define    INFO_FLASH_POS_OPER_REF              01002H

/*               CONTROLE DE SISTEMA 0200H <-> 020FH
 * AREA DA MEM�RIA RESPONSAVEL PELO CONTROLE DE TODO O ABIENTE SIST�MICO */
/* OPERA��O EM MEMORIA FLASH. DA RAM -> FLASH */
#define    F_CTRL_OP_MEM_RFLASH                 0AFFAH
/* OPERA��O EM MEMORIA FLASH. FLASH -> RAM  */
#define    F_CTRL_OP_MEM_FLASHR                 0FAAFH
/* OPERA��O EM MEMORIA RAM INTERNA. DA RAM INTERNA <-> RAM INTERNA*/
#define    F_CTRL_OP_MEM_RRAM_INT               0AEEAH
/* INICIALIZA COM DEFAULT F_CTRL_OP_MEM_RAM_INT */
#define    CTRL_OP_MEM                          00200H

/* POSI��O DE LEITURA NA MEMORIA DEPENDENTE DA OPERA��O */
#define    POS_READ_INI_DATA_BYTE_MEM           00202H
#define    POS_READ_FIN_DATA_BYTE_MEM           00204H

/* POSI��O DE ESCRITA NA MEMORIA DEPENDENTE DA OPERA��O */
#define    POS_WRITE_INI_DATA_BYTE_MEM          00206H
#define    POS_WRITE_FIN_DATA_BYTE_MEM          00208H

/*   POSI�AO DA AREA DA MEM�RIA SRAM QUE SER� PROCESSADO
 *   � USADO PRINCIPALMENTE PARA O PROCEDIMENTO DE LIMPEZA
 */
#define    POS_AREA_AB_SRAM_MEM                 0020AH
#define    LEN_AREA_AB_SRAM_MEM                 0020CH


/*  DEFINI��O DOS TAMANHOS DAS AREAS RESPECTIVAMENTE  */
#define    __AREA_A_64_BYTES_SRAM_MEM__         00040H
#define    __AREA_B_64_BYTES_SRAM_MEM__         00040H

/*  DEFINI��O DAS AREAS DE MEM�RIA RESPECTIVAMENTE   */
#define    __POS_INI_AREA_A_SRAM_MEM__          00210H
#define    __POS_INI_AREA_B_SRAM_MEM__          00250H

/* BARRA DE CONTROLE E GERENCIAMENTO DOS LEDS       */
#define    CTRL_LED_I_COLOR_RED                 00290H
#define    CTRL_LED_1_COLOR_GREEN               00291H
#define    CTRL_LED_1_COLOR_BLUE                00292H
#define    CTRL_LED_2_COLOR_RED                 00293H
#define    CTRL_LED_2_COLOR_GREEN               00294H
#define    CTRL_LED_2_COLOR_BLUE                00295H
#define    CTRL_LED_3_COLOR_RED                 00296H
#define    CTRL_LED_3_COLOR_GREEN               00297H
#define    CTRL_LED_3_COLOR_BLUE                00298H
#define    CTRL_LED_4_COLOR_RED                 00299H
#define    CTRL_LED_4_COLOR_GREEN               0029AH
#define    CTRL_LED_4_COLOR_BLUE                0029BH

/* CONFIGURA A QUANTIDADE DE LED QUE SER� PROCESSDADO */
#define    QT_LED_N                             0029CH


#endif
