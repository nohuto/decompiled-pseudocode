/*
 * XREFs of HaliGetDmaAdapter @ 0x140502FF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaFindDeviceObjectByToken @ 0x14038C8C4 (HalpDmaFindDeviceObjectByToken.c)
 *     HalpGetAdapter @ 0x1408212E4 (HalpGetAdapter.c)
 */

__int64 __fastcall HaliGetDmaAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 DeviceObjectByToken; // rax

  DeviceObjectByToken = HalpDmaFindDeviceObjectByToken((__int64)KeGetCurrentThread(), 0, 0);
  return HalpGetAdapter(a2, DeviceObjectByToken, a3);
}
