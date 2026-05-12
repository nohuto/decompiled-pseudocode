/*
 * XREFs of RaUnitQuiesceDeviceSrb @ 0x1C0016458
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009BC0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQuiesceDeviceSrb(__int64 a1, IRP *a2)
{
  if ( *(int *)(a1 + 732) <= 0 )
  {
    *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
    return RaidCompleteRequestEx(a2, 0, 0);
  }
  else
  {
    *(_QWORD *)(a1 + 1856) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a1 + 1848),
      (PIO_WORKITEM_ROUTINE)RaidUnitQuiesceDeviceWorkRoutine,
      CriticalWorkQueue,
      (PVOID)(a1 + 1848));
    return 259LL;
  }
}
