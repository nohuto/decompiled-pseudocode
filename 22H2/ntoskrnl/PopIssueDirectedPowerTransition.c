/*
 * XREFs of PopIssueDirectedPowerTransition @ 0x1408F07A4
 * Callers:
 *     PopWakeDeviceList @ 0x1403830C4 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403832A4 (PopSleepDeviceList.c)
 * Callees:
 *     PoFxActivateDevice @ 0x14036F174 (PoFxActivateDevice.c)
 *     PopFxIssueDirectedPowerTransition @ 0x14056B4D4 (PopFxIssueDirectedPowerTransition.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x140576964 (PopCompleteDirectedPowerTransitionCallback.c)
 */

__int64 __fastcall PopIssueDirectedPowerTransition(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  char v5; // si

  v3 = *(_QWORD *)(a2 - 80);
  if ( *(_BYTE *)a1 == 3 )
    return PopCompleteDirectedPowerTransitionCallback(v3, a1, 0);
  v5 = 0;
  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    v5 = 1;
    PoFxActivateDevice(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL));
  }
  return PopFxIssueDirectedPowerTransition(v3, v5, a1);
}
