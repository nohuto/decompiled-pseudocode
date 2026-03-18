/*
 * XREFs of KiSaveBugCheckRecoveryStatusPhase2 @ 0x14057B4CC
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x14057AE70 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     IoSaveBugCheckRecoveryStatus @ 0x140550B5C (IoSaveBugCheckRecoveryStatus.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x14057B908 (KiUpdateBugcheckRecoveryProgress.c)
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
