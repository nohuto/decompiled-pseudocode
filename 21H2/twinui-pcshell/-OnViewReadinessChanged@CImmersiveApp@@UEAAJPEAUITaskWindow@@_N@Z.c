/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180035CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18002B60C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180034928 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800355D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180035DAC (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180035DD8 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18003671C (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1801EAD84 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1801F0DB8 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdql @ 0x1801F3F10 (WPP_SF_Sdql.c)
 */

__int64 __fastcall CImmersiveApp::OnViewReadinessChanged(CImmersiveApp *this, struct ITaskWindow *a2, char a3)
{
  char *v3; // rdi
  HWND v5; // rax
  HWND v6; // rsi
  int v7; // edx
  int v8; // r8d
  bool v9; // bl
  int v10; // edx
  int v11; // r8d
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this + 184;
  v5 = (HWND)(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = v5;
  if ( a3
    && (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
              (CImmersiveApp::CImmersiveWindowCollection *)v3,
              v5,
              &v13) >= 0 )
  {
    if ( !v13 )
    {
      v9 = (*(unsigned int (__fastcall **)(_QWORD))(***((_QWORD ***)v3 + 21) + 216LL))(**((_QWORD **)v3 + 21)) == 3;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v3 + 19) + 32LL))(
        *((_QWORD *)v3 + 19),
        **((_QWORD **)v3 + 21));
      if ( v9 )
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncPositionReconciliation((CImmersiveApp::CImmersiveWindowCollection *)v3);
    }
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sdql(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        v7,
        v8,
        *(_QWORD *)(*((_QWORD *)v3 + 20) + 592LL),
        *(_DWORD *)(*((_QWORD *)v3 + 20) + 600LL),
        (char)v6,
        a3);
    if ( *((_QWORD *)v3 + 17)
      && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)v3) )
    {
      CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
        (CImmersiveApp::CImmersiveWindowCollection *)v3,
        v6);
      goto LABEL_12;
    }
    if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)v3)
      && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
           (CImmersiveApp::CImmersiveWindowCollection *)v3,
           v10,
           v11) )
    {
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp::CImmersiveWindowCollection *)v3);
LABEL_12:
      CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp::CImmersiveWindowCollection *)v3);
    }
  }
  return 0LL;
}
