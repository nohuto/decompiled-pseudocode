/*
 * XREFs of ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x18045C478
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18004DC80 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x18045A1D0 (_lambda_cec5c726396bbc9cebe1730e9afdb84e_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___ @ 0x180458A30 (wil--ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___.c)
 */

__int64 __fastcall CDesktopPositioner::PositionViewForPositionerHandoff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6)
{
  _QWORD v8[7]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v9; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+70h] [rbp+1Fh]
  __m128i si128; // [rsp+78h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+37h]
  __int64 v13; // [rsp+B0h] [rbp+5Fh] BYREF
  int v14; // [rsp+C0h] [rbp+6Fh] BYREF

  v14 = a4;
  v13 = a2;
  v8[0] = a3;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 144LL))(a3, &v9);
  v8[1] = a1;
  v8[2] = &v13;
  v8[3] = &a5;
  v8[4] = &v14;
  v8[5] = v8;
  v8[6] = &a6;
  wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731___();
  return 0LL;
}
