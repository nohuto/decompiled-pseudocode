/*
 * XREFs of MiWriteComplete @ 0x1402126E0
 * Callers:
 *     MiGatherMappedPages @ 0x140215150 (MiGatherMappedPages.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedCompleteApc @ 0x14065A810 (MiStoreWriteModifiedCompleteApc.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     FsRtlReleaseFileForModWrite @ 0x140212510 (FsRtlReleaseFileForModWrite.c)
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiDecrementModifiedWriteCount @ 0x140212BE4 (MiDecrementModifiedWriteCount.c)
 *     MiFreeModWriterEntry @ 0x140212C5C (MiFreeModWriterEntry.c)
 *     MiReleaseWriteInProgressCharges @ 0x140212C98 (MiReleaseWriteInProgressCharges.c)
 *     MiIsRetryIoStatus @ 0x140212D58 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140212D9C (MmIsWriteErrorFatal.c)
 *     MiReleaseControlAreaWaiters @ 0x140214DCC (MiReleaseControlAreaWaiters.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402A42CC (CcNotifyOfMappedWriteComplete.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403AD3F4 (MiStoreCheckCompleteWriteBatch.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRetardMdl @ 0x14061A580 (MiRetardMdl.c)
 *     MiSetDeleteOnClose @ 0x1406239AC (MiSetDeleteOnClose.c)
 *     MiMakePagefileWriterEntryAvailable @ 0x140638C18 (MiMakePagefileWriterEntryAvailable.c)
 *     MiStoreDecrementOutstandingWrites @ 0x140659A2C (MiStoreDecrementOutstandingWrites.c)
 *     MI_PAGEFILE_WRITE @ 0x14065EB48 (MI_PAGEFILE_WRITE.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiWriteComplete(__int64 a1, int *a2, int a3)
{
  struct _MDL *v3; // rsi
  __int64 v5; // r15
  unsigned int v7; // r13d
  int v8; // edi
  int v9; // edx
  unsigned __int64 v10; // r14
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 updated; // rsi
  struct _MDL *p_Size; // rax
  struct _MDL *Next; // rax
  ULONG_PTR v19; // r14
  __int64 v20; // r14
  unsigned __int64 v21; // rdx
  int v22; // r13d
  __int64 v23; // rax
  void *v24; // rcx
  __int64 v25; // rdi
  int IsRetryIoStatus; // eax
  LONG result; // eax
  struct _FILE_OBJECT *v28; // rax
  __int64 v29; // rdx
  __int16 v30; // cx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  char v33; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  __int64 Pool; // rdi
  _QWORD *v40; // rdx
  volatile LONG *v41; // r14
  KIRQL v42; // al
  unsigned __int8 v43; // cl
  unsigned __int64 v44; // rsi
  KIRQL v45; // al
  unsigned __int8 v46; // cl
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  __int64 v51; // [rsp+30h] [rbp-68h]
  struct _KEVENT *Event; // [rsp+38h] [rbp-60h]
  struct _MDL *v53; // [rsp+40h] [rbp-58h]
  unsigned __int64 v54; // [rsp+48h] [rbp-50h]
  __int64 v55; // [rsp+50h] [rbp-48h] BYREF
  ULONG_PTR v56; // [rsp+58h] [rbp-40h]
  unsigned __int8 v57; // [rsp+A0h] [rbp+8h]
  struct _FILE_OBJECT *v58; // [rsp+A0h] [rbp+8h]
  int v59; // [rsp+A8h] [rbp+10h]
  int v61; // [rsp+B8h] [rbp+20h]

  v3 = *(struct _MDL **)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 192);
  v7 = 0;
  v61 = *(_DWORD *)(a1 + 136);
  v8 = 0;
  if ( _bittest16(&v3->MdlFlags, 9u) )
    MiRetardMdl(v3);
  if ( (v3->MdlFlags & 1) != 0 )
    MmUnmapLockedPages(v3->MappedSystemVa, v3);
  v9 = *a2;
  v10 = *(_QWORD *)(a1 + 168);
  v59 = v9;
  v51 = *(_QWORD *)(a1 + 160);
  if ( !v51 )
  {
    v55 = MEMORY[0xFFFFF78000000014];
    MI_PAGEFILE_WRITE(a1, (unsigned int)&v55, 5, 0, v9);
    v9 = v59;
  }
  v53 = v3 + 1;
  v54 = (unsigned __int64)&v3[1] + 8 * ((v61 & 0xFFF) != 0) + 8 * (v61 >> 12);
  if ( v10 )
  {
    v28 = *(struct _FILE_OBJECT **)(a1 + 152);
    v58 = v28;
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1uLL;
    }
    else
    {
      CcNotifyOfMappedWriteComplete(
        v28->SectionObjectPointer,
        *(_QWORD *)(a1 + 176),
        (unsigned int)v61,
        (unsigned int)v9);
      v28 = v58;
    }
    FsRtlReleaseFileForModWrite(v28, (struct _ERESOURCE *)v10);
    ObFastDereferenceObjectDeferDelete(v51 + 64, v58, 1666411853LL);
    v9 = v59;
    if ( v59 >= 0 )
    {
      Event = 0LL;
      goto LABEL_14;
    }
  }
  else if ( v9 >= 0 )
  {
    goto LABEL_12;
  }
  v11 = (*(_DWORD *)(a1 + 40) >> 1) & 1;
  if ( (unsigned int)MmIsWriteErrorFatal(v51 != 0, v11, (unsigned int)v9) )
  {
    if ( !v51 )
      KeBugCheckEx(0x7Au, 0x20uLL, v59, (ULONG_PTR)v3, 0LL);
    if ( (*(_DWORD *)(v51 + 56) & 0x10) == 0 )
    {
      if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v59, v61) && v11 && v54 > (unsigned __int64)&v3[1].Size )
        v8 = 1;
      else
        v7 = 1;
    }
  }
  else
  {
    v8 = 1;
    if ( !v51 )
    {
      *(_DWORD *)(v5 + 716) = v59;
      Event = 0LL;
      goto LABEL_14;
    }
  }
  *(_DWORD *)(v5 + 720) = v59;
LABEL_12:
  Event = 0LL;
  if ( v7 )
    MiSetDeleteOnClose(v51, 1LL);
LABEL_14:
  v12 = MiSwizzleInvalidPte(0LL);
  v15 = *(_QWORD *)(a1 + 144);
  updated = v12;
  if ( v15 )
  {
    v30 = *(_WORD *)(v15 + 204);
    v7 |= 2u;
    if ( (v30 & 0x800) == 0 )
      v7 = v13;
    if ( (v30 & 0x40) == 0 )
      updated = MiTransferSoftwarePte(v12, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 176) >> 12, v14);
  }
  p_Size = v53;
  if ( (unsigned __int64)v53 < v54 )
  {
    while ( 1 )
    {
      Next = p_Size->Next;
      if ( Next != (struct _MDL *)qword_140C69378 )
        break;
      if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
        goto LABEL_22;
      v31 = updated;
LABEL_93:
      MiReleasePageFileInfo(v5, v31, 0);
LABEL_22:
      v21 = updated;
      if ( qword_140C657C0 && (updated & 0x10) == 0 )
        v21 = updated & ~qword_140C657C0;
      updated = MiUpdatePageFileHighInPte(updated, HIDWORD(v21) + 1);
      p_Size = (struct _MDL *)&v53->Size;
      v53 = p_Size;
      if ( (unsigned __int64)p_Size >= v54 )
      {
        v15 = *(_QWORD *)(a1 + 144);
        goto LABEL_27;
      }
    }
    v19 = 48LL * (_QWORD)Next - 0x220000000000LL;
    v56 = v19;
    v57 = MiLockPageInline(v19);
    if ( (v8 & 1) == 0 )
    {
      if ( (*(_BYTE *)(v19 + 34) & 0x10) == 0 || (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
        v8 &= ~2u;
      else
        v8 |= 2u;
    }
    v8 &= 0xFFFFFFF3;
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      v32 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
      if ( (v8 & 2) != 0 || (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_20;
      v33 = *(_BYTE *)(v19 + 34);
      if ( *(_WORD *)(v19 + 32) > 1u )
      {
        *(_BYTE *)(v19 + 34) = v33 | 0x10;
        v8 |= 2u;
        goto LABEL_20;
      }
      *(_BYTE *)(v19 + 34) = v33 & 0xF8 | 2;
      if ( *(_DWORD *)(v32 + 1356) )
      {
        v8 |= 4u;
        goto LABEL_20;
      }
    }
    else if ( v7 < 2 || (v8 & 3) != 0 || (*(_QWORD *)(v19 + 24) & 0x4000000000000000LL) != 0 )
    {
      goto LABEL_20;
    }
    v8 |= 8u;
LABEL_20:
    v20 = MiWriteCompletePfn(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v57 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (v57 + 1));
        v38 = (v37 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v37;
        if ( v38 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v57);
    if ( !v20 )
      goto LABEL_22;
    v31 = v20;
    goto LABEL_93;
  }
LABEL_27:
  if ( *(_DWORD *)(a1 + 140) )
  {
    v29 = *(unsigned int *)(a1 + 140);
    if ( v15 )
      MiReleaseWriteInProgressCharges(v5, v29, 0LL);
    else
      MiReleaseWriteInProgressCharges(v5, v29, 1LL);
  }
  if ( *(_QWORD *)(a1 + 144) )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1Cu) < 8 )
      --*(_DWORD *)(v5 + 732);
    MiMakePagefileWriterEntryAvailable(a1);
    if ( *(_BYTE *)(v5 + 713) )
      Event = (struct _KEVENT *)(v5 + 960);
    if ( (*(_DWORD *)(a1 + 40) & 0x20) != 0 )
    {
      MiStoreDecrementOutstandingWrites(v5);
      if ( !*(_BYTE *)(v5 + 714) )
        MiStoreCheckCompleteWriteBatch(v5);
    }
  }
  if ( v51 )
  {
    v22 = v7 & 1;
    if ( v22 )
    {
      Pool = MiAllocatePool(64LL, 56LL, 1885629773LL);
      if ( Pool )
      {
        *(_QWORD *)(Pool + 32) = MiReferenceControlAreaFileWithTag(v51, 1682730317LL);
        *(_DWORD *)(Pool + 40) = v59;
        *(_BYTE *)(Pool + 48) = 1;
        *(_QWORD *)(Pool + 16) = MiLdwPopupWorker;
        *(_QWORD *)(Pool + 24) = Pool;
        *(_QWORD *)Pool = 0LL;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool, DelayedWorkQueue);
      }
    }
    v23 = MiDecrementModifiedWriteCount(v51, 0LL);
    if ( v23 )
      MiReleaseControlAreaWaiters(v23);
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 664));
    v24 = *(void **)(a1 + 200);
    if ( v24 != (void *)(a1 + 208) )
      ExFreePoolWithTag(v24, 0);
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      v40 = *(_QWORD **)(v5 + 680);
      if ( *v40 != v5 + 672 )
        __fastfail(3u);
      *(_QWORD *)a1 = v5 + 672;
      *(_QWORD *)(a1 + 8) = v40;
      *v40 = a1;
      *(_QWORD *)(v5 + 680) = a1;
      if ( *(_BYTE *)(v5 + 712) )
      {
        *(_BYTE *)(v5 + 712) = 0;
        KeSignalGate(v5 + 688, 1LL);
      }
    }
    else
    {
      MiFreeModWriterEntry(a1, 1LL);
    }
    v25 = 1043LL;
  }
  else
  {
    v25 = 1040LL;
    v22 = v7 & 1;
  }
  if ( v59 >= 0 )
  {
    if ( v51 )
      *(_BYTE *)(v5 + 1072) = 0;
    if ( *(_BYTE *)(v5 + v25) )
    {
      v41 = (volatile LONG *)(v5 + 1036);
      v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 1036));
      v43 = *(_BYTE *)(v5 + v25);
      v44 = v42;
      if ( !v43 )
        goto LABEL_124;
      if ( *(_BYTE *)(v5 + v25 + 2) )
      {
        if ( v43 <= 1u )
          goto LABEL_124;
        *(_BYTE *)(v5 + v25 + 2) = 0;
      }
      else
      {
        v38 = (*(_BYTE *)(v5 + v25 + 1))-- == 1;
        if ( !v38 )
          goto LABEL_124;
        if ( v43 <= 1u )
          goto LABEL_123;
      }
      *(_BYTE *)(v5 + v25) = 0;
      goto LABEL_124;
    }
  }
  else
  {
    IsRetryIoStatus = MiIsRetryIoStatus((unsigned int)v59, v61);
    if ( a3 )
    {
      if ( v22 || IsRetryIoStatus )
        goto LABEL_43;
      goto LABEL_42;
    }
    if ( v59 == -1073741740 )
    {
LABEL_42:
      *(_BYTE *)(v5 + 1072) = 1;
      goto LABEL_43;
    }
    if ( IsRetryIoStatus )
    {
      v41 = (volatile LONG *)(v5 + 1036);
      v45 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 1036));
      v46 = *(_BYTE *)(v5 + v25);
      v44 = v45;
      if ( !v46 )
      {
        *(_WORD *)(v5 + v25) = 4112;
        goto LABEL_124;
      }
      if ( v46 > 1u )
        *(_BYTE *)(v5 + v25) = v46 >> 1;
      if ( *(_BYTE *)(v5 + v25 + 2) )
        goto LABEL_124;
      v38 = (*(_BYTE *)(v5 + v25 + 1))-- == 1;
      if ( !v38 )
        goto LABEL_124;
LABEL_123:
      *(_BYTE *)(v5 + v25 + 2) = 1;
LABEL_124:
      ExReleaseSpinLockExclusiveFromDpcLevel(v41);
      if ( KiIrqlFlags )
      {
        v47 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v47 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v38 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
      __writecr8(v44);
    }
  }
LABEL_43:
  result = (int)Event;
  if ( Event )
    return KeSetEvent(Event, 0, 0);
  return result;
}
