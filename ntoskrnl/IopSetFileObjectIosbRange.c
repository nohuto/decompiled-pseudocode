/*
 * XREFs of IopSetFileObjectIosbRange @ 0x140942FC8
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x14023FE5C (IopSetTypeSpecificFoExtension.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetFileObjectIosbRange(__int64 a1, __int64 a2)
{
  _KPROCESS *i; // rdi
  unsigned __int64 *v3; // r15
  int FileObjectExtension; // r14d
  _KPROCESS *Process; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v9; // r12
  _KPROCESS **inserted; // rax
  PMDL Mdl; // rsi
  char v12; // r12
  __int16 v13; // ax
  char v14; // al
  struct _LIST_ENTRY *MappedSystemVa; // rax
  unsigned __int64 *Pool2; // rax
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  signed __int64 v21; // rax
  PMDL MemoryDescriptorList; // [rsp+38h] [rbp-A0h]
  struct _LIST_ENTRY *BaseAddress; // [rsp+40h] [rbp-98h]
  _KPROCESS **v24; // [rsp+50h] [rbp-88h]
  _KPROCESS *Object; // [rsp+58h] [rbp-80h]
  __int64 v26[6]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD Buffer[9]; // [rsp+90h] [rbp-48h] BYREF
  char v30; // [rsp+F0h] [rbp+18h]
  BOOLEAN NewElement; // [rsp+F8h] [rbp+20h] BYREF

  v26[0] = 0LL;
  v30 = 0;
  NewElement = 0;
  i = 0LL;
  Buffer[1] = 0LL;
  v3 = 0LL;
  v26[2] = 0LL;
  MemoryDescriptorList = 0LL;
  BaseAddress = 0LL;
  FileObjectExtension = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  Object = Process;
  v26[5] = (__int64)Process;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(unsigned int *)(v6 + 8);
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v9 = *(_QWORD *)v6;
  v26[3] = v9;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  Buffer[0] = Process;
  inserted = (_KPROCESS **)RtlInsertElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer, 0x10u, &NewElement);
  v24 = inserted;
  if ( !inserted )
  {
    FileObjectExtension = -1073741670;
    Mdl = 0LL;
    v12 = 0;
LABEL_58:
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
    goto LABEL_68;
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
    i = (_KPROCESS *)ExAllocatePool2(256LL, 48LL, 1700032329LL);
    v26[1] = (__int64)i;
    if ( !i )
    {
      FileObjectExtension = -1073741670;
      Mdl = 0LL;
      v12 = 0;
      goto LABEL_58;
    }
    v30 = 1;
    if ( Process[1].Affinity.StaticBitmap[30]
      && ((v13 = WORD2(Process[2].Affinity.StaticBitmap[20]), v13 == 332) || v13 == 452 ? (v14 = 1) : (v14 = 0), v14) )
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
    goto LABEL_56;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(64LL, 48LL, 1700032329LL);
  v3 = Pool2;
  if ( !Pool2 )
  {
    FileObjectExtension = -1073741670;
    v12 = v30;
    goto LABEL_58;
  }
  *Pool2 = v9;
  Pool2[1] = v9 + (unsigned int)v7;
  Pool2[3] = v9 + (char *)i->ProfileListHead.Blink - (char *)i->Header.WaitListHead.Flink;
  Pool2[2] = (unsigned __int64)i->ProfileListHead.Flink;
  Pool2[5] = 0LL;
  ObfReferenceObjectWithTag(Object, 0x70436F49u);
  v3[4] = (unsigned __int64)Object;
  FileObjectExtension = IopAllocateFileObjectExtension(a1, v26);
  if ( FileObjectExtension < 0 )
  {
LABEL_56:
    v12 = v30;
  }
  else
  {
    FileObjectExtension = IopSetTypeSpecificFoExtension(v26[0], 2u, (signed __int64)v3);
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
              goto LABEL_46;
          }
          ObfDereferenceObjectWithTag(Object, 0x70436F49u);
          ExFreePoolWithTag(v3, 0);
          FileObjectExtension = 0;
          goto LABEL_68;
        }
        do
        {
LABEL_46:
          v21 = *(_QWORD *)(v19 + 40);
          v3[5] = v21;
        }
        while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), (signed __int64)v3, v21) != v3[5] );
        FileObjectExtension = 0;
        Mdl = MemoryDescriptorList;
      }
    }
    v12 = v30;
    if ( FileObjectExtension < 0 )
      goto LABEL_58;
    if ( v30 == 1 )
    {
      if ( NewElement == 1 )
        *v24 = Object;
      else
        i->DirectoryTableBase = (unsigned __int64)v24[1];
      v24[1] = i;
    }
    else
    {
      ++i->Header.LockNV;
    }
  }
  if ( FileObjectExtension < 0 )
    goto LABEL_58;
LABEL_68:
  ExReleaseFastMutex(&IoStatusBlockRangeTableLock);
  return (unsigned int)FileObjectExtension;
}
