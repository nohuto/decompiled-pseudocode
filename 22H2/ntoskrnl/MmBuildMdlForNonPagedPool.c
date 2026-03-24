/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x140264870
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x140265610 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     VslpLockPagesForTransfer @ 0x1403939C8 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x140393B4C (VslpLockMdlForTransfer.c)
 *     HalpFlushMapBuffers @ 0x1404C89FC (HalpFlushMapBuffers.c)
 *     HvlGetCoverageData @ 0x1404F14D8 (HvlGetCoverageData.c)
 *     SmKmIssueVolumeIo @ 0x14059DEE4 (SmKmIssueVolumeIo.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MiCreateMdl @ 0x140701344 (MiCreateMdl.c)
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088E9FC (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CEC4 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409484A4 (EtwpBuildMdlForTraceBuffer.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiQueuePinDriverAddressLog @ 0x1403A3B54 (MiQueuePinDriverAddressLog.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x140544CC8 (MiSetNonPagedPoolNoSteal.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  __int64 MdlFlags; // r8
  unsigned __int64 StartVa; // rsi
  PMDL v3; // r15
  ULONG_PTR v4; // rbx
  char *v5; // rdx
  unsigned __int64 v7; // rdi
  int v8; // ebp
  ULONG_PTR v9; // rsi
  int v10; // r12d
  ULONG_PTR v11; // r13
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  int v14; // r10d
  __int64 v15; // r9
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // rdi
  int v23; // ebp
  __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  __int64 i; // rcx
  __int16 v30; // ax
  __int64 v31; // rax
  struct _LIST_ENTRY *v32; // rax
  __int64 v33; // rax
  char v34; // r8
  struct _LIST_ENTRY *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v39[2]; // [rsp+28h] [rbp-90h]
  unsigned __int64 v40; // [rsp+38h] [rbp-80h]
  unsigned __int64 v41; // [rsp+40h] [rbp-78h]
  _QWORD v42[2]; // [rsp+48h] [rbp-70h]
  unsigned __int64 v43; // [rsp+58h] [rbp-60h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  __int64 v45; // [rsp+68h] [rbp-50h]
  int SystemRegionType; // [rsp+C0h] [rbp+8h]
  __int64 v47; // [rsp+C8h] [rbp+10h] BYREF
  ULONG_PTR v48; // [rsp+D0h] [rbp+18h] BYREF
  ULONG_PTR v49; // [rsp+D8h] [rbp+20h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v3 = MemoryDescriptorList + 1;
  v4 = 0LL;
  v5 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v5;
  v48 = 0LL;
  v7 = -1LL;
  v8 = 0;
  v9 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  SystemRegionType = 0;
  v11 = v9 + 8 * ((((unsigned __int16)v5 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v49 = v11;
  if ( v9 < v11 )
  {
    v12 = 2048LL;
    do
    {
      v13 = 0xFFFFF6FB7DBED000uLL;
      if ( v8 )
      {
        if ( v8 < 2 )
          goto LABEL_5;
LABEL_20:
        if ( (v4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v9, v4);
        if ( v8 == 3 )
          MiSetNonPagedPoolNoSteal(v9, v13, MdlFlags, v12);
        BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v9);
        v48 = BugCheckParameter4;
        v22 = BugCheckParameter4;
        v4 = BugCheckParameter4;
        if ( (BugCheckParameter4 & 1) == 0 )
          KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v9, BugCheckParameter4);
        if ( (unsigned int)MiPteInShadowRange(&v48, v21) && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v48 >> 3) & 0x1FF)) & 0x20) != 0 )
                v22 |= 0x20uLL;
            }
          }
          v4 = v48;
        }
        v7 = (v22 >> 12) & 0xFFFFFFFFFLL;
        if ( v10 == 12 )
          MiQueuePinDriverAddressLog((__int64)(v9 << 25) >> 16, v4, 1LL);
      }
      else
      {
        v14 = 4;
        v15 = 4LL;
        v16 = (((unsigned __int64)((__int64)(v9 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v39[1] = v16;
        v40 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v17 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v41 = v17;
        v42[0] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        while ( 1 )
        {
          v18 = v39[v15--];
          --v14;
          v19 = *(_QWORD *)v18;
          if ( v18 >= 0xFFFFF6FB7DBED000uLL
            && v18 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v19 & 1) != 0
            && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
          {
            v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v32 )
            {
              v33 = *((_QWORD *)&v32->Flink + ((v18 >> 3) & 0x1FF));
              v34 = v19 | 0x20;
              if ( (v33 & 0x20) == 0 )
                v34 = v19;
              LOBYTE(v19) = v34;
              if ( (v33 & 0x42) != 0 )
                LOBYTE(v19) = v34 | 0x42;
            }
          }
          if ( (v19 & 1) == 0 )
            goto LABEL_18;
          if ( (v19 & 0x80u) != 0LL )
            break;
          if ( v15 == 1 )
            goto LABEL_18;
        }
        if ( !v14 )
        {
LABEL_18:
          v4 = MI_READ_PTE_LOCK_FREE(v9);
          SystemRegionType = MiGetSystemRegionType((__int64)(v9 << 25) >> 16);
          v10 = SystemRegionType;
          if ( SystemRegionType == 5 )
            v8 = 3;
          else
            v8 = 2;
          goto LABEL_20;
        }
        v45 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = 4;
        v43 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = 4LL;
        v42[1] = (((unsigned __int64)((__int64)(v9 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        do
        {
          v25 = v42[v24--];
          --v23;
          v26 = *(_QWORD *)v25;
          if ( v25 >= 0xFFFFF6FB7DBED000uLL
            && v25 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v26 & 1) != 0
            && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
          {
            v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v35 )
            {
              v36 = *((_QWORD *)&v35->Flink + ((v25 >> 3) & 0x1FF));
              v37 = v26 | 0x20;
              if ( (v36 & 0x20) == 0 )
                v37 = v26;
              v26 = v37;
              if ( (v36 & 0x42) != 0 )
                v26 = v37 | 0x42;
            }
          }
          v47 = v26;
        }
        while ( v24 && (v26 & 0x80u) == 0LL );
        v27 = MI_READ_PTE_LOCK_FREE(&v47);
        v11 = v49;
        v7 = (v27 >> 12) & 0xFFFFFFFFFLL;
        if ( v24 )
        {
          v28 = (unsigned __int64)((__int64)(v9 << 25) >> 16) >> 12;
          for ( i = 1LL; v23; --v23 )
          {
            v30 = v28;
            v28 >>= 9;
            v31 = i * (v30 & 0x1FF);
            i <<= 9;
            v7 += v31;
          }
        }
        v4 = v48;
        v8 = 1;
        v10 = SystemRegionType;
      }
      v12 = 2048LL;
LABEL_5:
      v3->Next = (struct _MDL *)v7;
      MdlFlags = (unsigned __int16)MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0 && (v7 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v7 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0) )
      {
        LOWORD(MdlFlags) = MdlFlags | 0x800;
        MemoryDescriptorList->MdlFlags = MdlFlags;
      }
      v3 = (PMDL)((char *)v3 + 8);
      v9 += 8LL;
      if ( (v9 & 0xFFF) != 0 )
      {
        if ( v8 == 1 )
          ++v7;
      }
      else
      {
        v8 = 0;
      }
    }
    while ( v9 < v11 );
  }
  MemoryDescriptorList->MdlFlags |= 4u;
}
