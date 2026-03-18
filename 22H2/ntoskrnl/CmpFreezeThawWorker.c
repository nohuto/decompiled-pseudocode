/*
 * XREFs of CmpFreezeThawWorker @ 0x140A13810
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmThawRegistry @ 0x140A135E0 (CmThawRegistry.c)
 */

__int64 CmpFreezeThawWorker()
{
  __int64 v1[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v1 = 0LL;
  CmpInitializeThreadInfo((__int64)v1);
  CmpFreezeThawPending = 0;
  if ( CmpFreezeThawState == 1 )
    CmThawRegistry();
  return CmCleanupThreadInfo(v1);
}
