/*
 * XREFs of winrt::delegate__::delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e___ @ 0x1801469FC
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     _lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_ @ 0x180147A14 (_lambda_639cdbf1b0b4bc5a158a88668f16cd2e_--__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 **__fastcall winrt::delegate__::delegate____lambda_639cdbf1b0b4bc5a158a88668f16cd2e___(
        __int64 **a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int64 *v12; // [rsp+30h] [rbp-20h]
  _QWORD *v13; // [rsp+38h] [rbp-18h]

  v13 = a2;
  v4 = *a2;
  *a2 = 0LL;
  v10 = v4;
  v5 = a2[1];
  a2[1] = 0LL;
  v11 = v5;
  v12 = &v10;
  v6 = (__int64 *)operator new(0x20uLL);
  v12 = v6;
  v7 = v10;
  v10 = 0LL;
  v6[1] = v7;
  v8 = v11;
  v11 = 0LL;
  v6[2] = v8;
  *v6 = (__int64)off_180508E38;
  *((_DWORD *)v6 + 6) = 1;
  *a1 = v6;
  lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(&v10);
  lambda_639cdbf1b0b4bc5a158a88668f16cd2e_::__lambda_639cdbf1b0b4bc5a158a88668f16cd2e_(a2);
  return a1;
}
