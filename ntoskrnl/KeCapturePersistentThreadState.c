/*
 * XREFs of KeCapturePersistentThreadState @ 0x140551EC0
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x1409388FC (DbgkpWerCaptureLiveTriageDump.c)
 *     LkmdTelCreateReport @ 0x140A73E94 (LkmdTelCreateReport.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     RtlGetNtProductType @ 0x140303E90 (RtlGetNtProductType.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140392344 (SecureDump_GetSecureDumpSettings.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x14054E304 (IoGetLoadedDriverInfo.c)
 *     IopAddCodeRegion @ 0x14054F968 (IopAddCodeRegion.c)
 *     IopValidateSectionSize @ 0x140551A64 (IopValidateSectionSize.c)
 *     IopWriteDriverList @ 0x140551C74 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x140564CD0 (KdCopyDataBlock.c)
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
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  _DWORD *v15; // r10
  __int64 v16; // r9
  __int64 v17; // r8
  ULONG ActiveProcessorCount; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // esi
  _OWORD *v22; // rcx
  int v23; // eax
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  size_t v29; // r8
  int v30; // esi
  __int64 v31; // rcx
  size_t v32; // r8
  int v33; // esi
  const void *StackLimit; // rax
  void *StackBase; // rdi
  const void *v36; // r14
  unsigned int v37; // edi
  unsigned int i; // r15d
  int v39; // edi
  size_t v40; // r8
  struct _KTHREAD *v41; // rax
  unsigned int v42; // edi
  __int64 v43; // rcx
  int v44; // r14d
  unsigned int v45; // r15d
  __int64 v46; // rdx
  int v47; // eax
  __int64 result; // rax
  int v49; // [rsp+20h] [rbp-20h] BYREF
  __int64 v50; // [rsp+28h] [rbp-18h] BYREF
  int v51; // [rsp+30h] [rbp-10h]

  v8 = Size;
  v50 = 0LL;
  v51 = 0;
  CurrentThread = a2;
  if ( !Size )
    return 0LL;
  if ( !a2 )
    CurrentThread = KeGetCurrentThread();
  if ( ForceDumpDisabled || !AllowCrashDump || (int)SecureDump_GetSecureDumpSettings((__int64)&v50) < 0 || (_BYTE)v50 )
    return 0LL;
  memset((void *)(v8 + 4), 0, 0x3FFFCuLL);
  v13 = (char *)v8;
  if ( (v8 & 4) != 0 )
  {
    v13 = (char *)(v8 + 4);
    v14 = 1023LL;
    v15 = (_DWORD *)(v8 + 4);
    v16 = 1LL;
    v17 = 8184LL;
  }
  else
  {
    v15 = (_DWORD *)(v8 + 4);
    v14 = 1024LL;
    v16 = 0LL;
    v17 = 8188LL;
  }
  memset64(v13, 0x4547415045474150uLL, v14);
  if ( v16 )
    *(_DWORD *)&v13[v17] = 1162297680;
  *(_DWORD *)v8 = 1162297680;
  *v15 = 875976004;
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
  RtlGetNtProductType((_DWORD *)(v8 + 4160), v19);
  v20 = 9LL;
  *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
  v21 = 8320;
  v22 = (_OWORD *)a1;
  *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
  *(_DWORD *)(v8 + 8260) = 0;
  v23 = CmNtCSDVersion;
  *(_DWORD *)(v8 + 8256) = 0;
  *(_DWORD *)(v8 + 0x2000) = v23;
  v24 = (_OWORD *)(v8 + 840);
  *(_DWORD *)(v8 + 8196) = 0x40000;
  *(_DWORD *)(v8 + 8208) = 3840;
  *(_DWORD *)(v8 + 4152) |= 1u;
  *(_DWORD *)(v8 + 8204) = 840;
  do
  {
    *v24 = *v22;
    v24[1] = v22[1];
    v24[2] = v22[2];
    v24[3] = v22[3];
    v24[4] = v22[4];
    v24[5] = v22[5];
    v24[6] = v22[6];
    v24 += 8;
    v25 = v22[7];
    v22 += 8;
    *(v24 - 1) = v25;
    --v20;
  }
  while ( v20 );
  v26 = *v22;
  LODWORD(Size) = 928;
  *v24 = v26;
  v24[1] = v22[1];
  v24[2] = v22[2];
  v24[3] = v22[3];
  v24[4] = v22[4];
  if ( IopValidateSectionSize(0x2080u, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x400u;
    *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
    *(_DWORD *)(v8 + 8304) = 8320;
    *(_DWORD *)(v8 + 8308) = 928;
    KdCopyDataBlock(v8 + 8320, v27);
    v21 = 9248;
  }
  LODWORD(Size) = 48896;
  if ( IopValidateSectionSize(v21, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 4u;
    *(_DWORD *)(v8 + 8220) = v21;
    memmove((void *)(v8 + v21), KeGetCurrentPrcb(), (unsigned int)Size);
    v21 += Size;
  }
  LODWORD(Size) = 2944;
  if ( IopValidateSectionSize((v21 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 8u;
    v29 = (unsigned int)Size;
    v30 = v28;
    *(_DWORD *)(v8 + 8224) = v28;
    memmove((void *)(v8 + v28), CurrentThread->ApcState.Process, v29);
    v21 = Size + v30;
  }
  LODWORD(Size) = 2320;
  if ( IopValidateSectionSize((v21 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
  {
    *(_DWORD *)(v8 + 4152) |= 0x10u;
    v32 = (unsigned int)Size;
    v33 = v31;
    *(_DWORD *)(v8 + 8228) = v31;
    memmove((void *)(v8 + v31), CurrentThread, v32);
    v21 = Size + v33;
  }
  if ( CurrentThread == KeGetCurrentThread() && (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
  {
    StackLimit = CurrentThread->StackLimit;
    StackBase = CurrentThread->StackBase;
    v36 = *(const void **)(a1 + 152);
    if ( (StackLimit > v36 || StackBase <= v36) && (v36 = StackLimit, StackBase <= StackLimit) )
      v37 = 0;
    else
      v37 = (_DWORD)StackBase - (_DWORD)v36;
    if ( v37 >= 0x7FFF )
      v37 = 0x7FFF;
    for ( i = 0; i < v37; ++i )
    {
      if ( !MmIsAddressValidEx((__int64)v36 + i) )
        break;
    }
    LODWORD(Size) = i;
    if ( i )
    {
      if ( !IopValidateSectionSize(v21, (unsigned int *)&Size) )
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      *(_DWORD *)(v8 + 4152) |= 0x20u;
      v39 = Size;
      v40 = (unsigned int)Size;
      *(_DWORD *)(v8 + 8232) = v21;
      *(_DWORD *)(v8 + 8236) = v39;
      *(_QWORD *)(v8 + 8264) = v36;
      memmove((void *)(v8 + v21), v36, v40);
      v21 += v39;
    }
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    v41 = KeGetCurrentThread();
    LODWORD(Size) = 0;
    v49 = 0;
    v42 = (v21 + 7) & 0xFFFFFFF8;
    --v41->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    if ( (int)IoGetLoadedDriverInfo(v43, &Size, &v49) >= 0 )
    {
      v44 = Size;
      LODWORD(Size) = 144 * Size;
      if ( (_DWORD)Size
        && IopValidateSectionSize(v42, (unsigned int *)&Size)
        && (v45 = v42 + Size, LODWORD(Size) = (v49 + 7 + 6 * v44) & 0xFFFFFFF8, (_DWORD)Size)
        && IopValidateSectionSize(v45, (unsigned int *)&Size) )
      {
        if ( (int)IopWriteDriverList(v8, v46, v42, v45) >= 0 )
        {
          *(_DWORD *)(v8 + 4152) |= 0x40u;
          v47 = Size;
          *(_DWORD *)(v8 + 8240) = v42;
          *(_DWORD *)(v8 + 8244) = v44;
          *(_DWORD *)(v8 + 8248) = v45;
          v21 = v45 + v47;
          *(_DWORD *)(v8 + 8252) = v47;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 8260) |= 0x100u;
      }
      IopAddCodeRegion(a1, v21, (_DWORD *)v8);
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(v8 + 8200) = 262140;
  result = 0x40000LL;
  *(_DWORD *)(v8 + 262140) = 1145524820;
  return result;
}
