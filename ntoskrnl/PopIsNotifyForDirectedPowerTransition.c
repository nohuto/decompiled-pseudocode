/*
 * XREFs of PopIsNotifyForDirectedPowerTransition @ 0x14058E354
 * Callers:
 *     PopSleepDeviceList @ 0x14058E578 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x14058E81C (PopWakeDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsNotifyForDirectedPowerTransition(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( (DWORD1(PopCurrentBroadcast) & 0x800000) != 0 && *(_QWORD *)(a1 - 80) && (*(_DWORD *)(a1 + 600) & 0x10000) != 0 )
    return (*(_DWORD *)(a1 + 600) & 0x20000) == 0;
  return v1;
}
