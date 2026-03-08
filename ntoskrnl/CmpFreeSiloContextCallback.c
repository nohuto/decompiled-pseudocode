/*
 * XREFs of CmpFreeSiloContextCallback @ 0x140A0EF70
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A191F8 (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall CmpFreeSiloContextCallback(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  CmpStopSiloKeyLockTracker(BugCheckParameter2);
  v2 = *(void **)(BugCheckParameter2 + 32);
  if ( v2 )
    ObfDereferenceObject(v2);
  return CmCleanupThreadInfo(v4);
}
