/*
 * XREFs of ?SHCreateOriginalItemBindCtx@@YAJPEBU_ITEMIDLIST_ABSOLUTE@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@KW4REPARSE_PARTIAL_IDLIST_MODE@@PEAPEAUIBindCtx@@@Z @ 0x180160970
 * Callers:
 *     ?GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z @ 0x18016026C (-GetParsingBindCtx@@YAJPEAUIShellFolder2@@PEFBU_ITEMID_CHILD@@HPEAPEAUIBindCtx@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetFileAttributesFromSFGAOFlags@@YAKK@Z @ 0x180160200 (-GetFileAttributesFromSFGAOFlags@@YAKK@Z.c)
 *     ?MarkItemAsSimple@@YAJPEAUIShellItem@@@Z @ 0x180160840 (-MarkItemAsSimple@@YAJPEAUIShellItem@@@Z.c)
 *     ?SHCreateFileSysBindCtxFromAttributes@@YAJPEAUIBindCtx@@KPEAPEAU1@@Z @ 0x180160900 (-SHCreateFileSysBindCtxFromAttributes@@YAJPEAUIBindCtx@@KPEAPEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SHCreateOriginalItemBindCtx(
        __int64 a1,
        IShellFolder *a2,
        const ITEMIDLIST *a3,
        __int64 a4,
        __int64 a5,
        struct IBindCtx **a6)
{
  int v6; // ebx
  DWORD FileAttributesFromSFGAOFlags; // eax
  struct IBindCtx *v8; // rcx
  struct IBindCtx *v9; // rcx
  struct IShellItem *ppvItem; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]

  *a6 = 0LL;
  v6 = SHCreateItemWithParent(0LL, a2, a3, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&ppvItem);
  if ( v6 >= 0 )
  {
    v6 = ((__int64 (__fastcall *)(struct IShellItem *, __int64, unsigned int *))ppvItem->lpVtbl->GetAttributes)(
           ppvItem,
           1614807040LL,
           &v12);
    if ( v6 >= 0 )
    {
      FileAttributesFromSFGAOFlags = GetFileAttributesFromSFGAOFlags(v12);
      v6 = SHCreateFileSysBindCtxFromAttributes(v8, FileAttributesFromSFGAOFlags, a6);
      if ( v6 >= 0 )
      {
        v9 = *a6;
        v13[0] = 16;
        v13[1] = 0;
        v14 = 4096LL;
        v6 = ((__int64 (__fastcall *)(struct IBindCtx *, _DWORD *))v9->lpVtbl->SetBindOptions)(v9, v13);
        if ( v6 < 0
          || (v6 = MarkItemAsSimple(ppvItem), v6 < 0)
          || (v6 = ((__int64 (__fastcall *)(struct IBindCtx *, const wchar_t *, struct IShellItem *))(*a6)->lpVtbl->RegisterObjectParam)(
                     *a6,
                     L"ParseOriginalItem",
                     ppvItem),
              v6 < 0) )
        {
          ((void (__fastcall *)(struct IBindCtx *))(*a6)->lpVtbl->Release)(*a6);
          *a6 = 0LL;
        }
      }
    }
    ((void (__fastcall *)(struct IShellItem *))ppvItem->lpVtbl->Release)(ppvItem);
  }
  return (unsigned int)v6;
}
