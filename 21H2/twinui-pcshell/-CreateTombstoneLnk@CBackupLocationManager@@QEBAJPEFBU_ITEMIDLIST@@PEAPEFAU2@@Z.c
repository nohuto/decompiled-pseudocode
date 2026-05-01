/*
 * XREFs of ?CreateTombstoneLnk@CBackupLocationManager@@QEBAJPEFBU_ITEMIDLIST@@PEAPEFAU2@@Z @ 0x1801545E4
 * Callers:
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18015D990 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x180099598 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x180099650 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 *     BindCtx_SetMode @ 0x180153F00 (BindCtx_SetMode.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180157E1C (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z @ 0x18015E56C (-_GetTombstoneShortcutLocation@CBackupLocationManager@@AEBAJPEAG0_K@Z.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     ?s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z @ 0x18015F384 (-s_CopyLocalizedName@CBackupLocationManager@@CAJPEBG0@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CBackupLocationManager::CreateTombstoneLnk(
        CBackupLocationManager *this,
        const struct _ITEMIDLIST *a2,
        struct _ITEMIDLIST **a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  HRESULT TombstoneShortcutLocation; // ebx
  int v9; // eax
  struct _ITEMIDLIST *v10; // rdi
  const ITEMIDLIST *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // bl
  LPITEMIDLIST v15; // rax
  LPCITEMIDLIST v16; // rdx
  const struct _ITEMIDLIST *ID; // rax
  const struct _HIDDENITEMID *HiddenID; // rax
  unsigned __int16 *v19; // r10
  const struct _ITEMIDLIST *i; // rsi
  const struct _HIDDENITEMID *v21; // rbx
  struct _ITEMIDLIST *v22; // rax
  void *p_pidlChild; // [rsp+30h] [rbp-D0h] BYREF
  LPITEMIDLIST ppidl; // [rsp+38h] [rbp-C8h] BYREF
  char v26; // [rsp+40h] [rbp-C0h]
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+48h] [rbp-B8h] BYREF
  struct _ITEMIDLIST *v28; // [rsp+80h] [rbp-80h] BYREF
  IBindCtx *pbc; // [rsp+88h] [rbp-78h] BYREF
  LPCITEMIDLIST pidlChild; // [rsp+90h] [rbp-70h] BYREF
  LPCITEMIDLIST pidl1; // [rsp+98h] [rbp-68h] BYREF
  LPITEMIDLIST pidlParent[2]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR pszPath[264]; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR v34[264]; // [rsp+2C0h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+518h] [rbp+418h]

  memset_0(pszPath, 0, 0x20AuLL);
  if ( !SHGetPathFromIDListW(a2, pszPath) )
  {
    v6 = 2741LL;
LABEL_31:
    TombstoneShortcutLocation = -2147467259;
    goto LABEL_32;
  }
  memset_0(v34, 0, 0x20AuLL);
  TombstoneShortcutLocation = CBackupLocationManager::_GetTombstoneShortcutLocation(this, pszPath, v34, v7);
  if ( TombstoneShortcutLocation < 0 )
  {
    v6 = 2745LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)TombstoneShortcutLocation);
    return (unsigned int)TombstoneShortcutLocation;
  }
  *(_OWORD *)&FileOp.hwnd = 0LL;
  memset(&FileOp.fFlags, 0, 24);
  FileOp.wFunc = 2;
  FileOp.pFrom = pszPath;
  FileOp.pTo = v34;
  FileOp.fFlags = 1556;
  if ( SHFileOperationW(&FileOp) || FileOp.fAnyOperationsAborted )
  {
    v6 = 2752LL;
    goto LABEL_31;
  }
  v9 = CBackupLocationManager::s_CopyLocalizedName(pszPath, v34);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAC3,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v9);
  pidlChild = 0LL;
  p_pidlChild = &pidlChild;
  ppidl = 0LL;
  v26 = 1;
  TombstoneShortcutLocation = SHILCreateFromPath(v34, &ppidl, 0LL);
  wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pidlChild);
  if ( TombstoneShortcutLocation >= 0 )
  {
    pidlParent[0] = 0LL;
    p_pidlChild = pidlParent;
    ppidl = 0LL;
    v26 = 1;
    TombstoneShortcutLocation = SHGetKnownFolderIDList(&FOLDERID_UserPinned, 0x9000u, 0LL, &ppidl);
    wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pidlChild);
    if ( TombstoneShortcutLocation >= 0 )
    {
      v10 = 0LL;
      v28 = 0LL;
      v11 = ILFindChild(pidlParent[0], pidlChild);
      if ( v11 )
      {
        pbc = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc);
        if ( (int)BindCtx_SetMode(v13, v12, &pbc) >= 0 )
        {
          pidl1 = 0LL;
          p_pidlChild = &pidl1;
          ppidl = 0LL;
          v26 = 1;
          v14 = SHParseDisplayName(L"::{1f3427c8-5c10-4210-aa03-2ee45287d668}", pbc, &ppidl, 0, 0LL) >= 0;
          wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pidlChild);
          if ( v14 )
          {
            v15 = ILCombine(pidl1, v11);
            wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              &v28,
              v15);
            v10 = v28;
          }
          wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
            &pidl1,
            0LL);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc);
      }
      if ( !v10 )
      {
        v16 = pidlChild;
        pidlChild = 0LL;
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v28,
          v16);
        v10 = v28;
      }
      ID = ILFindLastID(a2);
      HiddenID = ILFindFirstHiddenID(ID);
      for ( i = (const struct _ITEMIDLIST *)((char *)v19 + *v19);
            ;
            HiddenID = (const struct _HIDDENITEMID *)ILNextHidden(v21, i) )
      {
        v21 = HiddenID;
        if ( !HiddenID )
          break;
        v28 = 0LL;
        v22 = ILAppendHiddenID(v10, HiddenID);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v28,
          v22);
        v10 = v28;
        if ( !v28 )
        {
          TombstoneShortcutLocation = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xAE7,
            (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_27;
        }
      }
      v28 = 0LL;
      *a3 = v10;
      TombstoneShortcutLocation = 0;
LABEL_27:
      wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v28,
        0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC9,
        (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)TombstoneShortcutLocation);
    }
    wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      pidlParent,
      0LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC6,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)TombstoneShortcutLocation);
  }
  wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &pidlChild,
    0LL);
  return (unsigned int)TombstoneShortcutLocation;
}
