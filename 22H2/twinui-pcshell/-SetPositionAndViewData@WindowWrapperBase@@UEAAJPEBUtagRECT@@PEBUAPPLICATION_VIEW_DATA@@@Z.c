/*
 * XREFs of ?SetPositionAndViewData@WindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18006A140
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetPositionAndViewData(
        WindowWrapperBase *this,
        const struct tagRECT *a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  DWORD CurrentThreadId; // r14d
  unsigned int v4; // esi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-68h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-48h]
  const struct APPLICATION_VIEW_DATA **v14; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v16; // [rsp+90h] [rbp+8h] BYREF
  const struct tagRECT *v17; // [rsp+98h] [rbp+10h] BYREF
  const struct APPLICATION_VIEW_DATA *v18; // [rsp+A0h] [rbp+18h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a3;
  v17 = a2;
  *(_QWORD *)&v13 = &v17;
  *((_QWORD *)&v13 + 1) = this;
  v14 = &v18;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  LODWORD(v16) = 0;
  v12 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v6 + 1) = v13;
    *((_QWORD *)v6 + 4) = v14;
    *(_QWORD *)v6 = off_1804FE250;
    *((_QWORD *)v6 + 5) = &v16;
    v7 = v6;
  }
  v8 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    v8 = (int)v16;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x157,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v8,
      v10);
    __debugbreak();
    JUMPOUT(0x18019A557LL);
  }
  return 0LL;
}
