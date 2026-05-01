/*
 * XREFs of ?IsTombstoneLink@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@@Z @ 0x180159530
 * Callers:
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18015E0C8 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z @ 0x180157FF0 (-ILIsParentByPath@CPinnedList@@SAHPEFBU_ITEMIDLIST@@0H@Z.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F120 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9B20 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

__int64 __fastcall CBackupLocationManager::IsTombstoneLink(char **this, const struct _ITEMIDLIST *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  WCHAR *v6; // rax
  __int64 v7; // rax
  WCHAR *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  char *v11; // r8
  WCHAR v12; // ax
  WCHAR *v13; // rax
  HRESULT v14; // eax
  LPCITEMIDLIST *p_pidl1; // [rsp+30h] [rbp-D0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-C8h] BYREF
  char v18; // [rsp+40h] [rbp-C0h]
  LPCITEMIDLIST pidl1; // [rsp+48h] [rbp-B8h] BYREF
  IUnknown *punk[2]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR pszItem[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v3 = StringCchCopyW((char *)pszItem, 260LL, *this);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 3772LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v3);
    return v3;
  }
  v5 = 260LL;
  v6 = pszItem;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  v3 = v5 == 0 ? 0x80070057 : 0;
  if ( v5 )
    v7 = 260 - v5;
  else
    v7 = 0LL;
  if ( !v5 )
    goto LABEL_27;
  v8 = &pszItem[v7];
  v9 = 260 - v7;
  if ( 260 != v7 )
  {
    v10 = 2147483646LL;
    v11 = (char *)((char *)L"\\Tombstones" - (char *)v8);
    do
    {
      if ( !v10 )
        break;
      v12 = *(WCHAR *)((char *)v8 + (_QWORD)v11);
      if ( !v12 )
        break;
      *v8 = v12;
      --v10;
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  v13 = v8 - 1;
  if ( v9 )
    v13 = v8;
  *v13 = 0;
  v3 = v9 == 0 ? 0x8007007A : 0;
  if ( !v9 )
  {
LABEL_27:
    v4 = 3773LL;
    goto LABEL_28;
  }
  punk[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)punk);
  v14 = SHCreateItemInKnownFolder(
          &FOLDERID_UserPinned,
          0x1000u,
          pszItem,
          &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
          (void **)punk);
  v3 = v14;
  if ( v14 >= 0 )
  {
    p_pidl1 = &pidl1;
    pidl1 = 0LL;
    ppidl = 0LL;
    v18 = 1;
    v3 = SHGetIDListFromObject(punk[0], &ppidl);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pidl1);
    if ( (v3 & 0x80000000) == 0 )
    {
      if ( ILIsParent(pidl1, a2, 0) || (v3 = 1, (unsigned int)CPinnedList::ILIsParentByPath(pidl1, a2, 1u)) )
        v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC3,
        (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)v3);
    }
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pidl1,
      0LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC0,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)punk);
  return v3;
}
