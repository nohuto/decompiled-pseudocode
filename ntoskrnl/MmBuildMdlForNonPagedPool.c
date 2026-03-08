/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1402B5DB0
 * Callers:
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1403C9050 (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x14050F610 (HalpFlushMapBuffers.c)
 *     HvlGetCoverageData @ 0x14053D1C8 (HvlGetCoverageData.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14054ECE4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1405BC49C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     SmKmIssueVolumeIo @ 0x1405C91AC (SmKmIssueVolumeIo.c)
 *     DifMmBuildMdlForNonPagedPoolWrapper @ 0x1405E4AC0 (DifMmBuildMdlForNonPagedPoolWrapper.c)
 *     MiCreateMdl @ 0x1407F223C (MiCreateMdl.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409EA424 (EtwpBuildMdlForTraceBuffer.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A2E748 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiQueuePinDriverAddressLog @ 0x14030C9F8 (MiQueuePinDriverAddressLog.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiVaToPfnEx @ 0x140384AD0 (MiVaToPfnEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x14063F4B8 (MiSetNonPagedPoolNoSteal.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // rdi
  PMDL v2; // r15
  ULONG_PTR v3; // rbx
  char *v4; // rdx
  unsigned __int64 v5; // r14
  unsigned __int64 Process; // r8
  int v8; // ebp
  ULONG_PTR v9; // rdi
  int SystemRegionType; // r13d
  ULONG_PTR v11; // r12
  struct _KTHREAD *CurrentThread; // rdx
  int v13; // r10d
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  CSHORT MdlFlags; // r8
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+28h] [rbp-60h]
  unsigned __int64 v23; // [rsp+30h] [rbp-58h]
  unsigned __int64 v24; // [rsp+38h] [rbp-50h]
  unsigned __int64 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]
  ULONG_PTR v27; // [rsp+98h] [rbp+10h] BYREF

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = 0LL;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v5 = -1LL;
  v27 = 0LL;
  Process = 0xFFFFF68000000000uLL;
  v8 = 0;
  v9 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  SystemRegionType = 0;
  v11 = v9 + 8 * ((((unsigned __int16)v4 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  if ( v9 < v11 )
  {
    while ( 1 )
    {
      CurrentThread = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
      if ( v8 )
      {
        if ( v8 < 2 )
          goto LABEL_13;
      }
      else
      {
        v13 = 4;
        v14 = 4LL;
        v15 = (__int64)(v9 << 25) >> 16;
        v23 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v16 = *(&v22 + v14--);
          --v13;
          v17 = *(_QWORD *)v16;
          if ( v16 >= 0xFFFFF6FB7DBED000uLL )
          {
            CurrentThread = (struct _KTHREAD *)0xFFFFF6FB7DBED7F8LL;
            if ( v16 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
            {
              CurrentThread = KeGetCurrentThread();
              Process = (unsigned __int64)CurrentThread->ApcState.Process;
              if ( *(_BYTE *)(Process + 912) != 1 )
              {
                if ( (v17 & 1) == 0 )
                  goto LABEL_25;
                if ( (v17 & 0x20) == 0 || (v17 & 0x42) == 0 )
                {
                  Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                  CurrentThread = *(struct _KTHREAD **)(Process + 1928);
                  if ( CurrentThread )
                  {
                    Process = v17 | 0x20;
                    v21 = *((_QWORD *)&CurrentThread->Header.Lock + ((v16 >> 3) & 0x1FF));
                    if ( (v21 & 0x20) == 0 )
                      Process = v17;
                    LOBYTE(v17) = Process;
                    if ( (v21 & 0x42) != 0 )
                      LOBYTE(v17) = Process | 0x42;
                  }
                }
              }
            }
          }
          if ( (v17 & 1) == 0 )
            goto LABEL_25;
          if ( (v17 & 0x80u) != 0LL )
            break;
          if ( v14 == 1 )
            goto LABEL_25;
          CurrentThread = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
        }
        if ( v13 )
        {
          v18 = MiVaToPfnEx(v15, CurrentThread, Process, v14);
          v3 = v27;
          v5 = v18;
          v8 = 1;
          goto LABEL_13;
        }
LABEL_25:
        v3 = MI_READ_PTE_LOCK_FREE(v9);
        SystemRegionType = MiGetSystemRegionType(v15);
        if ( SystemRegionType == 5 )
          v8 = 3;
        else
          v8 = 2;
      }
      if ( (v3 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v9, v3);
      if ( v8 == 3 )
        MiSetNonPagedPoolNoSteal(v9, CurrentThread);
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v9);
      v27 = BugCheckParameter4;
      v3 = BugCheckParameter4;
      if ( (BugCheckParameter4 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v9, BugCheckParameter4);
      v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v27) >> 12) & 0xFFFFFFFFFFLL;
      if ( SystemRegionType == 12 )
        MiQueuePinDriverAddressLog((__int64)(v9 << 25) >> 16, v3, 1LL);
LABEL_13:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v5 > qword_140C65820 || ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
      }
      v2 = (PMDL)((char *)v2 + 8);
      v9 += 8LL;
      if ( (v9 & 0xFFF) != 0 )
      {
        if ( v8 == 1 )
          ++v5;
      }
      else
      {
        v8 = 0;
      }
      if ( v9 >= v11 )
        break;
      Process = 0xFFFFF68000000000uLL;
    }
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
