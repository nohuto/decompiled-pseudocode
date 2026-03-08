/*
 * XREFs of ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x1C002CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalDeviceClockIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  int v4; // eax

  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 368) = 2;
    if ( (*(_QWORD *)&v4 & 0x10000LL) != 0 )
      PoRequestPowerIrp(
        *(PDEVICE_OBJECT *)(a1 + 768),
        0,
        *(POWER_STATE *)(a1 + 536),
        ACPIInternalWaitWakeLoop,
        0LL,
        0LL);
  }
  IofCompleteRequest(a2, 0);
}
