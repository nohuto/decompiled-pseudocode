/*
 * XREFs of ?_GetIDListFromObject@@YAJPEAUIUnknown@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180144CF8
 * Callers:
 *     PropVariantToIDList @ 0x1801467A4 (PropVariantToIDList.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _GetIDListFromObject(struct IUnknown *a1, struct _ITEMIDLIST **a2)
{
  int v4; // edi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v4 = -2147467262;
  if ( a1 )
  {
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
           a1,
           &GUID_1079acfc_29bd_11d3_8e0d_00c04f6837d5,
           &v6) < 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
             a1,
             &GUID_1ac3d9f0_175c_11d1_95be_00609797ea4f,
             &v7) >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64, struct _ITEMIDLIST **))(*(_QWORD *)v7 + 40LL))(v7, a2);
        if ( v4 >= 1 )
          v4 = -2147467259;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, struct _ITEMIDLIST **))(*(_QWORD *)v6 + 40LL))(v6, a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v4;
}
