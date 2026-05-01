/*
 * XREFs of ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18013774C
 * Callers:
 *     ??R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ @ 0x180136730 (--R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F020 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18012A3B4 (--$GetUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ??$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z @ 0x180131C70 (--$ImmersiveAppInstalled@AEA_N@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXAEA_N@Z.c)
 *     ??1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ @ 0x180135F6C (--1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x18013A33C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?InternalRelease@?$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18013ABFC (-InternalRelease@-$ComPtr@UITileStoreFactory@Tiles@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXXZ @ 0x180141684 (-StartActivity@CanPinToTaskbar@TaskbarPinningTelemetry@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18020B4D8 (--0-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@Q.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18020EF64 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1804D62EC (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1804D678C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TaskbarPinHelper::CanPinToTaskbar(TaskbarPinHelper *this, struct IShellItem *a2, bool *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v7; // bl
  struct IShellItem **v8; // r8
  struct IShellItemVtbl *lpVtbl; // rbx
  __int64 (__fastcall *v10)(struct IShellItemVtbl *, _QWORD, const GUID *, GUID *, int *); // rdi
  int v11; // eax
  HRESULT v12; // eax
  int v13; // eax
  char v15[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  int v19[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  IShellItem v21; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v22[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  LOBYTE(a2->lpVtbl) = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_NoPinningToTaskbar)
    && !(unsigned int)SHWindowsPolicy(&POLID_TaskbarNoPinnedList) )
  {
    memset_0(v22, 0, 0x138uLL);
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v22);
    v22[0] = &TaskbarPinningTelemetry::CanPinToTaskbar::`vftable';
    TaskbarPinningTelemetry::CanPinToTaskbar::StartActivity((TaskbarPinningTelemetry::CanPinToTaskbar *)v22);
    v20 = 0LL;
    v5 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
           (unsigned int)&v20,
           (_DWORD)this,
           0,
           (unsigned int)&`TaskbarPinHelper::CanPinToTaskbar'::`2'::propKeys,
           3);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"internal\\shell\\private\\inc\\TaskbarPinHelper.h",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_25:
      TaskbarPinningTelemetry::CanPinToTaskbar::~CanPinToTaskbar((TaskbarPinningTelemetry::CanPinToTaskbar *)v22);
      return v6;
    }
    v15[0] = 0;
    v16 = PKEY_AppUserModel_HostEnvironment;
    v17 = 14;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>((__int64)&v20, &v16, v19) < 0
      || (unsigned int)(v19[0] - 1) > 1 )
    {
      v7 = 1;
    }
    else
    {
      ppv = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &ppv,
        0LL);
      v16 = PKEY_AppUserModel_PackageInstallPath;
      v17 = 15;
      v7 = 0;
      if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(&v20, &v16, &ppv) >= 0 )
      {
        if ( !ppv || (v7 = 1, !*(_WORD *)ppv) )
          v7 = 0;
        v15[0] = v7;
      }
      TaskbarPinningTelemetry::CanPinToTaskbar::ImmersiveAppInstalled<bool &>((__int64)v22, v15);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&ppv);
    }
    if ( v7 )
    {
      v21.lpVtbl = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      if ( TaskbarPinHelper::GetTaskbarPinnableItem(this, &v21, v8) >= 0 )
      {
        *(_QWORD *)v19 = 0LL;
        lpVtbl = v21.lpVtbl;
        v10 = (__int64 (__fastcall *)(struct IShellItemVtbl *, _QWORD, const GUID *, GUID *, int *))*((_QWORD *)v21.lpVtbl->QueryInterface + 3);
        Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v19);
        v11 = v10(lpVtbl, 0LL, &BHID_DataObject, &GUID_0000010e_0000_0000_c000_000000000046, v19);
        v6 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x88,
            (__int64)"internal\\shell\\private\\inc\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v11);
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          goto LABEL_25;
        }
        ppv = 0LL;
        Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&ppv);
        v12 = CoCreateInstance(&CLSID_TaskbandPin, 0LL, 1u, &GUID_bdb5b98e_c3eb_4245_a7eb_ac74965f23ad, &ppv);
        v6 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8B,
            (__int64)"internal\\shell\\private\\inc\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&ppv);
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          goto LABEL_25;
        }
        v13 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 40LL))(ppv, *(_QWORD *)v19, 10LL);
        v6 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8E,
            (__int64)"internal\\shell\\private\\inc\\TaskbarPinHelper.h",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&ppv);
          Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
          goto LABEL_25;
        }
        LOBYTE(a2->lpVtbl) = v13 != 1;
        Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(&ppv);
        Microsoft::WRL::ComPtr<Windows::Internal::Tiles::ITileStoreFactory>::InternalRelease(v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
    }
    wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v6 = 0;
    goto LABEL_25;
  }
  return 2147942405LL;
}
