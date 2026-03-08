/*
 * XREFs of ViMapDoubleBuffer @ 0x140AC678C
 * Callers:
 *     VfBuildScatterGatherList @ 0x140AC2650 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140AC3800 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushIoBuffers @ 0x1402DCDE0 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x140AC4E8C (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, PMDL MemoryDescriptorList, ULONG_PTR a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  PMDL v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  unsigned __int64 v13; // rbp
  PVOID MappedSystemVa; // r14
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // r9
  PMDL v26; // r15
  unsigned int v27; // r14d
  struct _MDL *Next; // rax
  __int64 v29; // rbx
  const char *v30; // rdx
  CHAR *v31; // rbp
  ULONG ByteCount; // ecx
  unsigned __int64 v33; // rbx
  PVOID v34; // rax
  unsigned __int8 v35; // dl
  struct _KPRCB *v36; // r10
  int v37; // eax
  ULONG_PTR v38; // rcx
  PMDL BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v41; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v43; // [rsp+40h] [rbp-48h]
  _DWORD *v44; // [rsp+48h] [rbp-40h]
  unsigned __int64 v45; // [rsp+50h] [rbp-38h]
  ULONG v46; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  v46 = 0;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_140C0DD18, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_140C0DD18;
    v9 = 0LL;
    BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33LL;
LABEL_3:
    VfReportIssueWithOptions(0xE6u, v11, v10, (ULONG_PTR)v9, (ULONG_PTR)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( (PVOID)a3 < (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset )
  {
    ViHalPreprocessOptions(
      &dword_140C0DD1C,
      "Virtual address %p is before the first MDL %p.",
      268435487LL,
      1LL,
      a3,
      (__int64)MemoryDescriptorList);
    Priority = (CHAR *)&dword_140C0DD1C;
    v9 = (PMDL)a3;
    BugCheckOnFailure = MemoryDescriptorList;
    v10 = 1LL;
LABEL_10:
    v11 = 31LL;
    goto LABEL_3;
  }
  if ( (unsigned int)(a3 - LODWORD(MemoryDescriptorList->StartVa) - MemoryDescriptorList->ByteOffset) >= MemoryDescriptorList->ByteCount )
  {
    ViHalPreprocessOptions(
      &dword_140C0DD28,
      "Virtual address %p is after the first MDL %p.",
      268435487LL,
      2LL,
      a3,
      (__int64)MemoryDescriptorList);
    VfReportIssueWithOptions(0xE6u, 0x1FuLL, 2uLL, a3, (ULONG_PTR)MemoryDescriptorList, &dword_140C0DD28);
    return 0LL;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 80));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v13);
  if ( !MappedSystemVa )
    return 0LL;
  v20 = a3 - MemoryDescriptorList->ByteOffset - (unsigned __int64)MemoryDescriptorList->StartVa;
  v21 = MemoryDescriptorList->ByteCount - v20;
  v22 = (ULONG_PTR)MappedSystemVa + v20;
  v41 = 1;
  v45 = v21;
  Src = (void *)v22;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v22, v5, a5, &v46) )
    return 0LL;
  v23 = (v46 << 12) + (v22 & 0xFFF);
  v24 = *(_QWORD *)(a1 + 72);
  v25 = (_DWORD *)(v23 + *(_QWORD *)(a1 + 64));
  v44 = v25;
  if ( !v24 )
    return 0LL;
  v26 = MemoryDescriptorList;
  v43 = (char *)(v23 + v24);
  v27 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v26 )
        return 0LL;
      Next = v26->Next;
      if ( v41 )
      {
        v41 = 0;
        if ( !Next && v27 > v21 )
        {
          v29 = v5;
          if ( (((v5 - 1) ^ (v21 + v5 - (unsigned __int64)v27)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v30 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v31 = (CHAR *)&unk_140C0DD2C;
LABEL_33:
            ViHalPreprocessOptions(v31, v30, 268435487LL, 3LL, (__int64)MemoryDescriptorList, v29);
            Priority = v31;
            v9 = MemoryDescriptorList;
            BugCheckOnFailure = (PMDL)v29;
            v10 = 3LL;
            goto LABEL_10;
          }
LABEL_37:
          LODWORD(v21) = v27;
          goto LABEL_41;
        }
      }
      else
      {
        if ( !Next )
        {
          ByteCount = v26->ByteCount;
          if ( v27 > ByteCount )
          {
            if ( (((v5 - 1) ^ (v5 + ByteCount - v27)) & 0xFFFFF000) != 0 )
            {
              v29 = v5;
              v30 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v31 = (CHAR *)&unk_140C0DD24;
              goto LABEL_33;
            }
            goto LABEL_37;
          }
        }
        LODWORD(v21) = v26->ByteCount;
      }
      if ( v27 < (unsigned int)v21 )
        LODWORD(v21) = v27;
LABEL_41:
      memmove(v25, Src, (unsigned int)v21);
      v44 = (_DWORD *)((char *)v44 + (unsigned int)v21);
      memmove(v43, Src, (unsigned int)v21);
      v43 += (unsigned int)v21;
      v26 = v26->Next;
      if ( v26 )
      {
        v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        if ( (v26->MdlFlags & 5) != 0 )
          v34 = v26->MappedSystemVa;
        else
          v34 = MmMapLockedPagesSpecifyCache(v26, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v34;
        KxReleaseSpinLock((volatile signed __int64 *)(a1 + 80));
        if ( KiIrqlFlags )
        {
          v35 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && (unsigned __int8)v33 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v25 = v36->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v33 + 1));
            v19 = (v37 & v25[5]) == 0;
            v25[5] &= v37;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v36);
          }
        }
        __writecr8(v33);
        if ( !Src )
          return 0LL;
      }
      v27 -= v21;
      if ( !v27 )
        break;
      v21 = v45;
      v25 = v44;
    }
  }
  v38 = *(_QWORD *)(a1 + 56);
  if ( v38 )
    KeFlushIoBuffers(v38, a5 == 0, 1, (__int64)v25);
  return v5;
}
