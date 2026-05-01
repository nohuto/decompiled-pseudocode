/*
 * XREFs of ?GetAnimationParameters@?$SnapAssistViewAnimationCoordinatorBase@VMultitaskingViewInvocationAnimationCoordinator@@@@UEAA?AUMultitaskingViewAnimationParameters@MultitaskingViewAnimationCoordinatorBase@@XZ @ 0x18040CF90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SnapAssistViewAnimationCoordinatorBase<MultitaskingViewInvocationAnimationCoordinator>::GetAnimationParameters(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  *a2 = MultitaskingViewInvocationAnimationCoordinator::animationParameters;
  a2[1] = xmmword_18056C380;
  a2[2] = xmmword_18056C390;
  a2[3] = xmmword_18056C3A0;
  v3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 168LL))(a1, v5);
  result = a2;
  *a2 = v3;
  return result;
}
