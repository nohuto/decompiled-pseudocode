/*
 * XREFs of PsmCrmStart @ 0x180042050
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsStart @ 0x180042074 (CrmGlobalsStart.c)
 *     CrmGlobalsInitialize @ 0x18004237C (CrmGlobalsInitialize.c)
 */

__int64 PsmCrmStart()
{
  __int64 result; // rax

  CrmGlobalsInitialize();
  result = CrmGlobalsStart();
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
