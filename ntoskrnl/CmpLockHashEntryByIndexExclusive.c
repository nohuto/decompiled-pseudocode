/*
 * XREFs of CmpLockHashEntryByIndexExclusive @ 0x140A1C82C
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1407AB230 (CmpReferenceHive.c)
 */

char __fastcall CmpLockHashEntryByIndexExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // r14
  unsigned __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  char result; // al

  v3 = (unsigned int)BugCheckParameter4;
  v4 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 1648) + 24LL * (unsigned int)BugCheckParameter4);
  v5 = KeAbPreAcquire((__int64)v4, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (__int64)v4);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xBuLL, v3);
  return result;
}
