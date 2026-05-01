/*
 * XREFs of ?_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z @ 0x180160C18
 * Callers:
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x180160604 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x180160890 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall _IsFilePlaceholder(IShellFolder *psfParent, LPCITEMIDLIST pidl)
{
  bool v2; // bl
  unsigned int v4; // [rsp+50h] [rbp+18h] BYREF
  struct IShellItem *ppvItem; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  if ( SHCreateItemWithParent(0LL, psfParent, pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&ppvItem) >= 0 )
  {
    if ( (int)IShellItem_GetFilePlaceholderStatus(ppvItem, &v4) >= 0 )
      v2 = (v4 & 2) == 0;
    ((void (__fastcall *)(struct IShellItem *))ppvItem->lpVtbl->Release)(ppvItem);
  }
  return v2;
}
