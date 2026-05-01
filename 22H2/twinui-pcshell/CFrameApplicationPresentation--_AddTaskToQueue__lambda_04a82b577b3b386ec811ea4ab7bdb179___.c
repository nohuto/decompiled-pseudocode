/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x180067150
 * Callers:
 *     ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x180067120 (-SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(
        _DWORD *a1,
        __int128 *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // r14
  __int128 v6; // xmm6
  unsigned int v7; // ebp
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  _DWORD *v10; // rbx
  int v11; // ebx
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a1[14] == 2 )
  {
    v11 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v4 = *(_QWORD *)a1;
    v5 = a1;
    v13[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(v4 + 8))(a1);
    v6 = *a2;
    v7 = a1[12];
    v14 = *a2;
    v13[1] = a1;
    v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = 0LL;
    v10 = v8;
    if ( v8 )
    {
      v8[3] = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_QWORD *)v10 + 2) = 0LL;
      if ( v10 + 4 != (_DWORD *)v13 )
      {
        *((_QWORD *)v10 + 2) = a1;
        v5 = 0LL;
      }
      *((_QWORD *)v10 + 3) = a1;
      v9 = v10;
      *((_OWORD *)v10 + 2) = v6;
      *(_QWORD *)v10 = off_1804FE200;
    }
    v11 = SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v11 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return (unsigned int)v11;
}
