/*
 * XREFs of ?InitializePrivilegedOperations@WindowEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180326520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowEventDispatcher::InitializePrivilegedOperations(
        WindowEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  char *v6; // rdi
  __int64 v7; // rcx
  GUID *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( !v4 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 88;
    v7 = *((_QWORD *)this + 11);
    *(_QWORD *)v6 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64, const struct _GUID *, _QWORD))(*(_QWORD *)v7 + 16LL))(v7, a2, 0LL);
    v8 = &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
LABEL_25:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(a3, v8, v6);
    return 0LL;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
  if ( !v9 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 96;
    v10 = (_QWORD *)*((_QWORD *)this + 12);
    *(_QWORD *)v6 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v10 + 16LL))(v10, *v10, 0LL);
    v8 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_25;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( !v11 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 104;
    v12 = (_QWORD *)*((_QWORD *)this + 13);
    *(_QWORD *)v6 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v12 + 16LL))(v12, *v12, 0LL);
    v8 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
    goto LABEL_25;
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4;
  if ( !v13 )
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v6 = (char *)this + 112;
    v14 = (_QWORD *)*((_QWORD *)this + 14);
    *(_QWORD *)v6 = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v14 + 16LL))(v14, *v14, 0LL);
    v8 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
    goto LABEL_25;
  }
  return 0LL;
}
