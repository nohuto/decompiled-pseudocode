/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800D9010
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator() @ 0x1800D7C9C (_lambda_8c16e7598293d9a49fcaed3324cb1e66_--operator().c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_8c16e7598293d9a49fcaed3324cb1e66__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call(
        __int64 a1,
        _OWORD *a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD v6[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2[1];
  v6[0] = *a2;
  v3 = a2[2];
  v6[1] = v2;
  v4 = a2[3];
  v6[2] = v3;
  v6[3] = v4;
  return lambda_8c16e7598293d9a49fcaed3324cb1e66_::operator()((_QWORD *)(a1 + 8), (__int64)v6);
}
