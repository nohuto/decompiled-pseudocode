/*
 * XREFs of HalPnpGetDmaAdapter @ 0x14038C880
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14038C8C4 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x1408212E4 (HalpGetAdapter.c)
 */

__int64 __fastcall HalPnpGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken(KeGetCurrentThread(), 0LL, 0LL);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
