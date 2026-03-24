/*
 * XREFs of MiInsertLargePageChain @ 0x14027EE04
 * Callers:
 *     MiInsertDemotedPages @ 0x1402EF170 (MiInsertDemotedPages.c)
 * Callees:
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiIsFreeZeroPfnCold @ 0x1402837A0 (MiIsFreeZeroPfnCold.c)
 *     MiSetPfnPageState @ 0x1402AA590 (MiSetPfnPageState.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AC2B0 (MiSetFreeZeroPfnCold.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiLockPageAtDpc @ 0x14054F85C (MiLockPageAtDpc.c)
 *     MiWakeLargePageWaiters @ 0x140557CBC (MiWakeLargePageWaiters.c)
 */

void __fastcall MiInsertLargePageChain(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  BOOL v7; // r14d
  int v8; // r9d
  unsigned int IsFreeZeroPfnCold; // r12d
  unsigned __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r9
  unsigned int v23; // eax
  bool v24; // zf
  __int64 v25; // r8
  __int64 v26; // rbx
  unsigned int v27; // [rsp+30h] [rbp-50h]
  unsigned int v28; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int128 v31; // [rsp+58h] [rbp-28h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h]

  v30 = a3;
  v32 = 0LL;
  v7 = (*(_DWORD *)(a2 + 16) & 0x3E0LL) != 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v31 = 0LL;
  IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(a2, a2, a3, a4);
  v10 = MiLargePageSizes[v8];
  if ( v8 == 2 )
  {
    MiConvertEntireLargePageToSmall(a2, 2, 1, v7, 0LL, 0LL);
  }
  else
  {
    v12 = (unsigned int)(v8 + 1);
    v27 = v12;
    v13 = MiLargePageSizes[v12];
    v14 = v10 / v13;
    v15 = v10 + (a2 + 0x58000000000LL) / 48 - v13;
    v16 = 48 * (v10 - v13) + a2;
    MiLockPageAtDpc(v16);
    LockHandle.LockQueue.Next = 0LL;
    *((_QWORD *)&v31 + 1) = v7 | 0x300000000LL;
    *(_QWORD *)&v31 = v15;
    LOBYTE(v32) = 2;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, a1 + 4328, v17);
    v18 = v27;
    LOBYTE(v18) = ~(_BYTE)v27 & 3;
    v28 = v18;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v16 + 34) & 7) == 6 )
      {
        MiSetPfnPageState(v16, 5LL, v11, v18);
        MiSetFreeZeroPfnCold(v19, IsFreeZeroPfnCold);
        MiSetPfnPageState(v16, 6LL, v20, v21);
      }
      else
      {
        MiSetFreeZeroPfnCold(v16, IsFreeZeroPfnCold);
      }
      *(_BYTE *)(v16 + 39) = v22 | *(_BYTE *)(v16 + 39) & 0xFC;
      if ( (_DWORD)v14 == 1 )
      {
        if ( v30 )
          break;
      }
      v24 = *(_QWORD *)(a1 + 4352) == 0LL;
      *(_QWORD *)&v31 = v15;
      if ( v24 )
      {
        HIDWORD(v31) |= 2u;
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        HIDWORD(v31) &= ~2u;
      }
      MiInsertLargePageInNodeList(&v31);
      LODWORD(v14) = v14 - 1;
      if ( !(_DWORD)v14 )
        goto LABEL_21;
      v15 -= v13;
      v16 += -48LL * v13;
      v23 = HIDWORD(v31);
      v24 = (BYTE12(v31) & 2) == 0;
      if ( (BYTE12(v31) & 2) != 0 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v23 = HIDWORD(v31) & 0xFFFFFFFD;
          HIDWORD(v31) &= ~2u;
        }
        else
        {
          v23 = HIDWORD(v31);
        }
        v24 = (v23 & 2) == 0;
      }
      v18 = v28;
      if ( v24 )
      {
        HIDWORD(v31) = v23 | 2;
        MiLockPageAtDpc(v16);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
        KxAcquireQueuedSpinLock(&LockHandle, a1 + 4328, v25);
        v18 = v28;
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_21:
  if ( a5 )
  {
    if ( (BYTE12(v31) & 2) == 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4328);
      KxAcquireQueuedSpinLock(&LockHandle, a1 + 4328, v11);
    }
    v26 = *(_QWORD *)(a1 + 4288);
    *(_QWORD *)(a1 + 4288) = 0LL;
    --*(_DWORD *)(a1 + 4284);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v26 )
      MiWakeLargePageWaiters(v26);
  }
  else if ( (BYTE12(v31) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
