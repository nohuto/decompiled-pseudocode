/*
 * XREFs of PopSendWeakChargerNotification @ 0x1408EDE0C
 * Callers:
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1403FDDA0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSendWeakChargerNotification(char a1)
{
  char v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_RECONCILED_WEAK_CHARGER, (__int64)&v2);
}
