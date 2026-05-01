/*
 * XREFs of ??$PerformCallbackOnView@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Z @ 0x18043FC24
 * Callers:
 *     ?GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x18044184C (-GetPositionerDataForView@SizeConversionViewInfo@@AEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800646D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@V?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@@12@$$QEAV_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Z @ 0x18043F77C (--$Make@V-$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPos.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView<_lambda_b596592e3ff57c102c32409cde6b4c14_>(
        IUnknown *punk,
        __int64 a2,
        __int64 a3)
{
  HRESULT v6; // eax
  int v7; // edi
  void *v8; // rbx
  __int64 (__fastcall *v9)(void *, __int64, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rbx
  volatile int *v12; // rdx
  void *ppvOut; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v17 = 0LL;
    v8 = ppvOut;
    v9 = *(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v10 = v9(v8, a2, &v17);
    v7 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::Details::Make<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>,_lambda_b596592e3ff57c102c32409cde6b4c14_>(
        &v15,
        a3);
      v11 = v15;
      if ( v15 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, v15);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
          v11,
          v12);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\shell\\private\\inc\\ShellPositionerHelpers.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
