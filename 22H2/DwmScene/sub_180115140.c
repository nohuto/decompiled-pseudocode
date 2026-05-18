/*
 * XREFs of sub_180115140 @ 0x180115140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG sub_180115140()
{
  ULONG result; // eax
  REGHANDLE v1; // rcx

  result = _InterlockedExchangeAdd(&dword_18021AB28, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v1 = qword_18020DB68;
    qword_18020DB68 = 0LL;
    dword_18020DB48 = 0;
    return EventUnregister(v1);
  }
  return result;
}
