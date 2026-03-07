__int64 __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_FAN_NOISE_CHANGE, (__int64)&v2);
}
