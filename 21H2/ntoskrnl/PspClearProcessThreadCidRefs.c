/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x14064CB80
 * Callers:
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x14024C610 (ObDereferenceObjectEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1403F9560 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x14061BB00 (ExMapHandleToPointer.c)
 */

char __fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 *v5; // rax
  volatile unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // ebx
  char result; // al
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  v5 = ExMapHandleToPointer(PspCidTable, a2);
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
