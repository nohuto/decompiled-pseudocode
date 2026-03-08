/*
 * XREFs of KiSaveBugCheckRecoveryStatusPhase2 @ 0x140578FBC
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x140578960 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IoSaveBugCheckRecoveryStatus @ 0x14054E6BC (IoSaveBugCheckRecoveryStatus.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405793F8 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiSaveBugCheckRecoveryStatusPhase2(unsigned __int8 a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  HIDWORD(v2) = a1;
  v3 = 0;
  LODWORD(v2) = 2;
  IoSaveBugCheckRecoveryStatus((int *)&v2);
  v4 = 0LL;
  v2 = 1LL;
  v3 = 196;
  return KiUpdateBugcheckRecoveryProgress(&v2);
}
