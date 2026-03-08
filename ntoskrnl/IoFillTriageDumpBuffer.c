/*
 * XREFs of IoFillTriageDumpBuffer @ 0x14054DAD0
 * Callers:
 *     IopCollectTriageDumpData @ 0x14054FEF0 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x140551A98 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     DbgkpTriageDumpFillHeaders @ 0x140939100 (DbgkpTriageDumpFillHeaders.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KiIsAddressRangeValid @ 0x1403849BC (KiIsAddressRangeValid.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x14054E304 (IoGetLoadedDriverInfo.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x14054FDC8 (IopAddRunTimeTriageDataBlocks.c)
 *     IopFillTriageDumpDataBlocks @ 0x140550CB8 (IopFillTriageDumpDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x140550E80 (IopGetMaxValidMemorySize.c)
 *     IopSizeTriageDumpDataBlocks @ 0x140551664 (IopSizeTriageDumpDataBlocks.c)
 *     IopWriteDriverList @ 0x140551C74 (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x140564CD0 (KdCopyDataBlock.c)
 *     MmWriteTriageInformation @ 0x14062E4BC (MmWriteTriageInformation.c)
 *     MmWriteUnloadedDriverInformation @ 0x14062E5D8 (MmWriteUnloadedDriverInformation.c)
 */

