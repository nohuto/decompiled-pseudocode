/*
 * XREFs of ?HandleFrameWindowGhosted@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1801BC610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180013C38 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013E24 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002F1A4 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005BF90 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007E4BC (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180085384 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ @ 0x1801C1524 (-StartActivity@CloseHungApp@CAppManagerTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CApplicationManager::HandleFrameWindowGhosted(CApplicationManager *this, HWND a2)
{
  RTL_SRWLOCK *v4; // rbx
  void (__fastcall *v5)(char *, GUID *, IUnknown **); // rbx
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C8h] BYREF
  PSRWLOCK v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h]
  void *ppvOut; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A8h]
  _QWORD v13[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  LODWORD(v10) = 0;
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"CloseHungApp");
  v13[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  CAppManagerTelemetry::CloseHungApp::StartActivity((CAppManagerTelemetry::CloseHungApp *)v13);
  v7 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v9 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  ppvOut = a2;
  LODWORD(v12) = 2;
  CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
    (__int64)this - 240,
    (__int64 *)&ppvOut,
    &v7,
    0LL);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  if ( v7 )
  {
    v9 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v7, (__int64 *)&v9) >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      punk = 0LL;
      LODWORD(v10) = 2;
      v5 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 24) + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      v5((char *)this - 192, &GUID_00000000_0000_0000_c000_000000000046, &punk);
      LOBYTE(v5) = IUnknown_QueryService(punk, &stru_1805A69C8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut) >= 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      if ( (_BYTE)v5 )
      {
        v6 = (*(__int64 (__fastcall **)(void *, PSRWLOCK, __int64))(*(_QWORD *)ppvOut + 32LL))(ppvOut, v9, 9LL);
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE26,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, 0);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v13[0] = &CAppManagerTelemetry::CloseHungApp::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
}
