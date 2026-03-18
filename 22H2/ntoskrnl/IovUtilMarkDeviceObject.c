/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1405CFD70
 * Callers:
 *     VfIoDeleteDevice @ 0x140AD3214 (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE8430 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140AD3E10 (IovpUtilMarkDeviceObject.c)
 */

__int64 __fastcall IovUtilMarkDeviceObject(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject(a1, a2);
  return result;
}
