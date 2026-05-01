/*
 * XREFs of ?IsBackupLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x180159134
 * Callers:
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18015E0C8 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x180157FF0 (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBackupLocationManager::IsBackupLink(PCWSTR *this, const struct _ITEMIDLIST *a2)
{
  HRESULT v3; // ebx
  LPITEMIDLIST ppidl; // [rsp+30h] [rbp-28h] BYREF
  IUnknown *punk; // [rsp+38h] [rbp-20h] BYREF

  v3 = SHCreateItemInKnownFolder(
         &FOLDERID_UserPinned,
         0x1000u,
         *this,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)&punk);
  if ( v3 >= 0 )
  {
    v3 = SHGetIDListFromObject(punk, &ppidl);
    if ( v3 >= 0 )
    {
      if ( ILIsParent(ppidl, a2, 0) || (v3 = 1, (unsigned int)CPinnedList::ILIsParentByPath(ppidl, a2, 1u)) )
        v3 = 0;
      ILFree(ppidl);
    }
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->Release)(punk);
  }
  return (unsigned int)v3;
}
