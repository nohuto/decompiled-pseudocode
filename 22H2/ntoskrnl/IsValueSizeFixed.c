/*
 * XREFs of IsValueSizeFixed @ 0x140927F14
 * Callers:
 *     GetOperandValue @ 0x140927554 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x140927F44 (LocalGetConditionForString.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValueSizeFixed(unsigned __int8 a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return a1 <= 4u;
  return result;
}
