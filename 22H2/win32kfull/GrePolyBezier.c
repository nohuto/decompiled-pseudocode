/*
 * XREFs of GrePolyBezier @ 0x1C02ABFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0266BF4 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C029A5D4 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C02A8958 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02A8980 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C02A8A60 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02AB188 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 */

__int64 __fastcall GrePolyBezier(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp-11h]

  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( v11[0] )
  {
    v14 = v11;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v13) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v13) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v13);
        if ( (unsigned int)GrePolyBezierInternal(a1, a2, a3) )
          v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v13);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v13);
      }
    }
  }
  v8 = GrePolyBezierInternal(a1, a2, a3);
  if ( v6 )
  {
    v9 = UserReferenceDwmApiPort(v7);
    DwmSyncFlushAndWaitForBatch(v9);
  }
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v8;
}
