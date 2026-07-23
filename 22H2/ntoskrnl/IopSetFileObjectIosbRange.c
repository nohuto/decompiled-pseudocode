/*
 * XREFs of IopSetFileObjectIosbRange @ 0x140892864
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     MmProbeAndLockPages @ 0x1402096D0 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     IopAllocateFileObjectExtension @ 0x14022BB40 (IopAllocateFileObjectExtension.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     IopGetFileObjectExtension @ 0x1402D6F90 (IopGetFileObjectExtension.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IopSetTypeSpecificFoExtension @ 0x14030F6A4 (IopSetTypeSpecificFoExtension.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x14032DC80 (RtlInsertElementGenericTableAvl.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rdi
  _QWORD *v3; // r14
  int FileObjectExtension; // r15d
  _KPROCESS *Process; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v9; // r12
  _KPROCESS **inserted; // rax
  PMDL Mdl; // rsi
  char v12; // r12
  unsigned __int64 v13; // rax
  __int16 v14; // cx
  struct _LIST_ENTRY *MappedSystemVa; // rax
  _QWORD *PoolWithTag; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rax
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+40h] [rbp-98h]
  _KPROCESS **v25; // [rsp+50h] [rbp-88h]
  _KPROCESS *Object; // [rsp+58h] [rbp-80h]
  __int64 v27[6]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v31; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v27[0] = 0LL;
  v31 = 0;
  NewElement = 0;
  i = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  v27[2] = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  FileObjectExtension = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v27[5] = (__int64)Process;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(unsigned int *)(v6 + 8);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *(_QWORD *)v6;
  v27[3] = v9;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  Buffer[0] = Process;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v25 = inserted;
  if ( !inserted )
  {
    FileObjectExtension = -1073741670;
    Mdl = 0LL;
    v12 = 0;
LABEL_57:
    if ( Mdl )
    {
      if ( BaseAddress )
        MmUnmapLockedPages(BaseAddress, Mdl);
      MmUnlockPages(Mdl);
      IoFreeMdl(Mdl);
    }
    if ( v3 )
    {
      ObfDereferenceObjectWithTag(Object, 0x70436F49u);
      ExFreePoolWithTag(v3, 0);
    }
    if ( NewElement == 1 )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
    if ( v12 == 1 )
      ExFreePoolWithTag(i, 0);
    goto LABEL_67;
  }
  if ( !NewElement )
  {
    for ( i = inserted[1];
          i
       && (i->Header.WaitListHead.Flink != (struct _LIST_ENTRY *)v9
        || i->Header.WaitListHead.Blink != (struct _LIST_ENTRY *)(v9 + v7));
          i = (_KPROCESS *)i->DirectoryTableBase )
    {
      ;
    }
  }
  if ( i )
  {
    Mdl = 0LL;
  }
  else
  {
    i = (_KPROCESS *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x65546F49u);
    v27[1] = (__int64)i;
    if ( !i )
    {
      FileObjectExtension = -1073741670;
      Mdl = 0LL;
      v12 = 0;
      goto LABEL_57;
    }
    v31 = 1;
    v13 = Process[1].AffinityPadding[10];
    if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else if ( (v9 & 7) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    if ( v9 + v7 > 0x7FFFFFFF0000LL || v9 + v7 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Mdl = IoAllocateMdl((PVOID)v9, v7, 0, 1u, 0LL);
    MemoryDescriptorList = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, *(_BYTE *)(a2 + 64), IoWriteAccess);
    if ( (Mdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (struct _LIST_ENTRY *)Mdl->MappedSystemVa;
    else
      MappedSystemVa = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(Mdl, 0, MmCached, 0LL, 0, 0x40000010u);
    BaseAddress = MappedSystemVa;
    if ( MappedSystemVa )
    {
      i->ProfileListHead.Flink = (struct _LIST_ENTRY *)Mdl;
      i->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v9;
      i->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v9 + (unsigned int)v7);
      i->Header.LockNV = 1;
      i->DirectoryTableBase = 0LL;
      i->ProfileListHead.Blink = MappedSystemVa;
    }
    else
    {
      FileObjectExtension = -1073741670;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_55;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x65546F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    FileObjectExtension = -1073741670;
    v12 = v31;
    goto LABEL_57;
  }
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  PoolWithTag[5] = 0LL;
  *PoolWithTag = v9;
  PoolWithTag[1] = v9 + (unsigned int)v7;
  PoolWithTag[3] = v9 + (char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink;
  PoolWithTag[2] = i->ProfileListHead.Flink;
  PoolWithTag[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = Object;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, v27);
  if ( FileObjectExtension < 0 )
  {
LABEL_55:
    v12 = v31;
  }
  else
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension(v27[0], 2u, (signed __int64)v3);
    if ( FileObjectExtension == -1073741823 )
    {
      v18 = IopGetFileObjectExtension(a1, v17, 0LL);
      v19 = v18;
      if ( (_KPROCESS *)v3[4] == Object )
      {
        v20 = (_QWORD *)v18;
        if ( v18 )
        {
          while ( *v3 != *v20 || v3[1] != v20[1] )
          {
            v20 = (_QWORD *)v20[5];
            if ( !v20 )
              goto LABEL_43;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          FileObjectExtension = 0;
          goto LABEL_67;
        }
LABEL_43:
        v21 = *(_QWORD *)(v18 + 40);
        v3[5] = v21;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v21) != v3[5] )
        {
          _m_prefetchw((const void *)(v19 + 40));
          do
          {
            v22 = *(_QWORD *)(v19 + 40);
            v3[5] = v22;
          }
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v22) != v3[5] );
        }
        FileObjectExtension = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    v12 = v31;
    if ( FileObjectExtension < 0 )
      goto LABEL_57;
    if ( v31 == 1 )
    {
      if ( NewElement == 1 )
        *v25 = Object;
      else
        i->DirectoryTableBase = (unsigned __int64)v25[1];
      v25[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_57;
LABEL_67:
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
  return (unsigned int)FileObjectExtension;
}
