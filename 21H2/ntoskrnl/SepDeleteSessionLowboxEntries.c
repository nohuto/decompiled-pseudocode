/*
 * XREFs of SepDeleteSessionLowboxEntries @ 0x14023C434
 * Callers:
 *     SepDeReferenceLogonSession @ 0x140603270 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14077A830 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     RtlDeleteHashTable @ 0x140378F00 (RtlDeleteHashTable.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void SepDeleteSessionLowboxEntries()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // r15d
  char *i; // r14
  struct _KTHREAD *v3; // rax
  ULONG_PTR v4; // rsi
  char *v5; // r13
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // r10d
  unsigned int v9; // ebx
  _QWORD *v10; // r9
  unsigned int v11; // edx
  _QWORD *v12; // rdx
  __int64 j; // r8
  unsigned __int64 v14; // rax
  int v15; // eax
  struct _KTHREAD *v16; // rbx
  unsigned int v17; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  char *v24; // rcx
  void **v25; // rax
  struct _KTHREAD *v26; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v28; // r12
  unsigned int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  struct _KTHREAD *v33; // rbx
  unsigned __int8 v34; // si
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdx

  if ( g_SessionLowboxMap )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v1 = -1;
    for ( i = *(char **)g_SessionLowboxMap; i != (char *)g_SessionLowboxMap; i = v5 )
    {
      v3 = KeGetCurrentThread();
      v4 = (ULONG_PTR)(i + 24);
      v5 = *(char **)i;
      --v3->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 24), 0LL);
      v6 = *((_DWORD *)i + 8);
      v7 = *((_QWORD *)i + 5) & 4LL;
      v8 = (unsigned int)v7 != 0LL ? 0x20 : 0;
      v9 = v8 + v6 - 1;
      v10 = (_QWORD *)(*((_QWORD *)i + 5) - (v7 != 0 ? 4 : 0));
      if ( v6 )
      {
        v12 = (_QWORD *)(*((_QWORD *)i + 5) - (v7 != 0 ? 4 : 0));
        for ( j = ~*v10 | ((1LL << v8) - 1); j == -1; j = ~*v12 )
        {
          if ( ++v12 > &v10[(unsigned __int64)v9 >> 6] )
          {
            v11 = -1;
            goto LABEL_14;
          }
        }
        _BitScanForward64(&v14, ~j);
        v11 = v14 + ((unsigned int)(v12 - v10) << 6);
        if ( v11 > v9 )
          v11 = -1;
      }
      else
      {
        v11 = -1;
      }
LABEL_14:
      v15 = v11 - v8;
      if ( v11 == -1 )
        v15 = -1;
      if ( v15 == -1 )
      {
        RtlDeleteHashTable(*((PRTL_DYNAMIC_HASH_TABLE *)i + 6));
        ExFreePoolWithTag(*((PVOID *)i + 5), 0);
        v24 = *(char **)i;
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || (v25 = (void **)*((_QWORD *)i + 1), *v25 != i) )
          __fastfail(3u);
        *v25 = v24;
        *((_QWORD *)v24 + 1) = v25;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        v26 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(i + 24) == 1 )
          SessionId = MmGetSessionIdEx(v26->ApcState.Process);
        else
          SessionId = -1;
        --v26->SpecialApcDisable;
        v28 = ++v26->AbAllocationRegionCount;
        v29 = ((char)v26->AbEntrySummary | (char)v26->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v30, v29);
          if ( v20 )
            break;
          v31 = (__int64)&v26->LockEntries[v30];
          v29 &= ~(1 << v30);
          if ( (*(_BYTE *)(v31 + 26) & 1) != 0
            && (*(_DWORD *)(v31 + 32) & 1) == 0
            && (*(_QWORD *)(v31 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v31 + 40) == SessionId )
          {
            *(_BYTE *)(v31 + 26) &= ~1u;
            if ( *(_QWORD *)(v31 + 32) )
            {
              if ( v31 )
              {
                *(_BYTE *)(v31 + 32) |= 2u;
                if ( *(__int64 *)(v31 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v31);
                *(_DWORD *)(v31 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v31 + 25) &= ~1u;
                *(_QWORD *)(v31 + 32) = 0LL;
                v32 = (signed __int64)(v31 - (unsigned __int64)v26->LockEntries) / 96;
                if ( v28 == 1 )
                  v26->AbEntrySummary |= 1 << v32;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v26->AbOrphanedEntrySummary, 1 << v32);
                goto LABEL_61;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v26->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v26, (ULONG_PTR)(i + 24), SessionId, 0LL);
LABEL_61:
        --v26->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v26);
        v20 = v26->SpecialApcDisable++ == -1;
        if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(i, 0);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(i + 24);
        v16 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(i + 24) == 1 )
          v17 = MmGetSessionIdEx(v16->ApcState.Process);
        else
          v17 = -1;
        --v16->SpecialApcDisable;
        v18 = ++v16->AbAllocationRegionCount;
        v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v21, v19);
          if ( v20 )
            break;
          v22 = (__int64)&v16->LockEntries[v21];
          v19 &= ~(1 << v21);
          if ( (*(_BYTE *)(v22 + 26) & 1) != 0
            && (*(_DWORD *)(v22 + 32) & 1) == 0
            && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v22 + 40) == v17 )
          {
            *(_BYTE *)(v22 + 26) &= ~1u;
            if ( *(_QWORD *)(v22 + 32) )
            {
              if ( v22 )
              {
                *(_BYTE *)(v22 + 32) |= 2u;
                if ( *(__int64 *)(v22 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
                *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v22 + 25) &= ~1u;
                *(_QWORD *)(v22 + 32) = 0LL;
                v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
                if ( v18 == 1 )
                  v16->AbEntrySummary |= 1 << v23;
                else
                  _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
                goto LABEL_34;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, v4, v17, 0LL);
LABEL_34:
        --v16->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v16);
        v20 = v16->SpecialApcDisable++ == -1;
        if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
          KiCheckForKernelApcDelivery();
        KeLeaveCriticalRegion();
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&LowboxSessionMapLock);
    v33 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(&LowboxSessionMapLock) == 1 )
      v1 = MmGetSessionIdEx(v33->ApcState.Process);
    --v33->SpecialApcDisable;
    v34 = ++v33->AbAllocationRegionCount;
    v35 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v36, v35);
      if ( v20 )
        break;
      v37 = (__int64)&v33->LockEntries[v36];
      v35 &= ~(1 << v36);
      if ( (*(_BYTE *)(v37 + 26) & 1) != 0
        && (*(_DWORD *)(v37 + 32) & 1) == 0
        && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LowboxSessionMapLock & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v37 + 40) == v1 )
      {
        *(_BYTE *)(v37 + 26) &= ~1u;
        if ( *(_QWORD *)(v37 + 32) )
        {
          if ( v37 )
          {
            *(_BYTE *)(v37 + 32) |= 2u;
            if ( *(__int64 *)(v37 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v37);
            *(_DWORD *)(v37 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v37 + 25) &= ~1u;
            *(_QWORD *)(v37 + 32) = 0LL;
            v38 = (signed __int64)(v37 - (unsigned __int64)v33->LockEntries) / 96;
            if ( v34 == 1 )
              v33->AbEntrySummary |= 1 << v38;
            else
              _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v38);
            goto LABEL_87;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, (ULONG_PTR)&LowboxSessionMapLock, v1, 0LL);
LABEL_87:
    --v33->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v33);
    v20 = v33->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
    KeLeaveCriticalRegion();
  }
}
