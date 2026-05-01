/*
 * XREFs of ?SetIsOccluded@CImmersiveApp@@UEAAJH@Z @ 0x18003F670
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetIsOccluded(CImmersiveApp *this, int a2)
{
  bool v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = a2 != 0;
  *((_BYTE *)this + 410) = a2 != 0;
  v5 = (_QWORD *)*((_QWORD *)this + 47);
  v6 = &v5[*((_QWORD *)this + 48)];
  while ( v5 != v6 )
  {
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(*(_QWORD *)*v5 + 40LL))(
           *v5,
           &GUID_f4a53d68_890b_4931_bdbf_71158377eece,
           &v14);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EE8,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v7,
        v12);
    v9 = v14;
    if ( v14 )
    {
      LOBYTE(v8) = v4;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 640LL))(v14, v8);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1EEC,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v10,
          v12);
      v9 = v14;
    }
    if ( v9 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ++v5;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
