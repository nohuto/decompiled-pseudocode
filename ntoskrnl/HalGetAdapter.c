/*
 * XREFs of HalGetAdapter @ 0x140930340
 * Callers:
 *     <none>
 * Callees:
 *     HalpGetAdapter @ 0x1408212E4 (HalpGetAdapter.c)
 */

PADAPTER_OBJECT __stdcall HalGetAdapter(PDEVICE_DESCRIPTION DeviceDescription, PULONG NumberOfMapRegisters)
{
  return (PADAPTER_OBJECT)HalpGetAdapter((__int64)DeviceDescription, 0LL, NumberOfMapRegisters);
}
