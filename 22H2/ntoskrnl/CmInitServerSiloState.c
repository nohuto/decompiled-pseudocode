/*
 * XREFs of CmInitServerSiloState @ 0x1407A5B58
 * Callers:
 *     CmpInitSiloSupport @ 0x1407A5B28 (CmpInitSiloSupport.c)
 *     PspInitializeServerSiloDeferred @ 0x1409064C0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140660BCC (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406A630C (CmpStartSiloRegistryNamespace.c)
 *     CmpStartSiloKeyLockTracker @ 0x1407A5BA0 (CmpStartSiloKeyLockTracker.c)
 */

__int64 __fastcall CmInitServerSiloState(__int64 a1)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  BugCheckParameter2 = 0LL;
  result = CmpGetOrCreateContextForSiloNoRef(a1, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    result = CmpStartSiloRegistryNamespace(BugCheckParameter2);
    if ( (int)result >= 0 )
    {
      result = CmpStartSiloKeyLockTracker(BugCheckParameter2);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
