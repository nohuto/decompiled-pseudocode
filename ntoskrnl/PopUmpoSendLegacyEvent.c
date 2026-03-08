/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x1409948A0
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140980CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140987724 (PopSendSuspendResumeServiceNotification.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
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
    PfPowerActionNotify(5LL, 0LL, 0LL);
  return PopUmpoSendPowerMessage(Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
