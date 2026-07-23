/*
 * XREFs of RtlGetSearchPath @ 0x180083E00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCachedPath @ 0x180011708 (RtlpGetCachedPath.c)
 */

NTSTATUS __cdecl RtlGetSearchPath(PWSTR *SearchPathA)
{
  __int64 CachedPath; // rax

  CachedPath = RtlpGetCachedPath(
                 &RtlpSearchPath,
                 (__int64 (__fastcall *)(__int64, __int64))RtlpComputeSearchPath,
                 0LL,
                 0LL);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 128);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
