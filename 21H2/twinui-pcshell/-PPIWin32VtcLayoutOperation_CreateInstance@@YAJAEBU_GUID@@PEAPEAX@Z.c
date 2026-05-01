/*
 * XREFs of ?PPIWin32VtcLayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8604
 * Callers:
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804681E4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPPIWin32VtcLayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPIWin32VtcLayoutOperation@@@Z @ 0x1800D7724 (--$MakeAndInitialize@VPPIWin32VtcLayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPIWin.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PPIWin32VtcLayoutOperation *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = (PPIWin32VtcLayoutOperation *)a1;
  *a2 = 0LL;
  if ( IsPPIEdition() )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v3 = Microsoft::WRL::Details::MakeAndInitialize<PPIWin32VtcLayoutOperation,PPIWin32VtcLayoutOperation,>(&v8);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(PPIWin32VtcLayoutOperation *, GUID *, void **))v8)(
             v8,
             &GUID_521214fe_07d7_470b_b6f3_b9d2354cae32,
             a2);
      v4 = v3;
      if ( v3 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
        return v4;
      }
      v5 = 880LL;
    }
    else
    {
      v5 = 879LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  return 2147500033LL;
}
