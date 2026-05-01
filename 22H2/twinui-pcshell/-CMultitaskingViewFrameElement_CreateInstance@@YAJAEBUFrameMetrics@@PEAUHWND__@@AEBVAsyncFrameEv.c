/*
 * XREFs of ?CMultitaskingViewFrameElement_CreateInstance@@YAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@PEAPEAU5@@Z @ 0x180419928
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804089D0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@5AEAPEAUIAnimationCoordinator@@@Z @ 0x1804191C8 (--$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement_CreateInstance(
        const struct FrameMetrics *a1,
        HWND a2,
        const struct AsyncFrameEvents *a3,
        struct ISwitchThumbnailFactory *a4,
        struct IMultitaskingViewElement *a5,
        struct IMultitaskingViewElement *a6,
        struct IAnimationCoordinator *a7,
        struct IMultitaskingViewElement **a8)
{
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HWND v12; // [rsp+58h] [rbp+10h] BYREF
  struct ISwitchThumbnailFactory *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = a4;
  v12 = a2;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrameElement,IMultitaskingViewElement,FrameMetrics const &,HWND__ * &,AsyncFrameEvents const &,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IAnimationCoordinator * &>(
         a8,
         a1,
         &v12,
         a3,
         &v13,
         &a5,
         &a6,
         &a7);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C2,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v8);
  return v9;
}
