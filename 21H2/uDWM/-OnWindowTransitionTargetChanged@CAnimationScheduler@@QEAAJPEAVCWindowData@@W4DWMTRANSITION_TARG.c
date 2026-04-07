/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003FD6C
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18000F434 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003FC80 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180002CE0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x180007134 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x180008A38 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180034934 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180034960 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x18009A788 (McTemplateU0pd_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  int v12; // edx
  bool v13; // zf
  __int64 i; // rdi
  _DWORD *v16; // rcx
  CDesktopManager *v17; // rax
  HWND v18; // rdx
  int v19; // edi
  int SnapshotIndex; // eax
  CTransitionVisualController *v21; // rcx
  struct CTransitionWindowSnapshot *v22; // [rsp+30h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pd_EtwEventWriteTransfer(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 620), a4);
  CopyRect((LPRECT)(a2 + 636), lprcSrc);
  CopyRect((LPRECT)(a2 + 652), a6);
  CopyRect((LPRECT)(a2 + 668), a7);
  CopyRect((LPRECT)(a2 + 684), a8);
  v12 = a3 | *(_DWORD *)(a2 + 616) & 0x2000000;
  v13 = *(_QWORD *)(a2 + 384) == 0LL;
  *(_DWORD *)(a2 + 616) = v12;
  if ( !v13 && (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
  {
    if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30), v12, 0LL) )
    {
      if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
      {
        CTransitionVisualController::EnsureSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
          (struct CWindowData *)a2);
        v17 = CDesktopManager::s_pDesktopManagerInstance;
        v18 = *(HWND *)(a2 + 40);
        v19 = *(_DWORD *)(a2 + 616) | 0x4000000;
        *(_DWORD *)(a2 + 616) = v19;
        SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(*((CTransitionVisualController **)v17 + 31), v18);
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v21, SnapshotIndex, &v22) >= 0 )
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 35) + 32LL) + 616LL) = v19;
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v16 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v16[6] )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v16 + 104LL))(v16, a2, a3);
  }
  return 0LL;
}
