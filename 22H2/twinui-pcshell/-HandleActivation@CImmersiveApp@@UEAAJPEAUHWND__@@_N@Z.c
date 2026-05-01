/*
 * XREFs of ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180035350
 * Callers:
 *     <none>
 * Callees:
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18002B60C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180034928 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800355D0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180035650 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180035AE4 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180035B7C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005C0B0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x1801EF004 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 */

__int64 __fastcall CImmersiveApp::HandleActivation(CImmersiveApp *this, HWND a2)
{
  bool v3; // bp
  __int64 v4; // rcx
  int v6; // esi
  int v7; // r14d
  bool v8; // r8
  int v9; // ecx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  HWND v12; // [rsp+28h] [rbp-20h]
  bool v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 42);
  v13 = 0;
  v6 = 0;
  v7 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4) )
  {
    v6 = CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
           (CImmersiveApp *)((char *)this + 184),
           a2,
           v8,
           &v13);
    if ( v6 < 0 )
      return (unsigned int)v6;
    v3 = v13;
  }
  v9 = *((_DWORD *)this + 118);
  if ( (v9 & 2) == 0 )
  {
    *((_DWORD *)this + 118) = v9 | 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 580));
    v7 = 2;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 56LL))(*((_QWORD *)this + 42)) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus((char *)this + 184, 1LL);
    if ( (*((_BYTE *)this + 396) & 2) == 0 )
    {
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows((char *)this + 184);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp *)((char *)this + 184)) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 184));
    }
    *((_BYTE *)this + 696) = 1;
    *((_DWORD *)this + 175) = 1;
  }
  if ( !v3 && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 56LL))(*((_QWORD *)this + 42)) )
    CImmersiveApp::_SetApplicationForegroundPriority((char *)this - 112, 0LL);
  if ( v3 )
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged((CImmersiveApp *)((char *)this + 184));
  if ( v7 )
  {
    v11 = v7;
    v12 = a2;
    CImmersiveApp::_ScheduleApplicationNotifications(
      (CImmersiveApp *)((char *)this - 112),
      (const struct APP_CHANGE_INFO *const)&v11,
      1uLL);
  }
  return (unsigned int)v6;
}
