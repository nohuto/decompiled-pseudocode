/*
 * XREFs of ExTryToConvertFastResourceSharedToExclusive2 @ 0x14040F0B8
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x140607EA0 (ExTryToConvertFastResourceSharedToExclusive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x14040FFC8 (ExpConvertSharedToExclusiveImmediately.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall ExTryToConvertFastResourceSharedToExclusive2(_BYTE *BugCheckParameter2, ULONG_PTR a2)
{
  char v2; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // r8
  _BYTE *v7; // rax
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  ULONG_PTR v11; // rbp

  v2 = 1;
  if ( (BugCheckParameter2[26] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v6 = *(_QWORD *)(a2 + 16);
  if ( (struct _KTHREAD *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v6 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) == 0 )
  {
    v7 = *(_BYTE **)(a2 + 24);
    if ( v7 != BugCheckParameter2 )
    {
      if ( v7 )
        KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)BugCheckParameter2, a2, *(_QWORD *)(a2 + 24));
    }
  }
  if ( (v6 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, a2, 0LL, 0LL);
  if ( (*(_BYTE *)(a2 + 37) & 2) != 0 )
    KeBugCheckEx(0x1C6u, 0xBuLL, a2, (unsigned __int64)(*(_BYTE *)(a2 + 37) & 2) << 15, 0LL);
  if ( *(int *)(a2 + 32) > 1 )
    KeBugCheckEx(0x1C6u, 0x13uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  _m_prefetchw(BugCheckParameter2);
  v8 = *(_QWORD *)BugCheckParameter2;
  do
  {
    if ( (v8 & 1) != 0 )
      break;
    if ( (v8 & 2) != 0 || v8 >> 2 != 1 )
      return 0;
    v9 = v8 & 2 | 1;
    if ( v9 == v8 )
      break;
    v10 = v8;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v9, v8);
  }
  while ( v10 != v8 );
  v11 = *(unsigned __int8 *)(a2 + 36);
  ExpConvertSharedToExclusiveImmediately(BugCheckParameter2, a2, KeGetCurrentThread());
  if ( BugCheckParameter2[100] )
  {
    if ( (_BYTE)v11 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v11);
  }
  else
  {
    BugCheckParameter2[100] = v11;
  }
  return v2;
}
