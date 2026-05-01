/*
 * XREFs of ?_CreateNewShortcut@CBackupLocationManager@@AEBAJPEFBU_ITEMIDLIST@@PEBGK11PEAPEFAU2@@Z @ 0x18015D5FC
 * Callers:
 *     ?CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x180154124 (-CreateBackupLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E904 (-_PersistLnk@CBackupLocationManager@@AEBAJPEAUIShellLinkW@@PEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18015F214 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 *     ?s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z @ 0x18015F604 (-s_ShouldCreateNewFile@CBackupLocationManager@@CAJPEAGI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBackupLocationManager::_CreateNewShortcut(
        CBackupLocationManager *this,
        const struct _ITEMIDLIST *a2,
        char *a3,
        int a4,
        unsigned __int16 *a5,
        const unsigned __int16 *a6,
        struct _ITEMIDLIST **a7)
{
  unsigned int v11; // edx
  int NewFile; // ebx
  __int16 v14; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v15; // [rsp+38h] [rbp-C8h]
  struct IShellLinkW *ppv; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v18[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR pszPath[264]; // [rsp+270h] [rbp+170h] BYREF

  NewFile = StringCchCopyW((char *)v18, 260LL, (char *)a5);
  if ( NewFile < 0 )
    return (unsigned int)NewFile;
  NewFile = CBackupLocationManager::s_ShouldCreateNewFile(v18, v11);
  if ( NewFile < 0 )
    return (unsigned int)NewFile;
  NewFile = CoCreateInstance(&CLSID_ShellLink, 0LL, 3u, &GUID_000214f9_0000_0000_c000_000000000046, (LPVOID *)&ppv);
  if ( NewFile < 0 )
    return (unsigned int)NewFile;
  NewFile = ((__int64 (__fastcall *)(struct IShellLinkW *, const struct _ITEMIDLIST *))ppv->lpVtbl->SetIDList)(ppv, a2);
  if ( NewFile >= 0 )
  {
    if ( a6 )
    {
      NewFile = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))ppv->lpVtbl->QueryInterface)(
                  ppv,
                  &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
                  &v17);
      if ( NewFile < 0 )
        goto LABEL_17;
      v15 = a6;
      v14 = 31;
      NewFile = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, __int16 *))(*(_QWORD *)v17 + 48LL))(
                  v17,
                  &PKEY_AppUserModel_ID,
                  &v14);
      if ( NewFile >= 0 )
        NewFile = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( NewFile >= 0 )
    {
      if ( (a4 & 0x400000) == 0 || (a4 & 0x20000000) != 0 )
      {
LABEL_15:
        if ( NewFile >= 0 )
          NewFile = CBackupLocationManager::_PersistLnk(this, ppv, v18, a7);
        goto LABEL_17;
      }
      NewFile = StringCchCopyW((char *)pszPath, 260LL, a3);
      if ( NewFile >= 0 )
      {
        PathRemoveFileSpecW(pszPath);
        NewFile = ((__int64 (__fastcall *)(struct IShellLinkW *, WCHAR *))ppv->lpVtbl->SetWorkingDirectory)(
                    ppv,
                    pszPath);
        goto LABEL_15;
      }
    }
  }
LABEL_17:
  ((void (__fastcall *)(struct IShellLinkW *))ppv->lpVtbl->Release)(ppv);
  if ( NewFile >= 0 )
    CBackupLocationManager::s_CopyLocalizedName((const unsigned __int16 *)a3, v18);
  return (unsigned int)NewFile;
}
