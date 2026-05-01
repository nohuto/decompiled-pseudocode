/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18022A188
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18022A08C (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022B350 (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18022C874 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, char *),
        void **a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rdi
  int v8; // eax
  int ShellExperienceView; // ebx
  void *v10; // rcx
  void *v12; // rdi
  void *v13; // rcx
  __int64 (__fastcall *v14)(void *, __int64, _QWORD); // rbx
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v17)(_QWORD, GUID *, char *); // rsi
  void *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF
  void **v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 51, a2);
  v7 = **a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
  v8 = v7(a3, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, (char *)this + 480);
  ShellExperienceView = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    v10 = *a4;
    *a4 = 0LL;
    if ( !v10 )
      return (unsigned int)ShellExperienceView;
LABEL_3:
    operator delete(v10, (const struct std::nothrow_t *)8);
    return (unsigned int)ShellExperienceView;
  }
  v12 = *a4;
  *a4 = 0LL;
  v13 = (void *)*((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = v12;
  if ( v13 )
  {
    operator delete(v13, (const struct std::nothrow_t *)8);
    v12 = (void *)*((_QWORD *)this + 53);
  }
  v20 = 0LL;
  v14 = *(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v12 + 16LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  ShellExperienceView = v14(v12, 1LL, &v20);
  if ( ShellExperienceView < 0 )
  {
    v15 = 333LL;
    goto LABEL_9;
  }
  v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
  v17 = **v20;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
  ShellExperienceView = v17(v16, &GUID_99f6b4c8_3fa6_4b31_b246_6527a04e1086, (char *)this + 488);
  if ( ShellExperienceView < 0 )
  {
    v15 = 334LL;
    goto LABEL_9;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v15 = 336LL;
    goto LABEL_9;
  }
  ShellExperienceView = CortanaSharedExperienceManager::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v15 = 337LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v10 = *a4;
    *a4 = 0LL;
    if ( !v10 )
      return (unsigned int)ShellExperienceView;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  v18 = *a4;
  *a4 = 0LL;
  if ( v18 )
    operator delete(v18, (const struct std::nothrow_t *)8);
  return 0LL;
}
