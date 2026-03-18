/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x1407FE938
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x14098C390 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x14098FFD0 (PopSendSuspendResumeServiceNotification.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x14036AF00 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PfPowerActionNotify @ 0x140A49250 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1)
{
  bool v2; // zf
  __int128 v3; // xmm0
  _QWORD Src[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x44uLL);
  v2 = *((_BYTE *)a1 + 12) == 0;
  v3 = *a1;
  LODWORD(Src[0]) = 7;
  *(_OWORD *)&Src[1] = v3;
  if ( !v2 && *((_DWORD *)a1 + 1) == 18 )
    PfPowerActionNotify(5LL);
  return PopUmpoSendPowerMessage(Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
