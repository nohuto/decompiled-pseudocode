/*
 * XREFs of PsGetProcessEnclaveModuleInfo @ 0x14058470C
 * Callers:
 *     DbgkpPostModuleMessages @ 0x1408852A0 (DbgkpPostModuleMessages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MmGetEnclaveModuleList @ 0x14054B734 (MmGetEnclaveModuleList.c)
 *     PsFreeEnclaveModuleInfo @ 0x1405846B0 (PsFreeEnclaveModuleInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, char **a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int EnclaveModuleList; // r12d
  unsigned int v6; // r15d
  char *PoolWithTag; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r10
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *i; // r8
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *j; // rdx
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v22; // si
  unsigned int v23; // r8d
  _DWORD *v24; // r9
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v33; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-28h]
  _QWORD *v36; // [rsp+48h] [rbp-20h]
  _QWORD *v37; // [rsp+50h] [rbp-18h]
  unsigned int v38; // [rsp+B0h] [rbp+48h]

  CurrentThread = KeGetCurrentThread();
  v38 = 0;
  EnclaveModuleList = 0;
  v6 = 0;
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = a1 + 2264;
  v34 = a1 + 2264;
  ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
  v9 = *(_QWORD *)(a1 + 2248);
  if ( v9 )
  {
    v10 = *(_QWORD **)(v9 + 8);
    v11 = v10;
    v35 = *(_QWORD *)(a1 + 2248);
    v36 = v10;
    v37 = v10;
    while ( 1 )
    {
      if ( !v11 )
        goto LABEL_8;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v10 = v37;
        v11 = v36;
      }
      v12 = (_QWORD *)*v11;
      if ( (*v11 & 1) != 0 )
      {
LABEL_8:
        for ( i = v10 + 1; ; ++i )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5) )
          {
            v12 = 0LL;
            goto LABEL_13;
          }
          v12 = (_QWORD *)*i;
          if ( (*i & 1) == 0 )
            break;
        }
        v11 = (_QWORD *)*i;
        v37 = i;
        v10 = i;
        v36 = v12;
      }
      else
      {
        v11 = (_QWORD *)*v11;
        v36 = v12;
      }
LABEL_13:
      if ( !v12 )
        break;
      ++v6;
    }
    if ( v6 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x56455350u);
      if ( PoolWithTag )
      {
        v14 = *(_QWORD *)(a1 + 2248);
        v35 = v14;
        v15 = *(_QWORD **)(v14 + 8);
        v37 = v15;
        v16 = v15;
        v36 = v15;
        do
        {
          if ( !v16 )
            goto LABEL_25;
          if ( (*v16 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v15 = v37;
            v16 = v36;
          }
          v17 = (_QWORD *)*v16;
          if ( (*v16 & 1) != 0 )
          {
LABEL_25:
            for ( j = v15 + 1; ; ++j )
            {
              if ( (unsigned __int64)j >= *(_QWORD *)(v14 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5) )
              {
                v17 = 0LL;
                goto LABEL_30;
              }
              v19 = (_QWORD *)*j;
              if ( (*j & 1) == 0 )
                break;
            }
            v16 = (_QWORD *)*j;
            v37 = j;
            v15 = j;
            v36 = v19;
            v17 = v19;
          }
          else
          {
            v16 = (_QWORD *)*v16;
            v36 = v17;
          }
LABEL_30:
          if ( !v17 )
            break;
          EnclaveModuleList = MmGetEnclaveModuleList(
                                v17[4],
                                &PoolWithTag[16 * v38],
                                (unsigned int *)&PoolWithTag[16 * v38 + 8]);
          if ( EnclaveModuleList < 0 )
            break;
          ++v38;
        }
        while ( v38 < v6 );
        v8 = v34;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v20 = KeGetCurrentThread();
  v33 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  else
    SessionId = -1;
  --v20->SpecialApcDisable;
  v22 = ++v20->AbAllocationRegionCount;
  v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  v24 = (_DWORD *)(v8 & 0x7FFFFFFFFFFFFFFCLL);
  v25 = !_BitScanReverse((unsigned int *)&v26, v23);
  if ( v25 )
    goto LABEL_47;
  while ( 1 )
  {
    v27 = (__int64)&v20->LockEntries[v26];
    v23 &= ~(1 << v26);
    if ( (*(_BYTE *)(v27 + 26) & 1) != 0
      && (*(_DWORD *)(v27 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v24
      && *(_DWORD *)(v27 + 40) == SessionId )
    {
      *(_BYTE *)(v27 + 26) &= ~1u;
      if ( *(_QWORD *)(v27 + 32) )
        break;
    }
    v25 = !_BitScanReverse((unsigned int *)&v26, v23);
    if ( v25 )
      goto LABEL_47;
  }
  if ( !v27 )
  {
LABEL_47:
    if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v20, v8, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v27 + 32) |= 2u;
    if ( *(__int64 *)(v27 + 32) < 0 )
      KiAbEntryRemoveFromTree(v27);
    v28 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
    v29 = *(_DWORD *)(v27 + 88) & 0xFFFE0000;
    *(_BYTE *)(v27 + 25) &= ~1u;
    v33 = v28;
    *(_DWORD *)(v27 + 88) = v29;
    *(_QWORD *)(v27 + 32) = 0LL;
    v30 = (signed __int64)(v27 - (unsigned __int64)v20->LockEntries) / 96;
    if ( v22 == 1 )
      v20->AbEntrySummary |= 1 << v30;
    else
      _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v30);
  }
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v8, (__int64)&v33, v24);
  v25 = v20->SpecialApcDisable++ == -1;
  if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(v31);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(PoolWithTag, v38);
  }
  else
  {
    *a2 = PoolWithTag;
    *a3 = v6;
  }
  return (unsigned int)EnclaveModuleList;
}
