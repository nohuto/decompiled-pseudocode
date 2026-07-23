/*
 * XREFs of KsepShimDbChanged @ 0x140372DD0
 * Callers:
 *     KseQueryDeviceData @ 0x14075EC10 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1408BF430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     KsepShimDatabaseTime @ 0x14075EAB8 (KsepShimDatabaseTime.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // esi
  char v2; // al
  struct _KTHREAD *v3; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v5; // r14
  unsigned int v6; // r8d
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v13; // rcx
  int v15; // [rsp+78h] [rbp+48h] BYREF
  __int64 v16; // [rsp+80h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  v1 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( qword_140C2AF68 )
    {
      if ( v16 != qword_140C2AF68 )
      {
        qword_140C2AF68 = v16;
        v1 = 1;
      }
    }
    else
    {
      qword_140C2AF68 = v16;
    }
    v16 = 0LL;
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( qword_140C2AFA0 )
      {
        if ( v16 != qword_140C2AFA0 )
        {
          qword_140C2AFA0 = v16;
          v1 = 1;
        }
      }
      else
      {
        qword_140C2AFA0 = v16;
      }
    }
  }
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  v15 = 0;
  v3 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&KsepShimDbLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
  else
    SessionId = -1;
  --v3->SpecialApcDisable;
  v5 = ++v3->AbAllocationRegionCount;
  v6 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, v6);
    if ( v7 )
      break;
    v9 = (__int64)&v3->LockEntries[v8];
    v6 &= ~(1 << v8);
    if ( (*(_BYTE *)(v9 + 26) & 1) != 0
      && (*(_DWORD *)(v9 + 32) & 1) == 0
      && (*(_QWORD *)(v9 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&KsepShimDbLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v9 + 40) == SessionId )
    {
      *(_BYTE *)(v9 + 26) &= ~1u;
      if ( *(_QWORD *)(v9 + 32) )
      {
        if ( v9 )
        {
          *(_BYTE *)(v9 + 32) |= 2u;
          if ( *(__int64 *)(v9 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9);
          v10 = *(_DWORD *)(v9 + 88) & 0x1FFFF;
          v11 = *(_DWORD *)(v9 + 88) & 0xFFFE0000;
          *(_BYTE *)(v9 + 25) &= ~1u;
          v15 = v10;
          *(_DWORD *)(v9 + 88) = v11;
          *(_QWORD *)(v9 + 32) = 0LL;
          v12 = (signed __int64)(v9 - (unsigned __int64)v3->LockEntries) / 96;
          if ( v5 == 1 )
            v3->AbEntrySummary |= 1 << v12;
          else
            _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v12);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&KsepShimDbLock, SessionId, 0LL);
LABEL_17:
  --v3->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&KsepShimDbLock, &v15);
  v7 = v3->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v13 = &v3->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v1;
}
