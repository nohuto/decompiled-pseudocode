/*
 * XREFs of FsRtlGetSupportedFeatures @ 0x1402CBB70
 * Callers:
 *     IopQueryInformation @ 0x140757E40 (IopQueryInformation.c)
 *     IopCopyOffloadCapable @ 0x140873058 (IopCopyOffloadCapable.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlGetSupportedFeatures(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = 0;
  if ( FltMgrCallbacks )
    return (*(__int64 (**)(void))(FltMgrCallbacks + 16))();
  return result;
}
