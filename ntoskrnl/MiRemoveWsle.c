/*
 * XREFs of MiRemoveWsle @ 0x140325790
 * Callers:
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiTerminateWsle @ 0x14032AAF0 (MiTerminateWsle.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140229800 (MiWriteValidPteVolatile.c)
 *     MiIsDriverPage @ 0x1402D38C0 (MiIsDriverPage.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x140619EE0 (MiLogRemoveWsleEvent.c)
 */

char __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  volatile signed __int32 *v6; // rsi
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  LONG *v11; // r9
  int v12; // r13d
  unsigned __int64 v13; // rbp
  int v14; // r12d
  unsigned __int8 v15; // di
  signed __int64 v16; // r15
  unsigned __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 *v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rcx
  char result; // al
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rdi
  __int64 *v27; // r15
  __int64 v28; // rbp
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 **v31; // rax
  __int64 **v32; // rdi
  __int64 **v33; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 *v37; // rax
  __int64 v38; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  signed __int32 v41; // [rsp+80h] [rbp+8h]
  __int64 v42; // [rsp+80h] [rbp+8h]
  signed __int32 v43; // [rsp+80h] [rbp+8h]
  signed __int32 v44; // [rsp+88h] [rbp+10h]

  v6 = &dword_140C69E40;
  v8 = a3;
  v9 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v11 = &dword_140C69E40;
  else
    v11 = (LONG *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, a2);
  }
  else
  {
    _m_prefetchw(v11);
    v41 = *v11 & 0x7FFFFFFF;
    v44 = _InterlockedCompareExchange(v11, v41 + 1, v41);
    if ( v44 != v41 )
    {
      while ( v44 >= 0 )
      {
        v43 = v44;
        v44 = _InterlockedCompareExchange(v11, v44 + 1, v44);
        if ( v44 == v43 )
          goto LABEL_5;
      }
      ExpWaitForSpinLockSharedAndAcquire((unsigned __int64)v11, 0xFFu);
    }
  }
LABEL_5:
  if ( a6 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), -v8);
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), -v8);
  }
  v12 = 1;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase && (v9 < PsNtosImageEnd && v9 >= PsNtosImageBase || v9 < PsHalImageEnd && v9 >= PsHalImageBase) )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C655D0, -(int)v8);
    }
    else if ( (unsigned int)MiGetSystemRegionType(v9) == 12
           && MiIsDriverPage(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1) )
    {
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140C655D0 + 1, -(int)v8);
    }
  }
  v13 = -v8;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), -v8);
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
      goto LABEL_16;
    v15 = a4 & 0xF;
    v16 = -v8;
    goto LABEL_14;
  }
  v14 = 1;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v13);
  v15 = a4 & 0xF;
  if ( v15 != 8 )
  {
    v16 = -v8;
    v17 = ((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v18 = *(_QWORD *)v17;
    if ( v17 >= 0xFFFFF6FB7DBED000uLL
      && v17 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v35 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
        v36 = v18 | 0x20;
        if ( (v35 & 0x20) == 0 )
          v36 = v18;
        v18 = v36;
        if ( (v35 & 0x42) != 0 )
          v18 = v36 | 0x42;
      }
    }
    v38 = v18;
    v19 = (unsigned __int64 *)(48
                             * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v38) >> 12) & 0xFFFFFFFFFFLL)
                             - 0x220000000000LL);
    v20 = *v19;
    v21 = (*v19 >> 14) & 7;
    if ( ((*v19 >> 4) & 0x3FF) != 0 )
    {
      if ( v15 == v21 )
      {
        v22 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(16 * (v13 + ((*v19 >> 4) & 0x3FF)))) & 0x3FF0;
      }
      else
      {
        if ( v15 <= v21 )
          goto LABEL_14;
        v22 = v20 & 0xFFFFFFFFFFFE000FuLL | (16 * (v13 & 0x3FF | ((unsigned __int64)(v15 & 7) << 10)));
      }
      *v19 = v22;
    }
LABEL_14:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v15 + 40), v16);
    if ( v15 != 7 )
    {
LABEL_15:
      v8 = a3;
      goto LABEL_16;
    }
    v24 = *(_QWORD *)(a1 + 96);
    v25 = *(unsigned __int16 *)(a1 + 174);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v26 = *(_QWORD **)(qword_140C67048 + 8 * v25);
    v42 = v26[2115];
    if ( v24 >= *(_QWORD *)(v42 + 56) )
    {
      if ( v16 < 0 )
        goto LABEL_15;
      v27 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v26[2116] == v27 )
        goto LABEL_15;
    }
    else
    {
      if ( v16 > 0 )
        goto LABEL_15;
      v27 = (__int64 *)(a1 + 24);
      if ( !*(_QWORD *)(a1 + 24) || (__int64 *)v26[2117] == v27 )
        goto LABEL_15;
      v12 = 2;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, &LockHandle);
    if ( *(_BYTE *)(v42 + 53) || (v30 = *v27) == 0 )
    {
      *(_BYTE *)(v42 + 54) = 1;
    }
    else
    {
      v31 = (__int64 **)v27[1];
      if ( *(__int64 **)(v30 + 8) != v27 || *v31 != v27 )
        goto LABEL_91;
      v32 = (__int64 **)(v26 + 2116);
      *v31 = (__int64 *)v30;
      *(_QWORD *)(v30 + 8) = v31;
      if ( v12 != 1 )
      {
        v33 = (__int64 **)v32[1];
        if ( *v33 == (__int64 *)v32 )
        {
          *v27 = (__int64)v32;
          v27[1] = (__int64)v33;
          *v33 = v27;
          v32[1] = v27;
          KxReleaseQueuedSpinLock(&LockHandle);
          goto LABEL_15;
        }
LABEL_91:
        __fastfail(3u);
      }
      v37 = *v32;
      if ( (__int64 **)(*v32)[1] != v32 )
        goto LABEL_91;
      *v27 = (__int64)v37;
      v27[1] = (__int64)v32;
      v37[1] = (__int64)v27;
      *v32 = v27;
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    goto LABEL_15;
  }
LABEL_16:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    _InterlockedExchangeAdd64(&qword_140C69E88, v13);
    if ( v14 )
      _InterlockedExchangeAdd64(&qword_140C69E90, v13);
  }
  result = *(_BYTE *)(a1 + 184) & 7;
  if ( result != 2 )
    v6 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v6, retaddr);
  }
  else
  {
    _InterlockedAnd(v6, 0xBFFFFFFF);
    _InterlockedDecrement(v6);
  }
  if ( v14 )
  {
    if ( a5 == 9 || a5 == 10 && (result = 0, (*(_BYTE *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      if ( v8 )
      {
        v28 = v8;
        v29 = v9;
        do
        {
          result = MiWriteValidPteVolatile(
                     (volatile signed __int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                     0x80000000,
                     a5);
          v29 += 4096LL;
          --v28;
        }
        while ( v28 );
        v8 = a3;
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && v8 )
  {
    do
    {
      result = MiLogRemoveWsleEvent(v9, *(_BYTE *)(a1 + 184) & 7);
      v9 += 4096LL;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
