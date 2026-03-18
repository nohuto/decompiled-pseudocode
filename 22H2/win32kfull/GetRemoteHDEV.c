/*
 * XREFs of GetRemoteHDEV @ 0x1C0203084
 * Callers:
 *     CtxDisplayIOCtl @ 0x1C0202F7C (CtxDisplayIOCtl.c)
 *     RemotePassthruDisable @ 0x1C02030CC (RemotePassthruDisable.c)
 *     RemoteShadowCleanup @ 0x1C0203220 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C020342C (RemoteShadowStart.c)
 * Callees:
 *     DrvFindRemoteDriverhdevInMDEV @ 0x1C026BF38 (DrvFindRemoteDriverhdevInMDEV.c)
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
