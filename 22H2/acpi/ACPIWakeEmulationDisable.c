/*
 * XREFs of ACPIWakeEmulationDisable @ 0x1C0045274
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C001C170 (ACPIDeviceCancelWaitWakeIrp.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00334AC (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00447E0 (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDisconnectWakeInterrupt @ 0x1C0044918 (ACPIDisconnectWakeInterrupt.c)
 */

void __fastcall ACPIWakeEmulationDisable(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v2; // rbx
  __int64 v3; // rdi

  v1 = *(_DWORD *)(a1 + 116);
  if ( v1 )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( v1 > 1 )
      v2 = (_QWORD *)*v2;
    v3 = *(unsigned int *)(a1 + 116);
    do
    {
      ACPIDisconnectWakeInterrupt((__int64)v2);
      v2 += 5;
      --v3;
    }
    while ( v3 );
  }
}
