/*
 * XREFs of HalpIommuPopulateExceptionList @ 0x1403A489C
 * Callers:
 *     HalpIommuInitializeAll @ 0x140A8DA7C (HalpIommuInitializeAll.c)
 * Callees:
 *     HalpIommuAddDebuggerException @ 0x1403A48B8 (HalpIommuAddDebuggerException.c)
 */

__int64 HalpIommuPopulateExceptionList()
{
  __int64 result; // rax

  result = HalpIommuAddDebuggerException();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
