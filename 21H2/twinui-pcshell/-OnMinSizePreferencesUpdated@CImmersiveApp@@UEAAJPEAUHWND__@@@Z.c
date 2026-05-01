/*
 * XREFs of ?OnMinSizePreferencesUpdated@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180084810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::OnMinSizePreferencesUpdated(CImmersiveApp *this, HWND a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)this + 45) + 216LL))(*((_QWORD *)this + 45), a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B0,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    return 0LL;
  }
}
