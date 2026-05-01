/*
 * XREFs of ?get_PersistingStateName@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180065D60
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::get_PersistingStateName(WindowWrapperBase *this, HSTRING *a2)
{
  DWORD CurrentThreadId; // r14d
  unsigned int v4; // esi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-58h]
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v14; // [rsp+80h] [rbp+8h] BYREF
  HSTRING *v15; // [rsp+88h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+90h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+20h] BYREF

  v15 = a2;
  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), SRWLock);
  if ( *((_DWORD *)this + 80) == 1 )
  {
    *(_QWORD *)&v12 = (char *)this - 16;
    *((_QWORD *)&v12 + 1) = &v15;
    CurrentThreadId = GetCurrentThreadId();
    if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v4 = 0;
    else
      v4 = 4;
    LODWORD(v14) = 0;
    SRWLock[1] = 0LL;
    v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    v7 = 0LL;
    if ( v5 )
    {
      v5[3] = 1;
      *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_OWORD *)v6 + 1) = v12;
      *(_QWORD *)v6 = off_1804FE1D8;
      *((_QWORD *)v6 + 4) = &v14;
      v7 = v6;
    }
    v8 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v7, 0LL);
    if ( v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v8 >= 0 )
      v8 = (int)v14;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x53B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8,
        v10);
      __debugbreak();
      JUMPOUT(0x180198F41LL);
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return 0LL;
}
