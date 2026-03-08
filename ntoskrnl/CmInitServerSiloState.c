/*
 * XREFs of CmInitServerSiloState @ 0x140816884
 * Callers:
 *     CmpInitSiloSupport @ 0x140816810 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1407361AC (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x140738F48 (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x1408168F8 (CmpStartSiloKeyLockTracker.c)
 */

__int64 CmInitServerSiloState()
{
  __int64 v0; // r8
  unsigned int v1; // r8d
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  *(_OWORD *)v3 = 0LL;
  BugCheckParameter2 = 0LL;
  CmpInitializeThreadInfo((__int64)v3);
  if ( (int)CmpGetOrCreateContextForSiloNoRef(v0, &BugCheckParameter2) >= 0
    && (int)CmpStartSiloRegistryNamespace(BugCheckParameter2) >= 0 )
  {
    CmpStartSiloKeyLockTracker(BugCheckParameter2);
  }
  CmCleanupThreadInfo(v3);
  return v1;
}
