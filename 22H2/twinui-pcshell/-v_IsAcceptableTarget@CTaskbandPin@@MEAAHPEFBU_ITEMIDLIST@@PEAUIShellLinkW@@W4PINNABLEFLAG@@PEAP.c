/*
 * XREFs of ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x1801513F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x18013A33C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ABFC (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z @ 0x1801501A0 (-IShellItem_GetString@@YAJPEAUIShellItem@@AEBU_tagpropertykey@@PEAPEAG@Z.c)
 *     ?IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z @ 0x180150234 (-IsPinnable@CTaskbandPin@@AEAA_NPEAUIShellItem2@@@Z.c)
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180150778 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1801509D4 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x180150C78 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG@Z @ 0x180150FAC (-_ProcessDestinationFolder@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPE.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x1801554E8 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18015E6E4 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F120 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9B20 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 *     ??$As@UIShellItem2@@@?$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIShellItem2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803EF7EC (--$As@UIShellItem2@@@-$ComPtr@UIShellItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIShellIt.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CTaskbandPin::v_IsAcceptableTarget(
        CTaskbandPin *a1,
        const ITEMIDLIST *a2,
        struct IShellLinkW *a3,
        __int64 a4,
        struct IShellItem **a5,
        unsigned __int16 **a6,
        unsigned __int16 **a7,
        void **a8)
{
  char v8; // si
  struct IShellLinkW *v9; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // eax
  CPinnedList *v13; // rcx
  int Instance; // r15d
  struct IShellItem2 *v15; // rbx
  HRESULT (__stdcall *GetString)(IShellItem2 *, const PROPERTYKEY *const, LPWSTR *); // rdi
  CTaskbandPin *v17; // rcx
  struct IShellItem **v18; // r8
  const ITEMIDLIST *v19; // rcx
  LPCITEMIDLIST v20; // rdi
  void *v21; // rbx
  int (__fastcall *v22)(void *, _QWORD, const GUID *, GUID *); // rsi
  struct IShellLinkWVtbl *lpVtbl; // rax
  bool v24; // bl
  struct IShellItem2 *v25; // rcx
  CPinnedList *v26; // rcx
  char v27; // bl
  unsigned __int16 *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r9
  const ITEMIDLIST *v32; // rbx
  void **v33; // rdi
  int v34; // eax
  CPinnedList *v35; // rcx
  const struct _tagpropertykey *v36; // rdx
  CTaskbandPin *v37; // rcx
  LPITEMIDLIST v38; // rcx
  LPITEMIDLIST v39; // rax
  struct IShellItem *v40; // rax
  struct IShellLinkW **bIgnoreCase; // [rsp+20h] [rbp-E0h]
  char v43; // [rsp+40h] [rbp-C0h]
  char v44; // [rsp+41h] [rbp-BFh]
  unsigned int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+4Ch] [rbp-B4h]
  int v48; // [rsp+50h] [rbp-B0h]
  CTaskbandPin *v49; // [rsp+58h] [rbp-A8h]
  const ITEMIDLIST *v50; // [rsp+60h] [rbp-A0h]
  void **v51; // [rsp+68h] [rbp-98h]
  unsigned __int16 **v52; // [rsp+70h] [rbp-90h]
  LPCITEMIDLIST ppidlLast; // [rsp+78h] [rbp-88h] BYREF
  void *ppv; // [rsp+80h] [rbp-80h] BYREF
  LPCITEMIDLIST pidl; // [rsp+88h] [rbp-78h] BYREF
  LPITEMIDLIST ppidl[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-60h]
  struct IShellLinkW *v58; // [rsp+A8h] [rbp-58h] BYREF
  struct IShellItem2 *v59; // [rsp+B0h] [rbp-50h] BYREF
  struct IApplicationResolver *v60; // [rsp+B8h] [rbp-48h] BYREF
  void *v61; // [rsp+C0h] [rbp-40h] BYREF
  LPCITEMIDLIST v62; // [rsp+C8h] [rbp-38h] BYREF
  LPCITEMIDLIST pidl1[2]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v64[264]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v65[264]; // [rsp+2F0h] [rbp+1F0h] BYREF
  WCHAR pszStr1[264]; // [rsp+500h] [rbp+400h] BYREF

  v8 = a4;
  v47 = a4;
  v9 = a3;
  v62 = (LPCITEMIDLIST)a3;
  v50 = a2;
  v49 = a1;
  v52 = a7;
  v51 = a8;
  v11 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a7 = 0LL;
  v46 = a4 & 4;
  v12 = 0x40000000;
  if ( (a4 & 4) != 0 )
    v12 = 1614807040;
  v45 = v12;
  if ( (int)SHGetNameAndFlagsW(a2, 0xC000u, v65, a4, &v45) >= 0 )
  {
    v48 = v8 & 2;
    if ( (v8 & 2) == 0 || (v8 & 4) != 0 || CPinnedList::_IsLocalHardDisk(v13, v65) || (v45 & 0x40000000) == 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      Instance = SHCreateItemFromIDList(a2, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
      if ( Instance < 0 )
        goto LABEL_117;
      v59 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IShellItem>::As<IShellItem2>(&ppv, &v59) >= 0 )
      {
        ppidl[0] = 0LL;
        ppidl[1] = 0LL;
        v57 = 0LL;
        v15 = v59;
        GetString = v59->lpVtbl->GetString;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
        ppidl[1] = (LPITEMIDLIST)-1LL;
        v57 = -1LL;
        if ( ((int (__fastcall *)(struct IShellItem2 *, __int128 *, LPITEMIDLIST *))GetString)(
               v15,
               &PKEY_AppUserModel_ParentID,
               ppidl) >= 0
          && ppidl[0]
          && ppidl[0]->mkid.cb )
        {
          Instance = -2147467259;
        }
        if ( (v8 & 0x10) == 0 && !CTaskbandPin::IsPinnable(v17, v59) )
          Instance = -2147467259;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
        v9 = (struct IShellLinkW *)v62;
      }
      if ( Instance >= 0 )
      {
        pidl = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pidl);
        if ( (int)TaskbarPinHelper::GetTaskbarPinnableItem((TaskbarPinHelper *)ppv, (struct IShellItem *)&pidl, v18) >= 0 )
        {
          v19 = (const ITEMIDLIST *)ppv;
          ppv = (void *)pidl;
          pidl = v19;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pidl);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
      if ( Instance < 0 )
        goto LABEL_117;
      v60 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
      Instance = CoCreateInstance(
                   &CLSID_StartMenuCacheAndAppResolver,
                   0LL,
                   3u,
                   &GUID_de25675a_72de_44b4_9373_05170450c140,
                   (LPVOID *)&v60);
      if ( Instance < 0 )
      {
LABEL_116:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v60);
LABEL_117:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
        return Instance >= 0;
      }
      v44 = 0;
      v43 = 0;
      memset_0(v64, 0, 0x208uLL);
      v58 = v9;
      if ( v9 )
        ((void (__fastcall *)(struct IShellLinkW *))v9->lpVtbl->AddRef)(v9);
      v20 = 0LL;
      v62 = 0LL;
      if ( v58
        || (v21 = ppv,
            v22 = *(int (__fastcall **)(void *, _QWORD, const GUID *, GUID *))(*(_QWORD *)ppv + 24LL),
            Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v58),
            bIgnoreCase = &v58,
            v22(v21, 0LL, &BHID_SFUIObject, &GUID_000214f9_0000_0000_c000_000000000046) >= 0) )
      {
        pidl = 0LL;
        lpVtbl = v58->lpVtbl;
        ppidl[0] = (LPITEMIDLIST)&pidl;
        ppidl[1] = 0LL;
        LOBYTE(v57) = 1;
        Instance = ((__int64 (__fastcall *)(struct IShellLinkW *, LPITEMIDLIST *))lpVtbl->GetIDList)(v58, &ppidl[1]);
        wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(ppidl);
        if ( Instance >= 0 )
        {
          v61 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v61);
          if ( SHBindToParent(pidl, &GUID_000214e6_0000_0000_c000_000000000046, &v61, &ppidlLast) >= 0 )
          {
            pidl1[0] = 0LL;
            ppidl[0] = (LPITEMIDLIST)pidl1;
            ppidl[1] = 0LL;
            LOBYTE(v57) = 1;
            v24 = SHGetKnownFolderIDList(&FOLDERID_AppsFolder, 0x4000u, 0LL, &ppidl[1]) >= 0;
            wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(ppidl);
            if ( v24 && ILIsParent(pidl1[0], pidl, 1) )
            {
              v59 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
              if ( SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)&v59) >= 0 )
              {
                Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v58);
                v25 = (struct IShellItem2 *)ppv;
                ppv = v59;
                v59 = v25;
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v59);
            }
            wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
              pidl1,
              0LL);
          }
          if ( v58 )
          {
            v44 = 1;
            if ( CPinnedList::GetAppPathFromShortcut(v58, (struct IShellItem *)ppv, 0x8000u, v64, (int)bIgnoreCase) >= 0 )
            {
              if ( v48 )
              {
                if ( v64[0] != 58 || v64[1] != 58 || v64[2] != 123 || (v27 = 1, !v64[3]) )
                  v27 = 0;
                v43 = v27;
                if ( v46 || CPinnedList::_IsLocalHardDisk(v26, v64) || v27 )
                {
                  v20 = pidl;
                  v62 = pidl;
                  pidl = 0LL;
                }
              }
            }
          }
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v61);
        }
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &pidl,
          0LL);
      }
      if ( Instance < 0 )
        goto LABEL_115;
      if ( !v44
        || CPinnedList::GetAppPathFromShortcut(v58, (struct IShellItem *)ppv, 0x4000u, pszStr1, (int)bIgnoreCase) >= 0 )
      {
        *(_OWORD *)ppidl = *(_OWORD *)L"search-ms:";
        LODWORD(v57) = *(_DWORD *)L"s:";
        WORD2(v57) = aSearchMs[10];
        v28 = v65;
        if ( v44 )
          v28 = pszStr1;
        if ( !StrCmpNICW(v28, (LPCWSTR)ppidl, 10) )
          Instance = -2147467259;
      }
      if ( Instance < 0 )
        goto LABEL_115;
      v29 = *(_QWORD *)v60;
      v30 = v58
          ? (*(__int64 (__fastcall **)(struct IApplicationResolver *, struct IShellLinkW *, void *))(v29 + 88))(
              v60,
              v58,
              ppv)
          : (*(unsigned __int64 (__fastcall **)(struct IApplicationResolver *, void *))(v29 + 80))(v60, ppv);
      Instance = v30;
      if ( !v46 && (v47 & 8) == 0 )
        goto LABEL_115;
      if ( v30 < 0 )
      {
        if ( (v47 & 8) == 0 )
        {
          if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToDestinations) )
          {
            v32 = v50;
            if ( v20 )
              v32 = v20;
            if ( !v44 || v64[0] )
            {
              v33 = v51;
              if ( v51 )
              {
                if ( (v45 & 0x20000000) == 0 || (v45 & 0x400000) != 0 )
                  v34 = CTaskbandPin::_ProcessDestinationFile(v49, v60, v32, v45, a5, a6, v52);
                else
                  v34 = CTaskbandPin::_ProcessDestinationFolder(v49, v60, v32, v31, a5, a6);
                Instance = v34;
                if ( v34 >= 0 )
                  Instance = SHCreateItemFromIDList(v32, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, v33);
              }
              else
              {
                Instance = -2147418113;
              }
            }
            goto LABEL_115;
          }
          goto LABEL_85;
        }
LABEL_115:
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v62,
          0LL);
        Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease((__int64 *)&v58);
        goto LABEL_116;
      }
      if ( (unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar) )
      {
LABEL_85:
        Instance = -2147024891;
        goto LABEL_115;
      }
      if ( v44 )
      {
        if ( a5 || a6 )
        {
          if ( ((v45 & 0x40000000) == 0 || CPinnedList::_IsLocalHardDisk(v35, v65))
            && (CPinnedList::_IsLocalHardDisk(v35, v64) || v43) )
          {
            Instance = 0;
            if ( !a5
              || (Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IShellItem **))ppv)(
                               ppv,
                               &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                               a5),
                  Instance >= 0) )
            {
              if ( a6 )
              {
                Instance = (*(__int64 (__fastcall **)(struct IApplicationResolver *, struct IShellLinkW *, void *, unsigned __int16 **))(*(_QWORD *)v60 + 32LL))(
                             v60,
                             v58,
                             ppv,
                             a6);
                if ( Instance < 0 )
                {
                  if ( a5 )
                    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)a5);
                }
              }
            }
          }
          else
          {
            Instance = -2147467259;
          }
        }
        goto LABEL_115;
      }
      ppidl[0] = 0LL;
      ppidl[1] = 0LL;
      v57 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      ppidl[1] = (LPITEMIDLIST)-1LL;
      v57 = -1LL;
      Instance = IShellItem_GetString((struct IShellItem *)ppv, v36, (unsigned __int16 **)ppidl);
      if ( Instance < 0 )
      {
        Instance = CTaskbandPin::_GetApplication(v37, v60, (char *)v65, a5, a6, 0LL);
        goto LABEL_111;
      }
      if ( CompareStringOrdinal(&ppidl[0]->mkid.cb, -1, L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI", -1, 1) == 2 )
        goto LABEL_102;
      v38 = (LPITEMIDLIST)&szAgent;
      if ( ppidl[0] )
        v38 = ppidl[0];
      if ( CompareStringOrdinal(&v38->mkid.cb, -1, L"Microsoft.WindowsStore_8wekyb3d8bbwe!App", -1, 1) == 2
        && (unsigned int)SHWindowsPolicy(&POLID_NoPinningStoreToTaskbar) )
      {
LABEL_102:
        Instance = -2147467259;
      }
      else
      {
        if ( !a6 )
        {
LABEL_111:
          if ( Instance >= 0 && a5 )
          {
            v40 = (struct IShellItem *)ppv;
            ppv = 0LL;
            *a5 = v40;
          }
          goto LABEL_114;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
        Instance = SHCreateItemInKnownFolder(
                     &FOLDERID_AppsFolder,
                     0x4000u,
                     &ppidl[0]->mkid.cb,
                     &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
                     &ppv);
        if ( Instance >= 0 )
        {
          v39 = ppidl[0];
          ppidl[0] = 0LL;
          v57 = 0LL;
          ppidl[1] = 0LL;
          *a6 = &v39->mkid.cb;
          goto LABEL_111;
        }
      }
LABEL_114:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)ppidl);
      goto LABEL_115;
    }
  }
  return v11;
}
