/*
 * XREFs of RtlSetSystemBootStatus @ 0x14073AEB0
 * Callers:
 *     PopWriteBsdPoInfo @ 0x1402B9F3C (PopWriteBsdPoInfo.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x14085A9C0 (PopRecordLongPowerButtonPressDetected.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14073AEEC (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlSetSystemBootStatus(int a1, __int64 a2, int a3)
{
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  v4[0] = a1;
  v4[1] = 0;
  v5 = a2;
  v6 = a3;
  return RtlpSystemBootStatusRequest(32LL, v4, 1LL);
}
