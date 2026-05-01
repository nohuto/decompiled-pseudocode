/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1801E727C
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18000D3F0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18004B270 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1801BD914 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x1801E3600 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  void (__fastcall *v6)(__int64, GUID *, IUnknown **); // rbx
  struct IApplicationView **v7; // r9
  int ViewForApplication; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, GUID *, IUnknown **); // rbx
  int v12; // eax
  __int64 v13; // rcx
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  IUnknown *punk; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+38h] [rbp-31h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-29h] BYREF
  __int64 v22; // [rsp+48h] [rbp-21h] BYREF
  IUnknown *v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h]
  __int64 v25; // [rsp+60h] [rbp-9h]
  __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  __int64 v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh]
  __int64 v29; // [rsp+80h] [rbp+17h] BYREF
  int v30[4]; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v22 = 0LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  punk = 0LL;
  v20 = 2;
  v6 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v6(a1, &GUID_00000000_0000_0000_c000_000000000046, &punk);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(punk, a2, (struct IImmersiveApplication *)&v22, v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  if ( ViewForApplication >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v20 = 9;
    v11 = *(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v11(a1, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    ViewForApplication = IUnknown_QueryService(
                           punk,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &ppvOut);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    if ( ViewForApplication < 0 )
    {
      v9 = (unsigned int)ViewForApplication;
      v10 = 1403LL;
      goto LABEL_7;
    }
    v12 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v22,
            a3,
            0LL,
            v30);
    ViewForApplication = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v10 = 1406LL;
      goto LABEL_7;
    }
    if ( CAppManagerTelemetry::IsEnabled(v13) )
    {
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      AddRef = a2->lpVtbl[1].AddRef;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
      v27 = -1LL;
      v28 = -1LL;
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))AddRef)(a2, &v26);
      ViewForApplication = v15;
      if ( v15 < 0 )
      {
        v16 = 1413LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
        goto LABEL_16;
      }
      QueryInterface = a2->lpVtbl[5].QueryInterface;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
      v24 = -1LL;
      v25 = -1LL;
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, IUnknown **))QueryInterface)(a2, 0LL, &v23);
      ViewForApplication = v15;
      if ( v15 < 0 )
      {
        v16 = 1414LL;
        goto LABEL_13;
      }
      v20 = a3;
      punk = v23;
      v29 = v26;
      CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        &v29,
        (__int64 *)&punk,
        &v20);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
    }
    ViewForApplication = 0;
    goto LABEL_16;
  }
  v9 = (unsigned int)ViewForApplication;
  v10 = 1402LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)v9);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return (unsigned int)ViewForApplication;
}
