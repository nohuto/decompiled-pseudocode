/*
 * XREFs of MiLockStandbyLookasidePage @ 0x140464910
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x140264E70 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x1402C6D1C (MiReplaceStandbyLookaside.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiPickStandbyLookasideIndex @ 0x14064EF14 (MiPickStandbyLookasideIndex.c)
 */

__int64 __fastcall MiLockStandbyLookasidePage(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  int v4; // r14d
  int v5; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v13; // [rsp+60h] [rbp+8h]
  int v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h]

  v15 = 88LL * a3 + a1 + 2944;
  v4 = 0;
  v13 = ((unsigned __int64)a3 << 9) + a1 + 7424;
  v5 = 0;
  v6 = 0;
  v7 = MiPickStandbyLookasideIndex();
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 8LL * v7);
    if ( v10 != -1 )
      break;
LABEL_12:
    ++v6;
    v7 = ((_BYTE)v7 + 1) & 0x3F;
    if ( v6 >= 0x40 )
      return -1LL;
  }
  v14 = 0;
  v11 = 48 * v10 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
    v8 = v13;
    v9 = v15;
  }
  if ( *(_QWORD *)(v8 + 8LL * v7) != v10 )
  {
LABEL_11:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v9 = v15;
    --v6;
    LOBYTE(v7) = v7 - 1;
    goto LABEL_12;
  }
  if ( !(unsigned int)MiAcquirePageListLock(v9, 48 * v10 - 0x220000000000LL, v4, (__int64)a2) )
  {
    v8 = v13;
    if ( ++v5 == 8 )
      v4 = 1;
    goto LABEL_11;
  }
  MiReplaceStandbyLookaside(v10, -1LL, *a2);
  return v10;
}
