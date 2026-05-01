/*
 * XREFs of ?_CreateKnownFolderPidl@CBackupLocationManager@@AEBAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015D43C
 * Callers:
 *     ?_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015DB5C (-_DuplicateShortcut@CBackupLocationManager@@AEBAJPEBG0PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E904 (-_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     BindCtx_SetMode @ 0x180153D90 (BindCtx_SetMode.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBackupLocationManager::_CreateKnownFolderPidl(
        PCWSTR *this,
        const unsigned __int16 *a2,
        struct _ITEMIDLIST **a3)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  WCHAR *v8; // rcx
  WCHAR v9; // ax
  WCHAR *v10; // rax
  const WCHAR *FileNameW; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PWSTR ppszPath; // [rsp+30h] [rbp-D0h] BYREF
  IBindCtx *pbc; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  *a3 = 0LL;
  ppszPath = 0LL;
  v6 = SHGetKnownFolderPath(&FOLDERID_UserPinned, 0x8000u, 0LL, &ppszPath);
  if ( v6 >= 0 )
  {
    if ( (PathComparePaths(ppszPath, a2) & 8) == 0 )
      goto LABEL_12;
    v7 = 260LL;
    v8 = pszPath;
    do
    {
      if ( v7 == -2147483386 )
        break;
      v9 = *(WCHAR *)((char *)v8 + (char *)L"::{1f3427c8-5c10-4210-aa03-2ee45287d668}\\" - (char *)pszPath);
      if ( !v9 )
        break;
      *v8++ = v9;
      --v7;
    }
    while ( v7 );
    v10 = v8 - 1;
    if ( v7 )
      v10 = v8;
    *v10 = 0;
    v6 = v7 == 0 ? 0x8007007A : 0;
    if ( !v7 )
      goto LABEL_16;
    v6 = PathCchAppend(pszPath, 0x104uLL, *this);
    if ( v6 < 0 )
      goto LABEL_16;
    FileNameW = PathFindFileNameW(a2);
    if ( FileNameW )
    {
      v6 = PathCchAppend(pszPath, 0x104uLL, FileNameW);
      if ( v6 >= 0 && (int)BindCtx_SetMode(v13, v12, &pbc) >= 0 )
      {
        v6 = SHParseDisplayName(pszPath, pbc, a3, 0, 0LL);
        ((void (__fastcall *)(IBindCtx *))pbc->lpVtbl->Release)(pbc);
      }
    }
    else
    {
LABEL_12:
      v6 = -2147467259;
    }
LABEL_16:
    CoTaskMemFree(ppszPath);
  }
  return (unsigned int)v6;
}
