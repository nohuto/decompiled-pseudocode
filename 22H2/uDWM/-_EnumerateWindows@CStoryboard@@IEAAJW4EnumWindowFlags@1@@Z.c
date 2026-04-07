/*
 * XREFs of ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x18000A0D4
 * Callers:
 *     ?OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ @ 0x180007060 (-OnEndTransitionRequest@CLauncherDismiss@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x18000A070 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ @ 0x1800B0100 (-OnEndTransitionRequest@CGroupingStoryboard@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x1800B0170 (-OnEndTransitionRequest@CGrowPanel@@UEAAJXZ.c)
 *     ?OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ @ 0x1800B0290 (-OnEndTransitionRequest@CShrinkPanel@@UEAAJXZ.c)
 *     ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800B0314 (-OnStoryboardTimeout@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000A254 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180018ACC (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18002B1EC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x1800340F4 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStoryboard::_EnumerateWindows(CStoryboard *a1, unsigned int a2)
{
  __int64 v4; // rax
  char v5; // di
  struct _LIST_ENTRY *WindowListForDesktop; // rbp
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int i; // ebx
  CTransitionVisualController *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbp
  struct CTransitionWindowSnapshot *v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  if ( (unsigned int)GetDesktopID(1LL, &v14) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) + 96LL);
    if ( (v4 == -1 || v4 == v14)
      && *(_DWORD *)((*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 16LL))(a1) + 4) )
    {
      v5 = 1;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               v14);
      Blink = WindowListForDesktop->Blink;
      do
      {
        if ( Blink == WindowListForDesktop )
          break;
        if ( (GetWindowLongPtrW((HWND)Blink[2].Blink, -16) & 0x10000000) != 0
          || ((__int64)Blink[38].Blink & 0x20000000) == 0 )
        {
          v5 = CStoryboard::_InvokeWindowEnumCallback(a1, Blink, a2, &v13);
        }
        Blink = Blink->Blink;
      }
      while ( v5 );
      for ( i = 0; v5; ++i )
      {
        v9 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31);
        if ( i >= *((_DWORD *)v9 + 20) )
          break;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v9, i, &v12) >= 0 )
        {
          v11 = *(_QWORD *)(*((_QWORD *)v12 + 35) + 32LL);
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(v11 + 40)) )
            v5 = CStoryboard::_InvokeWindowEnumCallback(a1, v11, a2, &v13);
        }
      }
    }
  }
  else
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
      1LL,
      -2147467259,
      0x14D6u);
  }
  result = (unsigned int)v13;
  if ( v13 < 0 )
  {
    CStoryboard::Abandon(a1);
    return (unsigned int)v13;
  }
  return result;
}
