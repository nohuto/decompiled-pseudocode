/*
 * XREFs of CmFcpWorkItemInitialize @ 0x1407D2700
 * Callers:
 *     CmFcpInitializeChangeSubscription @ 0x14087E4BC (CmFcpInitializeChangeSubscription.c)
 *     CmFcManagerInitialize @ 0x140A38D64 (CmFcManagerInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall CmFcpWorkItemInitialize(KSPIN_LOCK *a1, __int64 a2, KSPIN_LOCK a3, KSPIN_LOCK a4)
{
  memset(a1, 0, 0x40uLL);
  *a1 = 0LL;
  a1[2] = (KSPIN_LOCK)CmFcpWorkItemWrapper;
  a1[3] = (KSPIN_LOCK)a1;
  *((_DWORD *)a1 + 10) = 0;
  ExInitializePushLock(a1 + 4);
  a1[7] = a4;
  *((_DWORD *)a1 + 11) = 4;
  a1[6] = a3;
}
