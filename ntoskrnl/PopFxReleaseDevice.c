/*
 * XREFs of PopFxReleaseDevice @ 0x14045A79C
 * Callers:
 *     PopFxReleasePowerIrp @ 0x1402BA1B4 (PopFxReleasePowerIrp.c)
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x1409818B0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140981B94 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x140982F50 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
