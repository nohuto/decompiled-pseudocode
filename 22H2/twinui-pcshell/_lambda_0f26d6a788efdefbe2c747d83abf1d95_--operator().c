/*
 * XREFs of _lambda_0f26d6a788efdefbe2c747d83abf1d95_::operator() @ 0x1801FD410
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___::Invoke @ 0x1801FE940 (CAsyncCallbackWithLambda__lambda_0f26d6a788efdefbe2c747d83abf1d95___--Invoke.c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002D0A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1800415F0 (-GetViewForApplication@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIApplicat.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801FB4D0 (--$As@UIApplicationViewBase@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0f26d6a788efdefbe2c747d83abf1d95_::operator()(__int64 a1)
{
  int ViewForApplication; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  ViewForApplication = CApplicationViewManager::GetViewForApplication(
                         (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 136LL),
                         *(struct IImmersiveApplication **)a1,
                         &v8);
  if ( ViewForApplication >= 0 )
  {
    v9 = 0LL;
    v3 = Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(&v8, &v9);
    ViewForApplication = v3;
    if ( v3 >= 0 )
    {
      LOBYTE(v4) = *(_DWORD *)(a1 + 16) != 0;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v4);
      v3 = CApplicationViewManager::RaiseApplicationViewChanged(*(_QWORD *)(a1 + 32) + 136LL, (__int64)v8, 6u, 0LL);
      ViewForApplication = v3;
      if ( v3 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
        goto LABEL_8;
      }
      v5 = 749LL;
    }
    else
    {
      v5 = 746LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)ViewForApplication;
}
