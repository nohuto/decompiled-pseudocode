/*
 * XREFs of ?IShellExtInit_Initialize@@YAJPEAUIUnknown@@PEFBU_ITEMIDLIST@@PEAUIDataObject@@PEAUHKEY__@@@Z @ 0x180158394
 * Callers:
 *     ?GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z @ 0x180157B00 (-GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IShellExtInit_Initialize(
        struct IUnknown *a1,
        const struct _ITEMIDLIST *a2,
        struct IDataObject *a3,
        HKEY a4)
{
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *, HKEY))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_000214e8_0000_0000_c000_000000000046,
         &v7,
         a4);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IDataObject *, _QWORD))(*(_QWORD *)v7 + 24LL))(
           v7,
           0LL,
           a3,
           0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v5;
}
