/*
 * XREFs of ?GetDestinationRect@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x180420C50
 * Callers:
 *     ?GetBeginRect@MultitaskingViewDismissalAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUtagRECT@@@Z @ 0x18041F6E0 (-GetBeginRect@MultitaskingViewDismissalAnimationCoordinator@@MEAAJPEAUISwitchItemElement@@PEAUta.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?MapElementRectToAncestor@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U23@@Z @ 0x18041CCF4 (-MapElementRectToAncestor@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@0U2.c)
 */

__int64 __fastcall MultitaskingViewAnimationCoordinatorBase::GetDestinationRect(
        MultitaskingViewAnimationCoordinatorBase *this,
        struct ISwitchItemElement *a2,
        struct tagRECT *a3)
{
  __m128i v5; // xmm6
  __int64 *v6; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v9; // [rsp+30h] [rbp-58h] BYREF
  __m128i v10; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+50h] [rbp-38h] BYREF

  v5 = *(__m128i *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v11);
  v6 = (__int64 *)(*(__int64 (__fastcall **)(struct ISwitchItemElement *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, v8);
  v9 = v5;
  ElementHelpers::MapElementRectToAncestor(&v10, *v6, 0LL, &v9);
  *a3 = (struct tagRECT)v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  return 0LL;
}
