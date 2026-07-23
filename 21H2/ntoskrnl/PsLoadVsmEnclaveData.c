/*
 * XREFs of PsLoadVsmEnclaveData @ 0x140584D6C
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     VslLoadEnclaveData @ 0x14088FF1C (VslLoadEnclaveData.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA798 (MiHotPatchImageTreeCompare.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsLoadVsmEnclaveData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _QWORD *PoolWithTag; // rbx
  int EnclaveData; // eax
  unsigned int v12; // r15d
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // r14
  bool v17; // r8
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v22; // bp
  unsigned int v23; // r8d
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33[13]; // [rsp+34h] [rbp-34h] BYREF
  int v34; // [rsp+80h] [rbp+18h] BYREF

  v34 = 0;
  if ( a3 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  EnclaveData = VslLoadEnclaveData(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, (__int64)&v34);
  v12 = EnclaveData;
  if ( PoolWithTag )
  {
    if ( EnclaveData < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v13 = v34;
      *((_DWORD *)PoolWithTag + 9) = 0;
      *((_DWORD *)PoolWithTag + 8) = v13;
      PoolWithTag[3] = a2;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = a1 + 112;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      v16 = (unsigned __int64 *)(a1 + 104);
      v17 = 0;
      v18 = *(_QWORD **)(a1 + 104);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( (int)MiHotPatchImageTreeCompare(a2, v18) < 0 )
          {
            v19 = (_QWORD *)*v18;
            if ( !*v18 )
            {
              v17 = 0;
              break;
            }
          }
          else
          {
            v19 = (_QWORD *)v18[1];
            if ( !v19 )
            {
              v17 = 1;
              break;
            }
          }
          v18 = v19;
        }
      }
      RtlAvlInsertNodeEx(v16, (unsigned __int64)v18, v17, PoolWithTag);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v33[0] = 0;
      v20 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
      else
        SessionId = -1;
      --v20->SpecialApcDisable;
      v22 = ++v20->AbAllocationRegionCount;
      v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v25 = !_BitScanReverse((unsigned int *)&v26, v23);
        if ( v25 )
          goto LABEL_26;
        v24 = (__int64)&v20->LockEntries[v26];
        v23 &= ~(1 << v26);
        if ( (*(_BYTE *)(v24 + 26) & 1) != 0
          && (*(_DWORD *)(v24 + 32) & 1) == 0
          && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v24 + 40) == SessionId )
        {
          *(_BYTE *)(v24 + 26) &= ~1u;
          if ( *(_QWORD *)(v24 + 32) )
            break;
        }
      }
      if ( !v24 )
      {
LABEL_26:
        if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v20, v15, SessionId, 0LL);
        goto LABEL_33;
      }
      *(_BYTE *)(v24 + 32) |= 2u;
      if ( *(__int64 *)(v24 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
      v27 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
      v28 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
      *(_BYTE *)(v24 + 25) &= ~1u;
      v33[0] = v27;
      *(_DWORD *)(v24 + 88) = v28;
      *(_QWORD *)(v24 + 32) = 0LL;
      v29 = (signed __int64)(v24 - (unsigned __int64)v20->LockEntries) / 96;
      if ( v22 == 1 )
        v20->AbEntrySummary |= 1 << v29;
      else
        _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v29);
LABEL_33:
      --v20->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v20, v15, v33);
      v25 = v20->SpecialApcDisable++ == -1;
      if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
        KiCheckForKernelApcDelivery();
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
    }
  }
  return v12;
}
