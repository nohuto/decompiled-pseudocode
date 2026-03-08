/*
 * XREFs of IsValueSizeFixed @ 0x1409D1AD4
 * Callers:
 *     GetOperandValue @ 0x1409D07DC (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1409D1B24 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  char v1; // r8

  v1 = 0;
  if ( a1 < 0x50u && (a1 == 1 || a1 == 2 || (unsigned int)a1 - 3 < 2) )
    return 1;
  return v1;
}
