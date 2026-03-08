/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x14024CE30
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14024D3A0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAbCompareSnappedEntryState @ 0x1402F456C (KiAbCompareSnappedEntryState.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140358338 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x1404630E8 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

__int128 *__fastcall KiAbEntryGetLockedHeadEntry(__int128 *a1, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  bool v3; // zf
  unsigned __int64 v7; // rcx
  volatile LONG *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  int v11; // r15d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  volatile LONG i; // ecx
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned __int64 v21; // rax
  __int128 *v22; // rdi
  _BYTE *v23; // rsi
  __int128 *v24; // rbx
  char v26; // cl
  unsigned __int64 v27; // r10
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int8 v30; // al
  int v31; // r8d
  unsigned __int64 v32; // rax
  char v33; // al
  char v34; // cl
  __int64 v35; // rax
  unsigned __int64 v36; // r9
  int v37; // r8d
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  int v40; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+2Ch] [rbp-5Ch]
  __int128 v42; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v45; // [rsp+90h] [rbp+8h] BYREF

  v41 = 0;
  v3 = (*((_BYTE *)a1 + 19) & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v3 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 10, a3);
    if ( (*((_BYTE *)a1 + 19) & 1) != 0 )
      return a1;
    KxReleaseQueuedSpinLock(a3);
  }
  v42 = *a1;
  if ( (__int64)v42 >= 0 && !a2 )
    return 0LL;
  v39 = v42 & 0x7FFFFFFFFFFFFFFCLL;
  v40 = DWORD2(v42);
  v7 = ((((unsigned __int64)v42 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v8 = (volatile LONG *)((char *)&KiAbTreeArray + v7 + 16);
  v9 = (unsigned __int64)&KiAbTreeArray + v7;
  ExAcquireSpinLockSharedAtDpcLevel(v8);
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)v9;
    if ( (*(_QWORD *)(v9 + 8) & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_16;
      v12 ^= v9;
    }
    v10 = *(_QWORD *)(v9 + 8) & 1LL;
    while ( v12 )
    {
      v13 = *(_QWORD *)(v12 - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v13 < v39 )
        goto LABEL_33;
      if ( v13 > v39 )
        goto LABEL_13;
      v14 = *(_DWORD *)(v12 - 16);
      if ( v14 == DWORD2(v42) )
        break;
      if ( v14 < DWORD2(v42) )
      {
LABEL_33:
        v15 = *(_QWORD *)(v12 + 8);
        if ( (_DWORD)v10 && v15 )
        {
LABEL_37:
          v12 ^= v15;
          continue;
        }
      }
      else
      {
LABEL_13:
        v15 = *(_QWORD *)v12;
        if ( (_DWORD)v10 && v15 )
          goto LABEL_37;
      }
      v12 = v15;
    }
LABEL_16:
    if ( !a2 )
    {
      if ( v12 )
      {
        v22 = (__int128 *)(v12 - 24);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 - 24 + 80), a3);
        if ( v11 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v8);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v8);
        if ( a1 == v22 )
          return v22;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 10, &LockHandle);
        KxReleaseQueuedSpinLock(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(a1, &v39) )
          return v22;
        KxReleaseQueuedSpinLock(a3);
      }
      else if ( v11 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      }
      return 0LL;
    }
    if ( v12 )
    {
      v22 = (__int128 *)(v12 - 24);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v12 - 24 + 80), a3);
      if ( v11 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v8);
      if ( *(__int64 *)a1 < 0 )
        return v22;
      v23 = (char *)a1 + 17;
      if ( *((_BYTE *)a1 + 17) != *(__int64 *)a1 < 0 )
      {
        v26 = *((_BYTE *)&a1[-6 * *((unsigned __int8 *)a1 + 16) - 93] - 13);
        if ( v26 > 30 )
          v26 = 30;
        v27 = (unsigned __int64)(v22 + 4);
        *((_BYTE *)a1 + 48) = v26;
        v28 = *((_QWORD *)v22 + 9);
        v29 = *((_QWORD *)v22 + 8);
        if ( (v28 & 1) == 0 )
          goto LABEL_58;
        if ( v29 )
        {
          v29 ^= v27;
LABEL_58:
          v30 = 0;
          v31 = v28 & 1;
          if ( v29 )
          {
            while ( 1 )
            {
              if ( *(char *)(v29 + 24) < v26 )
              {
                v32 = *(_QWORD *)v29;
                if ( v31 )
                {
                  if ( !v32 )
                    goto LABEL_71;
                  v32 ^= v29;
                }
                if ( !v32 )
                  goto LABEL_71;
              }
              else
              {
                v32 = *(_QWORD *)(v29 + 8);
                if ( v31 )
                {
                  if ( !v32 )
                    goto LABEL_64;
                  v32 ^= v29;
                }
                if ( !v32 )
                  goto LABEL_64;
              }
              v29 = v32;
            }
          }
LABEL_72:
          RtlRbInsertNodeEx(v27, v29, v30, (char *)a1 + 24);
          *((_BYTE *)a1 + 7) |= 0x80u;
          goto LABEL_45;
        }
LABEL_71:
        v30 = 0;
        goto LABEL_72;
      }
      v33 = KiAbOwnerComputeCpuPriorityKey(a1);
      v27 = (unsigned __int64)(v22 + 3);
      *((_BYTE *)a1 + 48) = v33;
      v34 = v33;
      v35 = *((_QWORD *)v22 + 7);
      if ( (v35 & 1) != 0 )
      {
        v29 = *(_QWORD *)v27;
        if ( !*(_QWORD *)v27 )
          goto LABEL_71;
        v36 = v29 ^ v27;
      }
      else
      {
        v36 = *(_QWORD *)v27;
      }
      v29 = v36;
      v37 = v35 & 1;
      v30 = 0;
      if ( v36 )
      {
        while ( 1 )
        {
          if ( *(char *)(v29 + 24) > v34 )
          {
            v38 = *(_QWORD *)v29;
            if ( v37 )
            {
              if ( !v38 )
                goto LABEL_71;
              v38 ^= v29;
            }
            if ( !v38 )
              goto LABEL_71;
          }
          else
          {
            v38 = *(_QWORD *)(v29 + 8);
            if ( v37 )
            {
              if ( !v38 )
                goto LABEL_64;
              v38 ^= v29;
            }
            if ( !v38 )
            {
LABEL_64:
              v30 = 1;
              goto LABEL_72;
            }
          }
          v29 = v38;
        }
      }
      goto LABEL_72;
    }
    if ( v11 )
      goto LABEL_22;
    v11 = 1;
    v45 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
      break;
    if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v8, retaddr, v10) )
      goto LABEL_22;
