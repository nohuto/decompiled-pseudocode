/*
 * XREFs of DpiPdoHandleStopDevice @ 0x1C03A4E90
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C01D5FF0 (DpiPdoDispatchPnp.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStopDevice(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax
  bool v4; // zf

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v1 + 484) )
    DpiCheckForOutstandingD3Requests(v1);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
  *(_DWORD *)(v1 + 4LL * (*(_DWORD *)(v1 + 276) & 7) + 244) = *(_DWORD *)(v1 + 240);
  v3 = *(_DWORD *)(v1 + 236);
  ++*(_DWORD *)(v1 + 276);
  v4 = *(_BYTE *)(v1 + 484) == 0;
  *(_DWORD *)(v1 + 240) = v3;
  *(_DWORD *)(v1 + 236) = 4;
  if ( !v4 )
    DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
  KeLeaveCriticalRegion();
  WdLogSingleEntry1(4LL, a1);
  return 0LL;
}
