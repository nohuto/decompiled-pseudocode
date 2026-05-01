/*
 * XREFs of ?CSwitchItemGrid_CreateInstance@@YAJAEBUGridMetrics@@AEBUCSize@Geometry@@PEAUIElementFactory@@PEAUISwitchThumbnailFactory@@PEAUISwitchItemController@@PEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x18041644C
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x180408D60 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVCSwitchItemGrid@@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFactory@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUISwitchItemController@@AEAPEAUIObservableObjectArray@@@Z @ 0x180415DE8 (--$MakeAndInitialize@VCSwitchItemGrid@@V1@AEBUGridMetrics@@AEBUCSize@Geometry@@AEAPEAUIElementFa.c)
 */

__int64 __fastcall CSwitchItemGrid_CreateInstance(
        const struct GridMetrics *a1,
        const struct Geometry::CSize *a2,
        struct IElementFactory *a3,
        struct ISwitchThumbnailFactory *a4,
        struct ISwitchItemController *a5,
        struct IObservableObjectArray *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IElementFactory *v16; // [rsp+60h] [rbp+18h] BYREF
  struct ISwitchThumbnailFactory *v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = a4;
  v16 = a3;
  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemGrid,CSwitchItemGrid,GridMetrics const &,Geometry::CSize const &,IElementFactory * &,ISwitchThumbnailFactory * &,ISwitchItemController * &,IObservableObjectArray * &>(
          (CSwitchItemGrid **)&a8,
          a1,
          a2,
          &v16,
          &v17,
          &a5,
          &a6);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 853LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a8)(a8, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, v8);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 854LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a8);
  return v12;
}