LABEL_108:
    ExReleaseSpinLockSharedFromDpcLevel(v8);
    ExAcquireSpinLockExclusiveAtDpcLevel(v8);
  }
  if ( _interlockedbittestandset(v8, 0x1Fu) )
    goto LABEL_108;
  for ( i = *v8; (*v8 & 0xBFFFFFFF) != 0x80000001; i = *v8 )
  {
    if ( (i & 0x40000000) == 0 )
      _InterlockedOr(v8, 0x40000000u);
    KeYieldProcessorEx(&v45);
  }
LABEL_22:
  v17 = *(_QWORD *)v9;
  if ( (*(_QWORD *)(v9 + 8) & 1) == 0 )
  {
LABEL_23:
    v18 = 0;
    if ( !v17 )
      goto LABEL_44;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v17 - 24) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v19 < v39 || v19 <= v39 && ((v20 = *(_DWORD *)(v17 - 16), v20 == DWORD2(v42)) || v20 < DWORD2(v42)) )
      {
        v21 = *(_QWORD *)(v17 + 8);
        if ( (*(_QWORD *)(v9 + 8) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_42;
          v21 ^= v17;
        }
        if ( !v21 )
        {
LABEL_42:
          v18 = 1;
          goto LABEL_44;
        }
      }
      else
      {
        v21 = *(_QWORD *)v17;
        if ( (*(_QWORD *)(v9 + 8) & 1) != 0 )
        {
          if ( !v21 )
            goto LABEL_43;
          v21 ^= v17;
        }
        if ( !v21 )
          goto LABEL_43;
      }
      v17 = v21;
    }
  }
  if ( v17 )
  {
    v17 ^= v9;
    goto LABEL_23;
  }
LABEL_43:
  v18 = 0;
LABEL_44:
  RtlRbInsertNodeEx(v9, v17, v18, (char *)a1 + 24);
  v22 = a1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 10, a3);
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  v23 = (char *)a1 + 17;
  *((_BYTE *)a1 + 7) |= 0x80u;
  *((_BYTE *)a1 + 19) |= 1u;
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_BYTE *)a1 + 92) = 0;
  *((_DWORD *)a1 + 23) &= 0xFFFF80FF;
LABEL_45:
  v24 = &a1[-6 * *((unsigned __int8 *)a1 + 16)];
  if ( *v23 )
    ++*((_BYTE *)v24 - 903);
  else
    _InterlockedExchangeAdd8((volatile signed __int8 *)v24 - 825, 1u);
  return v22;
}
