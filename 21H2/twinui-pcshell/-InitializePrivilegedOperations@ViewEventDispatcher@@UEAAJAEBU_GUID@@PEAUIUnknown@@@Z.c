/*
 * XREFs of ?InitializePrivilegedOperations@ViewEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180313D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::InitializePrivilegedOperations(
        ViewEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  HRESULT (__stdcall *v6)(IUnknown *, const IID *const, void **); // rdi
  __int64 v7; // rax
  char *v8; // rbx
  HRESULT (__stdcall *v9)(IUnknown *, const IID *const, void **); // rdi
  __int64 v10; // rax
  char *v11; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  if ( v4 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
    if ( v7 )
    {
      v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
        v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
      if ( !v10 )
      {
        v11 = (char *)this + 280;
        QueryInterface = a3->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
        ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
          a3,
          &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c,
          v11);
      }
    }
    else
    {
      v8 = (char *)this + 272;
      v9 = a3->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
      ((void (__fastcall *)(struct IUnknown *, GUID *, char *))v9)(a3, &GUID_3dc37409_1289_4110_adb6_a03083c66a7d, v8);
    }
  }
  else
  {
    v5 = (char *)this + 264;
    v6 = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))v6)(a3, &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9, v5);
  }
  return 0LL;
}
