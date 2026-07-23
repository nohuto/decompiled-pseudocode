/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x14022AB88
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int SessionId; // r15d
  unsigned int v2; // r12d
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rbx
  ULONG_PTR v5; // r14
  unsigned int *v6; // rbx
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned __int64 *v9; // rax
  unsigned int v10; // esi
  struct _KTHREAD *v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // edx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned __int8 v21; // [rsp+88h] [rbp+10h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = *(_QWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a1 + 40);
  SessionId = -1;
  if ( v20 - v19 >= 0xFFFFFFFF )
    return 3221225621LL;
  v2 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v5 = (ULONG_PTR)&Process[1].EndPadding[4];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].EndPadding[4], 0LL);
  v6 = (unsigned int *)Process[1].EndPadding[3];
  if ( v6 )
  {
    v7 = *v6;
    v8 = 1;
    if ( *v6 > 1 )
    {
      v9 = (unsigned __int64 *)(v6 + 12);
      while ( *v9 < v19 )
      {
        ++v8;
        v9 += 3;
        if ( v8 >= v7 )
          goto LABEL_15;
      }
      if ( *(_QWORD *)&v6[6 * v8 + 6] == v19 && v6[6 * v8 + 8] == (_DWORD)v20 - (_DWORD)v19 )
      {
        v10 = v7 - 1;
        if ( v8 != v7 - 1 )
          memmove(&v6[6 * v8 + 4], &v6[4 * v8 + 10 + 2 * v8], 24LL * (v7 - v8 - 1));
        v2 = 0;
        *v6 = v10;
      }
    }
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx(v11->ApcState.Process);
  --v11->SpecialApcDisable;
  v21 = ++v11->AbAllocationRegionCount;
  v12 = 0LL;
  v13 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    if ( v14 )
      break;
    v13 &= ~(1 << v15);
    v16 = (__int64)&v11->LockEntries[v15];
    if ( (*(_BYTE *)(v16 + 26) & 1) != 0
      && (*(_DWORD *)(v16 + 32) & 1) == 0
      && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v16 + 40) == SessionId )
    {
      *(_BYTE *)(v16 + 26) &= ~1u;
      if ( *(_QWORD *)(v16 + 32) )
      {
        v12 = v16;
        break;
      }
    }
  }
  if ( v12 )
  {
    *(_BYTE *)(v12 + 32) |= 2u;
    if ( *(__int64 *)(v12 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v12);
    *(_DWORD *)(v12 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v12 + 25) &= ~1u;
    *(_QWORD *)(v12 + 32) = 0LL;
    v17 = (signed __int64)(v12 - (unsigned __int64)v11->LockEntries) / 96;
    if ( v21 == 1 )
      v11->AbEntrySummary |= 1 << v17;
    else
      _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v17);
  }
  else if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
  {
    KeBugCheckEx(0x162u, (ULONG_PTR)v11, v5, SessionId, 0LL);
  }
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11);
  v14 = v11->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v2;
}
