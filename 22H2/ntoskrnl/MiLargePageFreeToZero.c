/*
 * XREFs of MiLargePageFreeToZero @ 0x1402843C0
 * Callers:
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 * Callees:
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AC2B0 (MiSetFreeZeroPfnCold.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 */

void __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v7; // r14
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbp
  __int64 v14; // rax
  ULONG_PTR v15; // r9
  volatile signed __int32 *v16; // rdx
  int v17; // r15d
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r8
  ULONG_PTR v26; // r10
  unsigned __int64 v27; // r9
  volatile signed __int32 *v28; // rdx
  unsigned int v29; // ebx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r11
  ULONG_PTR v32; // rcx
  ULONG_PTR *v33; // rdx
  __int64 *v34; // [rsp+20h] [rbp-68h]
  ULONG_PTR v35; // [rsp+20h] [rbp-68h]
  __int64 v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  __int64 v39; // [rsp+90h] [rbp+8h]
  __int64 v40; // [rsp+90h] [rbp+8h]
  unsigned int PfnChannel; // [rsp+A8h] [rbp+20h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v7 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v8 = a2;
  v39 = a2;
  v9 = MiLargePageSizes[a2];
  v34 = &MiLargePageSizes[a2];
  v10 = *(unsigned int *)(MiSearchNumaNodeTable((__int64)(48 * BugCheckParameter2) / 48) + 8);
  PfnChannel = MiGetPfnChannel(v7, v11, v12);
  v36 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL));
  v13 = *(_QWORD *)(v36 + 16) + 4544 * v10;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 4328);
  KxAcquireQueuedSpinLock(&LockHandle, v13 + 4328, v36);
  *(_BYTE *)(v7 + 34) &= ~8u;
  v14 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v14 + 24) = 0LL;
  *(_BYTE *)(v14 + 69) = 1;
  *(_QWORD *)(v7 + 16) = MiSwizzleInvalidPte(128LL);
  if ( !a4 )
  {
    v19 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_39;
    v20 = *(_QWORD **)(v7 + 8);
    if ( *v20 != v7 )
      goto LABEL_39;
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( a3 )
      MiSetFreeZeroPfnCold(v7, 1LL);
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
      MiArePageContentsZero(BugCheckParameter2);
    v37 = 1072 * v8;
    --*(_QWORD *)(1072 * v8 + v13 + 8);
    v21 = 1072 * v8 + (BugCheckParameter2 < 0x100000 ? 0x10 : 0) + v13;
    v22 = v39;
    --*(_QWORD *)(v21 + 24);
    v23 = 4LL;
    v40 = 134 * v39;
    if ( BugCheckParameter2 < 0x100000 )
      v23 = 12LL;
    v24 = (unsigned __int64)*(unsigned __int8 *)(v7 + 34) >> 6;
    v25 = v24 + 134 * v22 + 4 * (PfnChannel + v23);
    v35 = 24 * (BugCheckParameter2 / *v34 % (unsigned int)dword_140C4DF80[v22]);
    --*(_QWORD *)(v35 + *(_QWORD *)(v13 + 8 * v25 + 560) + 16);
    --*(_QWORD *)(v13 + 8 * v25 + 48);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 2304), -(__int64)v9);
    if ( dword_140C4E6CC == 1 )
    {
      v26 = BugCheckParameter2 & 0x1F;
      v27 = v9;
      v28 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (BugCheckParameter2 >> 5));
      if ( v26 + v9 <= 0x20 )
      {
        if ( v9 == 32 )
        {
          *v28 = -1;
          goto LABEL_37;
        }
        v29 = ((1 << v9) - 1) << v26;
        goto LABEL_36;
      }
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        _InterlockedOr(v28, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v26);
        v27 = v9 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
        ++v28;
      }
      if ( v27 >= 0x20 )
      {
        v30 = v27 >> 5;
        v27 += -32LL * (v27 >> 5);
        do
        {
          *v28++ = -1;
          --v30;
        }
        while ( v30 );
      }
      if ( v27 )
      {
        v29 = (1 << v27) - 1;
LABEL_36:
        _InterlockedOr(v28, v29);
      }
    }
LABEL_37:
    *(_BYTE *)(v7 + 34) &= 0xF8u;
    v31 = v40 + v24 + 4 * (PfnChannel + (unsigned __int64)(BugCheckParameter2 < 0x100000 ? 8 : 0));
    v32 = *(_QWORD *)(v13 + 8 * v31 + 560) + v35;
    v33 = *(ULONG_PTR **)(v32 + 8);
    if ( *v33 == v32 )
    {
      *(_QWORD *)v7 = v32;
      *(_QWORD *)(v7 + 8) = v33;
      *v33 = v7;
      *(_QWORD *)(v32 + 8) = v7;
      ++*(_QWORD *)(v32 + 16);
      ++*(_QWORD *)(v13 + 8 * v31 + 48);
      ++*(_QWORD *)(v37 + v13);
      ++*(_QWORD *)(v21 + 16);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 2240), v9);
      goto LABEL_6;
    }
LABEL_39:
    __fastfail(3u);
  }
  if ( dword_140C4E6CC == 1 )
  {
    v15 = BugCheckParameter2 & 0x1F;
    v16 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (BugCheckParameter2 >> 5));
    if ( v15 + v9 > 0x20 )
    {
      if ( (BugCheckParameter2 & 0x1F) != 0 )
      {
        v17 = BugCheckParameter2 & 0x1F;
        _InterlockedOr(v16, ((1 << (32 - v17)) - 1) << v15);
        v9 -= (unsigned int)(32 - v17);
        ++v16;
      }
      if ( v9 >= 0x20 )
      {
        v18 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v16++ = -1;
          --v18;
        }
        while ( v18 );
      }
      if ( v9 )
        _InterlockedOr(v16, (1 << v9) - 1);
    }
    else if ( v9 == 32 )
    {
      *v16 = -1;
    }
    else
    {
      _InterlockedOr(v16, ((1 << v9) - 1) << v15);
    }
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
}
