/*
 * XREFs of SmKmFileInfoInit @ 0x14092B5CC
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140353D08 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall SmKmFileInfoInit(void *a1)
{
  return memset(a1, 0, 0x40uLL);
}
