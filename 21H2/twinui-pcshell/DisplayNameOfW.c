/*
 * XREFs of DisplayNameOfW @ 0x18015225C
 * Callers:
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x1801508E8 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x180160604 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall DisplayNameOfW(__int64 a1, const ITEMIDLIST *a2, __int64 a3, WCHAR *a4)
{
  HRESULT result; // eax
  STRRET pstr; // [rsp+30h] [rbp-138h] BYREF

  *a4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, const ITEMIDLIST *, __int64, STRRET *))(*(_QWORD *)a1 + 88LL))(
             a1,
             a2,
             a3,
             &pstr);
  if ( result >= 0 )
    return StrRetToBufW(&pstr, a2, a4, 0x104u);
  return result;
}
