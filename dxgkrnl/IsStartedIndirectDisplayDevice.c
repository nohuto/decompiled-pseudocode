/*
 * XREFs of IsStartedIndirectDisplayDevice @ 0x1C0219948
 * Callers:
 *     _lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_ @ 0x1C0219920 (_lambda_98a973f9db80c22b1740ef6057097b25_--_lambda_invoker_cdecl_.c)
 *     _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1C02C8BA0 (_lambda_85aa73a68ff66b421643f8c78198376d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

bool __fastcall IsStartedIndirectDisplayDevice(__int64 a1)
{
  bool v3; // bl
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+30h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 436) & 0x100) == 0 )
    return 0;
  v5 = a1;
  v6 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  v3 = *(_DWORD *)(a1 + 200) == 1;
  if ( v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  return v3;
}
