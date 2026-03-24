/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x1403AD694
 * Callers:
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x140A48AAC (SepTokenInitialization.c)
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
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v3; // di
  int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  char v13; // al
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // bp
  _DWORD *v17; // r9
  unsigned int v18; // r8d
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v25; // rcx
  int v27; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v6 = SepMandatoryObjectTypePolicyCount;
  v7 = 0LL;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    v7 = (unsigned int)(v7 + 1);
    v8 += 3;
    if ( (unsigned int)v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v3 = 1;
LABEL_5:
  if ( (unsigned int)v7 < 0x20 )
  {
    if ( v3 )
    {
      v9 = (unsigned int)v7;
      goto LABEL_8;
    }
LABEL_7:
    v9 = (unsigned int)v7;
    v10 = 3 * v7;
    SepMandatoryObjectTypePolicy[2 * v10 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v10 + 2] = 0;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v10] = a1;
    SepMandatoryObjectTypePolicyCount = v6 + 1;
LABEL_8:
    v11 = 3 * v9;
    SepMandatoryObjectTypePolicy[2 * v11 + 2] |= 1u;
    SepMandatoryObjectTypePolicy[2 * v11 + 3] = a2;
    if ( (a2 & 1) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x100u;
    if ( (a2 & 2) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x200u;
    if ( (a2 & 4) != 0 )
      SepMandatoryObjectTypePolicy[6 * v9 + 4] |= 0x400u;
    v12 = 0;
    goto LABEL_15;
  }
  v12 = -1073741823;
LABEL_15:
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock(&SepMandatoryObjectTypePolicyLock);
  v27 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&SepMandatoryObjectTypePolicyLock) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = -1;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = (_DWORD *)((unsigned __int64)&SepMandatoryObjectTypePolicyLock & 0x7FFFFFFFFFFFFFFCLL);
  v18 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    if ( v19 )
      break;
    v21 = (__int64)&v14->LockEntries[v20];
    v18 &= ~(1 << v20);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v17
      && *(_DWORD *)(v21 + 40) == SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
      {
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree(v21);
          v22 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
          v23 = *(_DWORD *)(v21 + 88) & 0xFFFE0000;
          *(_BYTE *)(v21 + 25) &= ~1u;
          v27 = v22;
          *(_DWORD *)(v21 + 88) = v23;
          *(_QWORD *)(v21 + 32) = 0LL;
          v24 = (signed __int64)(v21 - (unsigned __int64)v14->LockEntries) / 96;
          if ( v16 == 1 )
            v14->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_30;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v14, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock, SessionId, 0LL);
LABEL_30:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, (__int64)&SepMandatoryObjectTypePolicyLock, (__int64)&v27, v17);
  v19 = v14->SpecialApcDisable++ == -1;
  if ( v19 )
  {
    v25 = &v14->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != v25 )
      KiCheckForKernelApcDelivery((__int64)v25);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
