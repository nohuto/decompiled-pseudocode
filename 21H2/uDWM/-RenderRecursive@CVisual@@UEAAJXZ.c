/*
 * XREFs of ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18002AD80
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000C170 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800119AC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180015534 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800169E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18002AA14 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002CED0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800447B8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004506C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180045354 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800453D0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180045450 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800454C8 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180045530 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800524A0 (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800524E4 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180082774 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800ABB30 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800B6F70 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::RenderRecursive(CVisual *this)
{
  int v1; // eax
  __int64 v4; // rdi
  char v5; // si
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0xFFFFFFFE) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 48LL))(this);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x143,
        (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 1) != 0 )
  {
    LODWORD(v4) = -1;
    v5 = 0;
    while ( 1 )
    {
      if ( !v5 )
      {
        LODWORD(v4) = *((_DWORD *)this + 18);
        v5 = 1;
      }
      v4 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v4 == -1 )
        break;
      v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4);
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x154,
          (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
          (const char *)(unsigned int)v7);
        return v8;
      }
    }
    *((_DWORD *)this + 20) &= ~1u;
    v1 = *((_DWORD *)this + 20);
  }
  if ( (v1 & 0xFFFFFFFE) == 0 )
    return 0LL;
  v11 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 56LL))(this);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15F,
    (__int64)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
