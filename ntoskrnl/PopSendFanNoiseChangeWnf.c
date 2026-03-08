/*
 * XREFs of PopSendFanNoiseChangeWnf @ 0x14086012C
 * Callers:
 *     PopFanUpdateSpeed @ 0x140846AC0 (PopFanUpdateSpeed.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSendFanNoiseChangeWnf(int a1)
{
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_FAN_NOISE_CHANGE, (__int64)&v2);
}
