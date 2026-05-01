/*
 * XREFs of ?InitializePrivilegedOperations@TabViewManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1802E0980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802D3338 (--$InitializePrivilegedOperationsHelper@V-$com_ptr_t@UIPrivilegedArrangementOperations@@Uerr_exc.c)
 */

__int64 __fastcall TabViewManager::InitializePrivilegedOperations(
        TabViewManager *this,
        struct _GUID *a2,
        struct IUnknown *a3)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v9; // rcx
  const char *v10; // r9
  __int64 v11; // rax
  HRESULT (__stdcall *v12)(IUnknown *, const IID *const, void **); // rdi
  __int64 v13; // rcx
  _QWORD *v14; // r8
  GUID *v15; // rdx
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_QWORD *)((char *)this + 232);
  v5 = (_QWORD *)((char *)this + 216);
  v6 = (__int64 *)((char *)this + 224);
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  try
  {
    if ( !v7 )
    {
      QueryInterface = a3->lpVtbl->QueryInterface;
      v9 = *v6;
      *v6 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
        a3,
        &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
        v6);
      return 0LL;
    }
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b815c956_b344_4bad_a85b_b492df0f9d1c.Data4;
    if ( v11 )
    {
      v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1 )
        v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4;
      if ( v17 )
      {
        v16 = InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedArrangementOperations,wil::err_exception_policy>,>(
                a2,
                a3,
                (__int64 *)this + 30);
LABEL_21:
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14B,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v16);
          return (unsigned int)v16;
        }
        return 0LL;
      }
      v12 = a3->lpVtbl->QueryInterface;
      v18 = *v4;
      *v4 = 0LL;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v14 = v4;
      v15 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
    }
    else
    {
      v12 = a3->lpVtbl->QueryInterface;
      v13 = *v5;
      *v5 = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = v5;
      v15 = &GUID_b815c956_b344_4bad_a85b_b492df0f9d1c;
    }
    ((void (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))v12)(a3, v15, v14);
    v16 = 0;
    goto LABEL_21;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14E,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v10);
  }
  return result;
}
