/*
 * XREFs of CmpCloseLightWeightTransaction @ 0x140781E90
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmpRollbackLightWeightTransaction @ 0x140781EE0 (CmpRollbackLightWeightTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpCloseLightWeightTransaction(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  if ( v3 == 1 && (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    CmpRollbackLightWeightTransaction(a2);
    CmpReleaseShutdownRundown();
  }
  return CmCleanupThreadInfo(v5);
}