__int64 __fastcall IoFillTriageDumpBuffer(
        unsigned int a1,
        __int64 *a2,
        char a3,
        int a4,
        int *a5,
        __int64 a6,
        void *Src,
        int LoadedDriverInfo,
        int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13)
{
  int v13; // edi
  int v14; // esi
  __int16 v15; // r13
  char v16; // r14
  __int64 result; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // r15
  unsigned __int64 v23; // rcx
  unsigned int v24; // esi
  int v25; // ebp
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r14
  char *DpcStack; // rax
  char *v30; // r13
  unsigned __int64 v31; // rax
  unsigned int v32; // r14d
  int MaxValidMemorySize; // eax
  __int64 *v34; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char *v38; // rcx
  int v39; // edx
  int v40; // ecx
  unsigned int v41; // edx
  __int64 v42; // r12
  unsigned int v43; // r14d
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  void *v48; // r13
  __int64 v49; // rax
  __int64 v50; // rcx
  size_t v51; // r8
  __int64 v52; // rax
  int v53; // esi
  __int64 v54; // rax
  int v55[18]; // [rsp+30h] [rbp-48h] BYREF
  int v56; // [rsp+80h] [rbp+8h] BYREF
  char v57; // [rsp+90h] [rbp+18h]
  int v58; // [rsp+98h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v13 = a9;
  v14 = CmNtCSDVersion;
  v15 = a4;
  v55[0] = 0;
  v16 = a3;
  v56 = 0;
  LoadedDriverInfo = 0;
  if ( a13 )
    *a13 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a1 < 0x84 )
    return 3221225495LL;
  memset(a2, 0, 0x80uLL);
  v20 = a6;
  v21 = a1 + 0x2000;
  *((_DWORD *)a2 + 1) = a1 + 0x2000;
  v22 = a1 - 4;
  v23 = (unsigned int)v22;
  *((_DWORD *)a2 + 2) = v21 - 4;
  *(_DWORD *)((char *)a2 + v22) = 0;
  *(_DWORD *)a2 = v14;
  *((_DWORD *)a2 + 3) = 840;
  v24 = 8320;
  *((_DWORD *)a2 + 4) = 3840;
  *((_DWORD *)a2 + 16) = 0;
  v25 = (v20 != 0) + 130;
  *((_DWORD *)a2 + 17) = v13;
  if ( (v15 & 0x100) != 0 )
  {
    if ( (unsigned int)v22 <= 0x20D0 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 5) = 8320;
      v25 |= 0x100u;
      v24 = 8400;
    }
  }
  if ( (v15 & 4) != 0 )
  {
    if ( v24 + 48896 >= (unsigned int)v22 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 7) = v24;
      v25 |= 4u;
      v24 += 48896;
    }
  }
  if ( (v15 & 8) != 0 )
  {
    if ( v24 + 2944 >= (unsigned int)v22 )
    {
      v13 |= 0x100u;
      *((_DWORD *)a2 + 17) = v13;
    }
    else
    {
      *((_DWORD *)a2 + 8) = v24;
      v25 |= 8u;
      v24 += 2944;
    }
  }
  if ( (v15 & 0x10) != 0 )
  {
    if ( v24 + 2320 >= (unsigned int)v22 )
    {
      *((_DWORD *)a2 + 17) = v13 | 0x100;
    }
    else
    {
      *((_DWORD *)a2 + 9) = v24;
      v25 |= 0x10u;
      v24 += 2320;
    }
  }
  if ( (v15 & 0x20) != 0 )
  {
    if ( (*((_DWORD *)Src + 30) & 0x20000) != 0 )
    {
      v26 = *(_QWORD *)(v20 + 152);
      v27 = *((_QWORD *)Src + 6);
      v28 = *((_QWORD *)Src + 7);
      if ( v27 > v26 || v26 >= v28 )
      {
        v26 = *((_QWORD *)Src + 6);
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && Src != KeGetCurrentPrcb()->IdleThread )
        {
          DpcStack = (char *)KeGetPcr()->Prcb.DpcStack;
          v30 = DpcStack + 80;
          if ( KiIsAddressRangeValid((__int64)DpcStack, 80LL) )
          {
            v31 = *((_QWORD *)v30 - 2);
            v15 = v58;
            if ( v27 <= v31 && v31 < v28 )
              v26 = v31;
          }
          else
          {
            v15 = v58;
          }
        }
      }
      if ( v28 - v26 >= 0x7FFF )
        v32 = 0x7FFF;
      else
        v32 = v28 - v26;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v26, v32);
      v16 = v57;
      if ( MaxValidMemorySize )
      {
        if ( v24 + MaxValidMemorySize >= (unsigned int)v22 )
        {
          *((_DWORD *)a2 + 17) |= 0x100u;
        }
        else
        {
          *((_DWORD *)a2 + 10) = v24;
          v24 = (v24 + MaxValidMemorySize + 7) & 0xFFFFFFF8;
          *((_DWORD *)a2 + 11) = MaxValidMemorySize;
          v25 |= 0x20u;
          a2[9] = v26;
        }
      }
    }
    v23 = (unsigned int)v22;
  }
  if ( (v15 & 0x400) != 0 )
  {
    if ( (unsigned __int64)v24 + 928 >= v23 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 28) = v24;
      v24 = (v24 + 935) & 0xFFFFFFF8;
      *((_DWORD *)a2 + 29) = 928;
      v25 |= 0x400u;
    }
  }
  v34 = a2 - 1024;
  if ( !v16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  }
  v36 = MmUnloadedDrivers != 0LL ? 0xAF0 : 0;
  v37 = v24 + v36 + 8;
  if ( v37 >= (unsigned int)v22 )
  {
    *((_DWORD *)a2 + 17) |= 0x100u;
  }
  else
  {
    v25 |= 0x40u;
    *((_DWORD *)a2 + 6) = v24;
    v38 = (char *)v34 + v24;
    v24 = v37;
    MmWriteUnloadedDriverInformation(v38);
  }
  if ( (v15 & 0x40) != 0 )
  {
    LoadedDriverInfo = IoGetLoadedDriverInfo(v36, &v56, v55);
    if ( LoadedDriverInfo >= 0 && (v39 = v56, (v40 = 144 * v56) != 0) )
    {
      v16 = v57;
      if ( v24 + v40 >= (unsigned int)v22 )
      {
        *((_DWORD *)a2 + 17) |= 0x100u;
      }
      else
      {
        *((_DWORD *)a2 + 12) = v24;
        v25 |= 0x40u;
        v24 += v40;
        *((_DWORD *)a2 + 13) = v39;
      }
    }
    else
    {
      v16 = v57;
    }
  }
  v41 = (v55[0] + 7 + 6 * v56) & 0xFFFFFFF8;
  if ( v41 )
  {
    if ( v24 + v41 >= (unsigned int)v22 )
    {
      *((_DWORD *)a2 + 17) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a2 + 14) = v24;
      v24 += v41;
      *((_DWORD *)a2 + 15) = v41;
    }
  }
  if ( *((_DWORD *)a2 + 12) )
  {
    if ( *((_DWORD *)a2 + 14) )
    {
      LoadedDriverInfo = IopWriteDriverList(a2 - 1024);
      if ( LoadedDriverInfo < 0 )
        *((_DWORD *)a2 + 12) = 0;
    }
  }
  if ( !v16 )
  {
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v42 = a11;
  v43 = a10;
  if ( (v15 & 0x800) != 0 )
  {
    IopAddRunTimeTriageDataBlocks(a10, a11, a12, a6, a2[9], a2[9] + *((unsigned int *)a2 + 11));
    v24 = (IopSizeTriageDumpDataBlocks((_DWORD)a2, v43, v42, v24, v22) + 7) & 0xFFFFFFF8;
    if ( *((_DWORD *)a2 + 31) )
      v25 |= 0x800u;
  }
  v44 = *((unsigned int *)a2 + 5);
  if ( (_DWORD)v44 )
    MmWriteTriageInformation((char *)v34 + v44);
  v45 = *((unsigned int *)a2 + 7);
  v46 = (unsigned int)v22;
  if ( (_DWORD)v45 && v45 + 48896 <= (unsigned __int64)(unsigned int)v22 )
  {
    memmove((char *)v34 + (unsigned int)v45, KeGetCurrentPrcb(), 0xBF00uLL);
    v46 = (unsigned int)v22;
  }
  v47 = *((unsigned int *)a2 + 8);
  v48 = Src;
  if ( (_DWORD)v47 && v47 + 2944 <= v46 )
    memmove((char *)v34 + (unsigned int)v47, *((const void **)Src + 23), 0xB80uLL);
  v49 = *((unsigned int *)a2 + 9);
  if ( (_DWORD)v49 )
  {
    v46 = (unsigned int)v22;
    if ( v49 + 2320 <= (unsigned __int64)(unsigned int)v22 )
      memmove((char *)v34 + (unsigned int)v49, v48, 0x910uLL);
  }
  v50 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v50 )
  {
    v51 = *((unsigned int *)a2 + 11);
    v46 = a2[9];
    if ( (int)v50 + (int)v51 <= (unsigned int)v22 )
      memmove((char *)v34 + v50, (const void *)v46, v51);
  }
  v52 = *((unsigned int *)a2 + 28);
  if ( (_DWORD)v52 && v52 + 928 <= (unsigned __int64)(unsigned int)v22 )
    KdCopyDataBlock((char *)v34 + (unsigned int)v52, v46);
  if ( v43 )
    IopFillTriageDumpDataBlocks(a2, v43, v42, a2 - 1024);
  if ( (_DWORD)v22 != 253948 || a13 )
  {
    v53 = v24 + 4;
    if ( a13 )
      *a13 = v53 - 0x2000;
  }
  else
  {
    v53 = 0x40000;
  }
  if ( a5 )
    *a5 = v25;
  v54 = (unsigned int)(v53 - 4);
  *((_DWORD *)a2 + 1) = v53;
  *((_DWORD *)a2 + 2) = v54;
  if ( v54 - 0x2000 > (unsigned __int64)(unsigned int)v22 )
    return 3221225626LL;
  result = (unsigned int)LoadedDriverInfo;
  *(_DWORD *)((char *)a2 + (unsigned int)(v53 - 4) - 0x2000) = 1145524820;
  return result;
}
