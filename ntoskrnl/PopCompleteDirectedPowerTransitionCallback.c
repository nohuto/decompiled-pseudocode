/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x14058DF74
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1405871FC (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x140988CE0 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14020259C (PoFxIdleDevice.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14058DFFC (PopCompleteNotifyTransitionCommon.c)
 */

__int64 __fastcall PopCompleteDirectedPowerTransitionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v6; // esi

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (int)a3 < 0 )
    v4 = *(_QWORD *)(a1 + 96);
  PopCompleteNotifyTransitionCommon(a2, *(_QWORD *)(a1 + 48) + 160LL, a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return KeReleaseSemaphoreEx(*(_QWORD *)(a2 + 40), 0, 1);
}
