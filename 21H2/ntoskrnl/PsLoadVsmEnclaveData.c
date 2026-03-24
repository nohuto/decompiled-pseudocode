/*
 * XREFs of PsLoadVsmEnclaveData @ 0x140584B3C
 * Callers:
 *     MiLoadDataIntoVsmEnclave @ 0x1408D31C4 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x140316550 (RtlAvlInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     VslLoadEnclaveData @ 0x14088FDBC (VslLoadEnclaveData.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA638 (MiHotPatchImageTreeCompare.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  _DWORD *v23; // r9
  unsigned int v24; // r8d
  __int64 v25; // rdi
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32[13]; // [rsp+34h] [rbp-34h] BYREF
  int v33; // [rsp+80h] [rbp+18h] BYREF

  v33 = 0;
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
  EnclaveData = VslLoadEnclaveData(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, (__int64)&v33);
  v12 = EnclaveData;
  if ( PoolWithTag )
  {
    if ( EnclaveData < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v13 = v33;
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
      v32[0] = 0;
      v20 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v20->ApcState.Process);
      else
        SessionId = -1;
      --v20->SpecialApcDisable;
      v22 = ++v20->AbAllocationRegionCount;
      v23 = (_DWORD *)(v15 & 0x7FFFFFFFFFFFFFFCLL);
      v24 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v26 = !_BitScanReverse((unsigned int *)&v27, v24);
        if ( v26 )
          goto LABEL_26;
        v25 = (__int64)&v20->LockEntries[v27];
        v24 &= ~(1 << v27);
        if ( (*(_BYTE *)(v25 + 26) & 1) != 0
          && (*(_DWORD *)(v25 + 32) & 1) == 0
          && (_DWORD *)(*(_QWORD *)(v25 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v23
          && *(_DWORD *)(v25 + 40) == SessionId )
        {
          *(_BYTE *)(v25 + 26) &= ~1u;
          if ( *(_QWORD *)(v25 + 32) )
            break;
        }
      }
      if ( !v25 )
      {
LABEL_26:
        if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v20, v15, SessionId, 0LL);
        goto LABEL_33;
      }
      *(_BYTE *)(v25 + 32) |= 2u;
      if ( *(__int64 *)(v25 + 32) < 0 )
        KiAbEntryRemoveFromTree(v25);
      v28 = *(_DWORD *)(v25 + 88) & 0x1FFFF;
      v29 = *(_DWORD *)(v25 + 88) & 0xFFFE0000;
      *(_BYTE *)(v25 + 25) &= ~1u;
      v32[0] = v28;
      *(_DWORD *)(v25 + 88) = v29;
      *(_QWORD *)(v25 + 32) = 0LL;
      v30 = (signed __int64)(v25 - (unsigned __int64)v20->LockEntries) / 96;
      if ( v22 == 1 )
        v20->AbEntrySummary |= 1 << v30;
      else
        _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v30);
LABEL_33:
      --v20->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v20, v15, (__int64)v32, v23);
      v26 = v20->SpecialApcDisable++ == -1;
      if ( v26 && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
        KiCheckForKernelApcDelivery(v31);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
