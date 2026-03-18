/*
 * XREFs of PopFxReleaseDevice @ 0x14046273C
 * Callers:
 *     PopAllocateIrp @ 0x14028F314 (PopAllocateIrp.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140984960 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140984C44 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxUpdateVetoMaskWork @ 0x140986000 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

LONG __fastcall PopFxReleaseDevice(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
