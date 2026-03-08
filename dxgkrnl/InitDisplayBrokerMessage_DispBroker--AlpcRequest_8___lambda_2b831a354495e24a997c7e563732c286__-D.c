/*
 * XREFs of InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286__&DxgkSampleDisplayState_ @ 0x1C0049100
 * Callers:
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     _lambda_2b831a354495e24a997c7e563732c286_::operator() @ 0x1C02EEE24 (_lambda_2b831a354495e24a997c7e563732c286_--operator().c)
 *     DxgkSampleDisplayState @ 0x1C02EFA14 (DxgkSampleDisplayState.c)
 */

__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_2b831a354495e24a997c7e563732c286___DxgkSampleDisplayState_(
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
    return lambda_2b831a354495e24a997c7e563732c286_::operator()(a2, a1);
  }
  return result;
}
