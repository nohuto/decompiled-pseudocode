__int64 __fastcall HalPnpGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken(KeGetCurrentThread(), 0LL, 0LL);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
