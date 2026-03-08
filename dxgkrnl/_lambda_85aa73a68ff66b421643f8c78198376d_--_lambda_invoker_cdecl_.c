/*
 * XREFs of _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1C02C8BA0
 * Callers:
 *     <none>
 * Callees:
 *     IsStartedIndirectDisplayDevice @ 0x1C0219948 (IsStartedIndirectDisplayDevice.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C02C8E40 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AddAdapter.c)
 */

__int64 __fastcall lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  bool v4; // al
  unsigned int v5; // r8d

  v4 = IsStartedIndirectDisplayDevice(a1);
  v5 = 0;
  if ( v4 )
    return (unsigned int)DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter(a2, a1, 0LL);
  return v5;
}
