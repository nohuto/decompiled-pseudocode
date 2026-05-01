/*
 * XREFs of ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18013A6CC
 * Callers:
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139EDC (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180139A14 (-GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     PropVariantToIDList @ 0x1801467A4 (PropVariantToIDList.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F290 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$GetFailIfEmpty@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180213468 (--$GetFailIfEmpty@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpro.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9D90 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=5
void **__fastcall GetUnpackagedAppPinnableItem(void **a1, __int64 a2, _QWORD *a3)
{
  int FailIf; // eax
  const struct _GUID *v6; // rdx
  __int64 v7; // r8
  HRESULT Instance; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  int ObjectW; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  HRESULT v15; // eax
  __int128 v17; // [rsp+40h] [rbp-9h] BYREF
  int v18; // [rsp+50h] [rbp+7h]
  void **v19; // [rsp+60h] [rbp+17h]
  LPCITEMIDLIST pidl; // [rsp+68h] [rbp+1Fh] BYREF
  PROPVARIANT pvar[3]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v19 = a1;
  *a1 = 0LL;
  LOWORD(pvar[0]) = 0;
  v17 = PKEY_AppUserModel_BestShortcut;
  v18 = 10;
  FailIf = CPropertyStoreHelperBase<IPropertyStore>::GetFailIfEmpty<_tagpropertykey>(a2, &v17, pvar);
  if ( FailIf >= 0 )
  {
    if ( LOWORD(pvar[0]) == 13 )
    {
      ObjectW = wil::PropVariant::GetObjectW((wil::PropVariant *)pvar, v6, a1);
      v12 = retaddr;
      if ( ObjectW >= 0 )
        goto LABEL_11;
    }
    else
    {
      pidl = 0LL;
      *(_QWORD *)&v17 = &pidl;
      *((_QWORD *)&v17 + 1) = 0LL;
      LOBYTE(v18) = 1;
      v13 = PropVariantToIDList(pvar, (char *)&v17 + 8, v7);
      v14 = retaddr;
      if ( v13 < 0 )
        goto LABEL_16;
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v17);
      v15 = SHCreateItemFromIDList(pidl, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, a1);
      if ( v15 >= 0 )
      {
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &pidl,
          0LL);
        goto LABEL_11;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        110LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)v15);
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      103LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)ObjectW);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v9,
      117LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x62,
    (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
    (const char *)(unsigned int)FailIf);
  pidl = 0LL;
  Instance = CoCreateInstance(
               &GUID_660b90c8_73a9_4b58_8cae_355b7f55341b,
               0LL,
               3u,
               &GUID_de25675a_72de_44b4_9373_05170450c140,
               (LPVOID *)&pidl);
  v9 = retaddr;
  if ( Instance < 0 )
    goto LABEL_14;
  v10 = (*(__int64 (__fastcall **)(LPCITEMIDLIST, _QWORD, void **))(*(_QWORD *)&pidl->mkid.cb + 64LL))(pidl, *a3, a1);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      118LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)v10);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v14,
      109LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pidl);
LABEL_11:
  PropVariantClear(pvar);
  return a1;
}
