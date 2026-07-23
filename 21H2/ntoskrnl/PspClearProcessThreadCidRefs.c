/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1406419A0
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x1402F0E60 (ObDereferenceObjectEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x140685770 (ExMapHandleToPointer.c)
 */

char __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *v5; // rax
  volatile unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ebx
  char result; // al
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int64 *)ExMapHandleToPointer(PspCidTable, a2);
  v11 = 0LL;
  v6 = *v5;
  *(_QWORD *)&v11 = *v5 & 0xFFFFFFFFFFFE0001uLL;
  *v5 = v11;
  v7 = PspCidTable;
  v8 = (unsigned __int16)(v6 >> 1);
  _InterlockedExchangeAdd64(v5, 1uLL);
  _InterlockedOr(v10, 0);
  if ( *(_QWORD *)(v7 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v7 + 48), 0LL);
  result = KiLeaveGuardedRegionUnsafe(a1);
  if ( v8 )
    return ObDereferenceObjectEx(a3, v8);
  return result;
}
