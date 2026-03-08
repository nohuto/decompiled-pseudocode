/*
 * XREFs of GetRemoteHDEV @ 0x1C0205C54
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0205B4C (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C0205C9C (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0205DF0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0205FFC (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x1C026E9E8 (DrvFindRemoteDriverhdevInMDEV.c)
 */

__int64 __fastcall GetRemoteHDEV(__int16 a1, __int64 a2)
{
  __int64 v2; // rcx

  if ( (unsigned __int16)(a1 - 1) > 0xFFFDu )
    return *(_QWORD *)(gpDispInfo + 40LL);
  v2 = *(_QWORD *)(gpDispInfo + 16LL);
  if ( *(_DWORD *)(v2 + 20) == 1 )
    return *(_QWORD *)(gpDispInfo + 40LL);
  else
    return DrvFindRemoteDriverhdevInMDEV(v2, a2, a2);
}
