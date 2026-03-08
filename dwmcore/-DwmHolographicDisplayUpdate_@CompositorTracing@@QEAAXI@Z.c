/*
 * XREFs of ?DwmHolographicDisplayUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1802A1A08
 * Callers:
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802A2DC0 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayUpdate_(CompositorTracing *this, int a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x400000000000LL) )
    {
      v9 = 0;
      v7 = &v5;
      v5 = a2;
      v8 = 4;
      tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_18037F7D2, 0LL, 0LL, 3u, &v6);
    }
  }
}
