/*
 * XREFs of KeCapturePersistentThreadState @ 0x140504CC0
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x140888F78 (DbgkpWerCaptureLiveTriageDump.c)
 *     LkmdTelCreateReport @ 0x140982E28 (LkmdTelCreateReport.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlGetNtProductType @ 0x14031B310 (RtlGetNtProductType.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1403BFB80 (SecureDump_GetSecureDumpSettings.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x1405020DC (IoGetLoadedDriverInfo.c)
 *     IopGetMaxValidSectionSize @ 0x140503EB8 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140503F00 (IopGetMaxValidSectionSizeDown.c)
 *     IopValidateSectionSize @ 0x1405047E8 (IopValidateSectionSize.c)
 *     IopWriteDriverList @ 0x140504A6C (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x140510688 (KdCopyDataBlock.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  void *v13; // r8
  unsigned __int64 v14; // rdx
  ULONG ActiveProcessorCount; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int v18; // esi
  _OWORD *v19; // rcx
  int v20; // eax
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  size_t v26; // r8
  int v27; // esi
  __int64 v28; // rcx
  size_t v29; // r8
  int v30; // esi
  const void *StackLimit; // rcx
  void *StackBase; // rax
  const void *v33; // r14
  unsigned int v34; // eax
  int v35; // edi
  size_t v36; // r8
  struct _KTHREAD *v37; // rax
  unsigned int v38; // edi
  int v39; // r14d
  unsigned int v40; // r15d
  int v41; // eax
  __int64 v42; // r14
  unsigned int v43; // edi
  unsigned int MaxValidSectionSizeDown; // eax
  const void *v45; // rsi
  unsigned int MaxValidSectionSize; // eax
  __int64 v47; // rcx
  __int64 result; // rax
  int v49; // [rsp+20h] [rbp-20h] BYREF
  int v50; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v51; // [rsp+28h] [rbp-18h] BYREF
  int v52; // [rsp+30h] [rbp-10h]

  v8 = Size;
  v51 = 0LL;
  v52 = 0;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( ForceDumpDisabled || (int)SecureDump_GetSecureDumpSettings((__int64)&v51) < 0 || (_BYTE)v51 )
    return 0LL;
  memset((void *)(v8 + 8), 0, 0x3FFF8uLL);
  v13 = (void *)v8;
  v14 = 2048LL;
  if ( (v8 & 4) != 0 )
  {
    v14 = 2047LL;
    v13 = (void *)(v8 + 4);
  }
  memset64(v13, 0x4547415045474150uLL, v14 >> 1);
  if ( (v14 & 1) != 0 )
    *((_DWORD *)v13 + v14 - 1) = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *(_DWORD *)(v8 + 4) = 875976004;
  *(_DWORD *)(v8 + 12) = (unsigned __int16)NtBuildNumber;
  *(_DWORD *)(v8 + 8) = (unsigned int)NtBuildNumber >> 28;
  *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v8 + 24) = MmPfnDatabase;
  *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
  *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
  *(_DWORD *)(v8 + 48) = 34404;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_QWORD *)(v8 + 3848) = 0LL;
  *(_DWORD *)(v8 + 3864) = 0;
  *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
  *(_QWORD *)(v8 + 72) = a5;
  *(_QWORD *)(v8 + 80) = a6;
  *(_QWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 56) = a3;
  *(_QWORD *)(v8 + 64) = a4;
  *(_DWORD *)(v8 + 3840) = -2147483645;
  *(_DWORD *)(v8 + 3844) = 1;
  *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(v8 + 4000) = 0x40000LL;
  *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
  *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(v8 + 4148) = MEMORY[0xFFFFF7800000000C];
  *(_DWORD *)(v8 + 3992) = 4;
  *(_DWORD *)(v8 + 4152) = 130;
  *(_DWORD *)(v8 + 4176) = 24;
  RtlGetNtProductType((_DWORD *)(v8 + 4160), v16);
  v17 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v18 = 8320;
  v19 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v20 = CmNtCSDVersion;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v20;
  v21 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v21 = *v19;
    v21[1] = v19[1];
    v21[2] = v19[2];
    v21[3] = v19[3];
    v21[4] = v19[4];
    v21[5] = v19[5];
    v21[6] = v19[6];
    v21 += 8;
    v22 = v19[7];
    v19 += 8;
    *(v21 - 1) = v22;
    --v17;
  }
  while ( v17 );
  v23 = *v19;
  LODWORD(Size) = 896;
  *v21 = v23;
  v21[1] = v19[1];
  v21[2] = v19[2];
  v21[3] = v19[3];
  v21[4] = v19[4];
  if ( IopValidateSectionSize(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 896;
    KdCopyDataBlock(v8 + 8320, v24);
    v18 = 9216;
  }
  LODWORD(Size) = 44800;
  if ( IopValidateSectionSize(v18, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    *(_DWORD *)(v8 + 8220) = v18;
    memmove((void *)(v8 + v18), KeGetCurrentPrcb(), (unsigned int)Size);
    v18 += Size;
  }
  LODWORD(Size) = 2624;
  if ( IopValidateSectionSize((v18 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v26 = (unsigned int)Size;
    v27 = v25;
    *(_DWORD *)(v8 + 8224) = v25;
    memmove((void *)(v8 + v25), CurrentThread->ApcState.Process, v26);
    v18 = Size + v27;
  }
  LODWORD(Size) = 2200;
  if ( IopValidateSectionSize((v18 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v29 = (unsigned int)Size;
    v30 = v28;
    *(_DWORD *)(v8 + 8228) = v28;
    memmove((void *)(v8 + v28), CurrentThread, v29);
    v18 = Size + v30;
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    v33 = *(const void **)(a1 + 152);
    if ( (StackLimit > v33 || v33 >= StackBase) && (v33 = StackLimit, StackBase <= StackLimit) )
      v34 = 0;
    else
      v34 = (_DWORD)StackBase - (_DWORD)v33;
    if ( v34 >= 0x7FFF )
      v34 = 0x7FFF;
    LODWORD(Size) = IopGetMaxValidSectionSize((__int64)v33, v34);
    if ( (_DWORD)Size )
    {
      if ( !IopValidateSectionSize(v18, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v35 = Size;
      v36 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v18;
      *(_DWORD *)(v8 + 8236) = v35;
      *(_QWORD *)(v8 + 8264) = v33;
      memmove((void *)(v8 + v18), v33, v36);
      v18 += v35;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v37 = KeGetCurrentThread();
    v49 = 0;
    v38 = (v18 + 7) & 0xFFFFFFF8;
    v50 = 0;
    --v37->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(0, &v49, &v50) >= 0 )
    {
      v39 = v49;
      LODWORD(Size) = 144 * v49;
      if ( 144 * v49 && IopValidateSectionSize(v38, (unsigned int *)&Size) )
      {
        v40 = v38 + Size;
        LODWORD(Size) = (v50 + 7 + 6 * v39) & 0xFFFFFFF8;
        if ( (_DWORD)Size && IopValidateSectionSize(v40, (unsigned int *)&Size) )
        {
          if ( (int)IopWriteDriverList(v8, 0, v38, v40) >= 0 )
          {
            *(_DWORD *)(v8 + 4152) |= 0x40u;
            v41 = Size;
            *(_DWORD *)(v8 + 8240) = v38;
            *(_DWORD *)(v8 + 8244) = v39;
            *(_DWORD *)(v8 + 8248) = v40;
            v18 = v40 + v41;
            *(_DWORD *)(v8 + 8252) = v41;
          }
        }
        else
        {
          *(_DWORD *)(v8 + 8260) |= 0x100u;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  LODWORD(Size) = 4112;
  v42 = (v18 + 7) & 0xFFFFFFF8;
  IopValidateSectionSize((v18 + 7) & 0xFFFFFFF8, (unsigned int *)&Size);
  if ( (unsigned int)Size > 0x10 )
  {
    v43 = Size - 16;
    MaxValidSectionSizeDown = IopGetMaxValidSectionSizeDown(*(_QWORD *)(a1 + 248), (unsigned int)(Size - 16) >> 1);
    if ( MaxValidSectionSizeDown )
    {
      v45 = (const void *)(*(_QWORD *)(a1 + 248) - MaxValidSectionSizeDown + 1LL);
      MaxValidSectionSize = IopGetMaxValidSectionSize((__int64)v45, v43);
      if ( MaxValidSectionSize )
      {
        *(_DWORD *)(v8 + 4152) |= 0x800u;
        *(_DWORD *)(v8 + 8312) = v42;
        v47 = ((_DWORD)v42 + 23) & 0xFFFFFFF8;
        *(_DWORD *)(v8 + 8316) = 1;
        *(_DWORD *)(v42 + v8 + 8) = v47;
        *(_QWORD *)(v42 + v8) = v45;
        *(_DWORD *)(v42 + v8 + 12) = MaxValidSectionSize;
        memmove((void *)(v8 + v47), v45, MaxValidSectionSize);
      }
    }
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
