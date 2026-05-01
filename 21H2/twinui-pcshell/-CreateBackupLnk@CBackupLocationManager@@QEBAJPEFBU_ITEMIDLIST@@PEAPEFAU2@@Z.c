/*
 * XREFs of ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154294
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158470 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1801401A0 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x1801508E8 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z @ 0x180155AA8 (-GetBackupPath@CBackupLocationManager@@QEBAJPEAPEAG@Z.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x180158160 (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 *     ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x18015D76C (-_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z.c)
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015DCCC (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18015DF88 (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBackupLocationManager::CreateBackupLnk(
        CBackupLocationManager *this,
        const struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST **a3,
        __int64 a4)
{
  int v7; // ebx
  int v8; // ebx
  unsigned __int16 *v9; // r14
  int NewShortcut; // eax
  HRESULT StringW; // ebx
  const WCHAR *FileNameW; // rax
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v16; // [rsp+50h] [rbp-B0h] BYREF
  struct IApplicationResolver *ppv; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pszDir[264]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR pszAssoc[264]; // [rsp+280h] [rbp+180h] BYREF
  WCHAR pszOut[264]; // [rsp+490h] [rbp+390h] BYREF

  v14 = 1614872576;
  *a3 = 0LL;
  v7 = SHGetNameAndFlagsW(a2, 0x8000u, pszAssoc, a4, &v14);
  if ( v7 >= 0 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( (v14 & 0x40000000) == 0
      || CoCreateInstance(
           &CLSID_StartMenuCacheAndAppResolver,
           0LL,
           3u,
           &GUID_de25675a_72de_44b4_9373_05170450c140,
           (LPVOID *)&ppv) < 0 )
    {
      goto LABEL_31;
    }
    if ( _GetAppIDFromIDList(ppv, a2, (unsigned __int16 **)&pv, (int *)&ppidl) >= 0 )
    {
      LOBYTE(v8) = *(_WORD *)pv != 0;
      if ( (_DWORD)ppidl && *(_WORD *)pv )
        v9 = (unsigned __int16 *)pv;
      else
        CoTaskMemFree(pv);
    }
    (*(void (__fastcall **)(struct IApplicationResolver *))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( !v8 )
      goto LABEL_31;
    if ( SHGetKnownFolderIDList(&FOLDERID_ImplicitAppShortcuts, 0x9000u, 0LL, &ppidl) >= 0 )
    {
      if ( ILIsParent(ppidl, a2, 0) || (v8 = 1, CPinnedList::ILIsParentByPath(ppidl, a2, 0)) )
        v8 = 0;
      ILFree(ppidl);
    }
    if ( !v8 || CBackupLocationManager::GetBackupPath(this, &v16) < 0 )
    {
LABEL_31:
      v7 = SHILClone(a2, a3);
      goto LABEL_32;
    }
    if ( (v14 & 0x10000) != 0 )
    {
      NewShortcut = CBackupLocationManager::_DuplicateShortcut(this, pszAssoc, v16, a3);
    }
    else
    {
      v7 = StringCchCopyW((char *)pszDir, 260LL, (char *)v16);
      if ( v7 < 0 )
        goto LABEL_30;
      LODWORD(ppidl) = 260;
      StringW = AssocQueryStringW(0x42u, ASSOCSTR_FRIENDLYAPPNAME, pszAssoc, 0LL, pszOut, (DWORD *)&ppidl);
      if ( StringW < 0 )
        goto LABEL_36;
      if ( !PathIsFileSpecW(pszOut) || PathCleanupSpec(pszDir, pszOut) < 0 )
        StringW = -2147467259;
      if ( StringW < 0 || PathCchAppend(pszDir, 0x104uLL, pszOut) < 0 )
      {
LABEL_36:
        FileNameW = PathFindFileNameW(pszAssoc);
        v7 = PathCchAppend(pszDir, 0x104uLL, FileNameW);
        if ( v7 < 0 )
          goto LABEL_30;
      }
      v7 = PathCchRenameExtension(pszDir, 0x104uLL, L".lnk");
      if ( v7 < 0 )
        goto LABEL_30;
      NewShortcut = CBackupLocationManager::_CreateNewShortcut(this, a2, pszAssoc, v14, pszDir, v9, a3);
    }
    v7 = NewShortcut;
LABEL_30:
    CoTaskMemFree(v16);
LABEL_32:
    CoTaskMemFree(v9);
  }
  return (unsigned int)v7;
}
