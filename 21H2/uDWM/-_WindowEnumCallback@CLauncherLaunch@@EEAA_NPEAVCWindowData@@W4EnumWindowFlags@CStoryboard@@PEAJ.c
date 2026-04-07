/*
 * XREFs of ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003930
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003B50 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800087CC (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180009074 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18002BCBC (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z @ 0x1800AED24 (-CommonAnimate@CLauncherLaunch@@AEAAJPEAVCWindowData@@PEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CLauncherLaunch::_WindowEnumCallback(__int64 a1, struct tagRECT *a2, char a3, int *a4)
{
  char v8; // al
  char v9; // r14
  struct CAnimationComponent *v10; // rdi
  int v11; // esi
  int v12; // ecx
  int v14; // eax
  struct CAnimationComponent *v15; // [rsp+68h] [rbp+20h] BYREF

  v8 = CFlyoutPopup::_WindowEnumCallback();
  v9 = v8;
  if ( *a4 < 0 || !v8 )
    return v9;
  v10 = 0LL;
  v11 = 0;
  v15 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v12 = a2[38].right & 0xFFF;
    if ( v12 == 2 )
    {
      if ( a2[7].left == 1 )
        a2[38].right |= 0x4000000u;
      if ( CWindowData::WillEndAnimationCloaked((CWindowData *)a2) )
        goto LABEL_6;
      v14 = CLauncherLaunch::CommonAnimate((CLauncherLaunch *)a1, (struct CWindowData *)a2, &v15);
      v10 = v15;
      goto LABEL_16;
    }
    if ( v12 == 22
      && CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
      && ContainsRect((const struct tagRECT *)(a1 + 120), a2 + 3) )
    {
      v14 = CLauncherLaunch::CommonAnimate((CLauncherLaunch *)a1, (struct CWindowData *)a2, 0LL);
LABEL_16:
      v11 = v14;
    }
  }
LABEL_6:
  *a4 = v11;
  if ( v10 )
    CBaseObject::Release(v10);
  return v9;
}
