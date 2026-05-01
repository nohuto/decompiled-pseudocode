/*
 * XREFs of ??$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z @ 0x180244F70
 * Callers:
 *     _lambda_280b45e0809411ada214328da8ed29e6_::_lambda_invoker_cdecl_ @ 0x18009B4B0 (_lambda_280b45e0809411ada214328da8ed29e6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1802498E8 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

char __fastcall JumpViewProvider::JumpViewDidntOpenInSpecifiedTime<unsigned long>(int *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v2 = wil::details::static_lazy<JumpViewProvider>::get(
         a1,
         _lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v11 = 0;
      v7 = v5;
      v10 = 4;
      v9 = &v7;
      LOBYTE(v2) = tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_180579F5B, 0LL, 0LL, 3u, &v8);
    }
  }
  return v2;
}
