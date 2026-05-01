/*
 * XREFs of ?CScrollButtonContainer_CreateInstance@@YAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180429D90
 * Callers:
 *     ?RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@@Z @ 0x180418B98 (-RuntimeClassInitialize@CScrollViewerHost@@QEAAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x180429A60 (--$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonC.c)
 */

__int64 CScrollButtonContainer_CreateInstance(__int64 a1, unsigned int a2, ...)
{
  CScrollButtonContainer *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned int v9; // [rsp+58h] [rbp+28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  va_list va; // [rsp+60h] [rbp+30h]
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF
  va_list va1; // [rsp+68h] [rbp+38h]
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  va_list va2; // [rsp+70h] [rbp+40h]
  __int64 v16; // [rsp+78h] [rbp+48h]
  CScrollButtonContainer *v17; // [rsp+80h] [rbp+50h] BYREF
  va_list va3; // [rsp+80h] [rbp+50h]
  va_list va4; // [rsp+88h] [rbp+58h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v17 = va_arg(va4, CScrollButtonContainer *);
  v9 = a2;
  v2 = v17;
  v17 = 0LL;
  *(_QWORD *)v2 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va3);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CScrollButtonContainer,CScrollButtonContainer,ScrollViewerHostMetrics const &,enum ScrollButtonContainerFlags &,WeakReference::IWeakReference * &,IDWriteTextFormat * &,ISwitchThumbnailFactory * &>(
         (CScrollButtonContainer **)va3,
         a1,
         &v9,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 210LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = (**(__int64 (__fastcall ***)(CScrollButtonContainer *, GUID *, CScrollButtonContainer *))v17)(
         v17,
         &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
         v2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 211LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va3);
  return v5;
}
