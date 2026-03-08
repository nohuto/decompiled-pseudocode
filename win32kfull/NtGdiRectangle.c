/*
 * XREFs of NtGdiRectangle @ 0x1C02AFBE0
 * Callers:
 *     NtGdiRoundRect @ 0x1C02AFD00 (NtGdiRoundRect.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0269698 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C029CD84 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C02AAF6C (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02AAF94 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C02AB074 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     GreRectangle @ 0x1C02AF0B0 (GreRectangle.c)
 */

__int64 __fastcall NtGdiRectangle(Gre::Base *a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-80h]

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, (HDC)a1);
  if ( v16[0] )
  {
    v18 = v16;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v17) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v17) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v17);
        if ( (unsigned int)GreRectangle(a1, a2, a3, a4, a5) )
          v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v17);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v17);
      }
    }
  }
  v12 = GreRectangle(a1, a2, a3, a4, a5);
  if ( v9 )
  {
    v14 = UserReferenceDwmApiPort(v11, v10, v13);
    DwmSyncFlushAndWaitForBatch(v14);
  }
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v12;
}
