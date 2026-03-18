/*
 * XREFs of MiWaitForVadDeletion @ 0x140660CC8
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159F4 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x14071F400 (MiCleanVad.c)
 * Callees:
 *     MiUnlockVad @ 0x140289B80 (MiUnlockVad.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     MiInsertVadEvent @ 0x1402E326C (MiInsertVadEvent.c)
 *     KeWaitForGate @ 0x14034A780 (KeWaitForGate.c)
 *     memset @ 0x140435400 (memset.c)
 */

void *__fastcall MiWaitForVadDeletion(__int64 a1)
{
  void *result; // rax
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5[10]; // [rsp+20h] [rbp-50h] BYREF

  result = memset(v5, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v5[1]) = 0;
    v5[3] = (unsigned __int64)&v5[2];
    LODWORD(v5[8]) = 1;
    v5[2] = (unsigned __int64)&v5[2];
    LOWORD(v5[1]) = 263;
    BYTE2(v5[1]) = 6;
    MiInsertVadEvent(a1, v5, 1LL, v3);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v5[1], 18, 0);
    return (void *)MiLockVad((__int64)CurrentThread, a1);
  }
  return result;
}
