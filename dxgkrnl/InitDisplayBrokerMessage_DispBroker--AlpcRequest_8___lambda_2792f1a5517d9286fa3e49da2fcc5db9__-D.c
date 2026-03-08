/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9__&DxgkSampleDisplayState_ @ 0x1C0049078
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     _lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator() @ 0x1C02EECBC (_lambda_2792f1a5517d9286fa3e49da2fcc5db9_--operator().c)
 *     DxgkSampleDisplayState @ 0x1C02EFA14 (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2792f1a5517d9286fa3e49da2fcc5db9___DxgkSampleDisplayState_(
        _WORD *a1,
        __int64 a2,
        __int16 a3)
{
  __int64 result; // rax
  __int16 v7; // di

  memset(a1, 0, 0x50uLL);
  *((_DWORD *)a1 + 10) = 8;
  *((_DWORD *)a1 + 11) = 1;
  result = DxgkSampleDisplayState(a1 + 24);
  if ( (int)result >= 0 )
  {
    v7 = a3 + 80;
    a1[1] = v7;
    a1[2] = 0x8000;
    *a1 = v7 - 40;
    return lambda_2792f1a5517d9286fa3e49da2fcc5db9_::operator()(a2, a1);
  }
  return result;
}
