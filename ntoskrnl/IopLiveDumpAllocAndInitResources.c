/*
 * XREFs of IopLiveDumpAllocAndInitResources @ 0x1409495FC
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlClearAllBitsEx @ 0x1402D4520 (RtlClearAllBitsEx.c)
 *     VslIsSecureKernelRunning @ 0x140302F60 (VslIsSecureKernelRunning.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     IopGetPhysicalMemoryBlock @ 0x140392BD0 (IopGetPhysicalMemoryBlock.c)
 *     RtlSetAllBitsEx @ 0x1403AFA40 (RtlSetAllBitsEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1405579B4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x140557D58 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140949C84 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094A230 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x14094AC38 (IopLiveDumpAllocateIptBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094AE18 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpExcludeProtectedProcesses @ 0x14094B038 (IopLiveDumpExcludeProtectedProcesses.c)
 *     IopLiveDumpReleaseResources @ 0x14094BEA8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9811C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpResetCorralContext @ 0x140A99498 (IopLiveDumpResetCorralContext.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLiveDumpAllocAndInitResources(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  __int64 v3; // r14
  _DWORD *PhysicalMemoryBlock; // rax
  unsigned int v5; // r12d
  _QWORD *v6; // rsi
  int MappingResources; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 Pool2; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 i; // rbx
  unsigned int v25; // r15d
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ecx
  char v34; // al
  __int64 v35; // rax
  _DWORD *v37; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  char v39; // [rsp+48h] [rbp-C0h] BYREF
  bool v40; // [rsp+49h] [rbp-BFh] BYREF
  bool v41; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  _QWORD *v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  char *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  __int64 *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  __int64 *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  bool *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  __int64 *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  bool *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  __int64 *v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]

  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v38 = MillisecondCounter;
  *(_QWORD *)(a1 + 312) = a1;
  v3 = MillisecondCounter;
  IopLiveDumpResetCorralContext();
  PhysicalMemoryBlock = (_DWORD *)IopGetPhysicalMemoryBlock();
  v5 = 0;
  v37 = PhysicalMemoryBlock;
  v6 = PhysicalMemoryBlock;
  if ( PhysicalMemoryBlock )
  {
    v8 = *PhysicalMemoryBlock;
    if ( !v8 )
    {
      MappingResources = -1073741595;
      goto LABEL_46;
    }
    v9 = v6[2 * (unsigned int)(v8 - 1) + 2] + v6[2 * (unsigned int)(v8 - 1) + 3];
    *(_QWORD *)(a1 + 88) = v9;
    v10 = (((unsigned __int64)(v9 + 7) >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    Pool2 = ExAllocatePool2(64LL, (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( Pool2 )
    {
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
      {
        MappingResources = -1073741248;
        goto LABEL_46;
      }
      v12 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 584) = *(_QWORD *)(a1 + 592);
      *(_QWORD *)(a1 + 576) = v12;
      RtlSetAllBitsEx((_QWORD *)(a1 + 576));
      IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 592), (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL);
      if ( (*(_DWORD *)(a1 + 80) & 0x8000) != 0 && (*(_DWORD *)(a1 + 40) & 4) != 0 )
        IopLiveDumpExcludeProtectedProcesses(a1);
      if ( VslIsSecureKernelRunning() )
        v13 += 2 * v10;
      v14 = (v13 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v15 = ExAllocatePool2(64LL, v14, 1886217292LL);
      *(_QWORD *)(a1 + 560) = v15;
      if ( !v15 )
        goto LABEL_14;
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
      {
LABEL_16:
        MappingResources = -1073741248;
        goto LABEL_45;
      }
      v16 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 568) = v14;
      *(_QWORD *)(v16 + 8224) = v14;
      v17 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(v16 + 8240) = v17;
      *(_QWORD *)(a1 + 544) = v17;
      *(_QWORD *)(a1 + 552) = v16 + 8248;
      RtlClearAllBitsEx(a1 + 544);
      IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 560), *(_QWORD *)(a1 + 568));
      v18 = ExAllocatePool2(64LL, (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
      *(_QWORD *)(a1 + 648) = v18;
      if ( v18 )
      {
        if ( IopLiveDumpIsUnderMemoryPressure(a1) )
          goto LABEL_16;
        v19 = *(_QWORD *)(a1 + 88);
        *(_QWORD *)(a1 + 608) = *(_QWORD *)(a1 + 648);
        *(_QWORD *)(a1 + 600) = v19;
        IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 648), (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL);
        if ( VslIsSecureKernelRunning() )
        {
          *(_QWORD *)(a1 + 632) = v20;
          *(_QWORD *)(a1 + 640) = v10 + v16 + 8248;
          *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 624) = 2 * v10 + v16 + 8248;
        }
        else
        {
          *(_QWORD *)(a1 + 624) = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 616) = v20;
          v21 = *(_QWORD *)(a1 + 648);
          *(_QWORD *)(a1 + 632) = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 640) = v21;
        }
        v22 = ExAllocatePool2(64LL, (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL, 1886217292LL);
        *(_QWORD *)(a1 + 672) = v22;
        if ( v22 )
        {
          if ( IopLiveDumpIsUnderMemoryPressure(a1) )
            goto LABEL_16;
          v23 = *(_QWORD *)(a1 + 88);
          *(_QWORD *)(a1 + 664) = *(_QWORD *)(a1 + 672);
          *(_QWORD *)(a1 + 656) = v23;
          IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 672), (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL);
          for ( i = *(_QWORD *)(a1 + 56); i; i = *(_QWORD *)(i + 32) )
            IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(i + 16), *(unsigned int *)(i + 24));
          MappingResources = IopLiveDumpAllocateMappingResources(a1);
          if ( MappingResources < 0 )
            goto LABEL_45;
          if ( IopLiveDumpIsUnderMemoryPressure(a1) )
            goto LABEL_16;
          MappingResources = IopLiveDumpEstimateMemoryPages(a1);
          if ( MappingResources < 0 )
            goto LABEL_45;
          MappingResources = IopLiveDumpAllocateDumpBuffers(a1);
          if ( MappingResources >= 0 )
          {
            MappingResources = IopLiveDumpAllocateExtraBuffers(a1);
            if ( MappingResources >= 0 )
            {
              if ( !IptInterface || (MappingResources = IopLiveDumpAllocateIptBuffers(a1), MappingResources >= 0) )
                IopLiveDumpTraceBufferAllocation();
            }
          }
          v25 = KeNumberProcessors_0;
          v26 = (unsigned int)KeNumberProcessors_0;
          v27 = ExAllocatePool2(64LL, 8LL * (unsigned int)KeNumberProcessors_0, 1886217292LL);
          *(_QWORD *)(a1 + 1120) = v27;
          if ( v27 )
          {
            v28 = (unsigned int)BufferChunkSizeInPages;
            *(_DWORD *)(a1 + 1112) = v25;
            v29 = (8 * v28 + 4095) & 0xFFFFFFFFFFFFF000uLL;
            if ( v25 )
            {
              v30 = 0LL;
              while ( 1 )
              {
                *(_QWORD *)(v30 + *(_QWORD *)(a1 + 1120)) = ExAllocatePool2(64LL, v29, 1886217292LL);
                if ( !*(_QWORD *)(v30 + *(_QWORD *)(a1 + 1120)) )
                  break;
                ++v5;
                v30 += 8LL;
                if ( v5 >= v25 )
                  goto LABEL_41;
              }
            }
            else
            {
LABEL_41:
              v31 = ExAllocatePool2(64LL, v29, 1886217292LL);
              *(_QWORD *)(a1 + 1128) = v31;
              if ( v31 )
              {
                v32 = ExAllocatePool2(64LL, v29, 1886217292LL);
                *(_QWORD *)(a1 + 1136) = v32;
                if ( v32 )
                {
                  if ( !IopLiveDumpIsUnderMemoryPressure(a1) )
                  {
                    IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 1120), v29 * v26);
                    IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 1128), v29);
                    IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 1136), v29);
                    goto LABEL_45;
                  }
                  goto LABEL_16;
                }
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 1112) = 0;
          }
        }
      }
LABEL_14:
      MappingResources = -1073741670;
LABEL_45:
      v6 = v37;
      v3 = v38;
      goto LABEL_46;
    }
  }
  MappingResources = -1073741670;
LABEL_46:
  if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
  {
    v33 = *(_DWORD *)(a1 + 80);
    v47 = &v38;
    v37 = *(_DWORD **)(a1 + 680);
    v49 = &v37;
    v34 = *(_BYTE *)(a1 + 44) & 1;
    v38 = 0x1000000LL;
    v39 = v34;
    v51 = &v39;
    v42 = *(_QWORD *)(a1 + 696);
    v53 = &v42;
    v43 = *(_QWORD *)(a1 + 704);
    v55 = &v43;
    v40 = (v33 & 0x200) != 0;
    v41 = (v33 & 0x400) != 0;
    v57 = &v40;
    v44 = *(_QWORD *)(a1 + 1144);
    v59 = &v44;
    v61 = &v41;
    v48 = 8LL;
    v50 = 8LL;
    v52 = 1LL;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 1LL;
    v60 = 8LL;
    v62 = 1LL;
    v35 = IopLiveDumpGetMillisecondCounter(0);
    v64 = 8LL;
    v45 = v35 - v3;
    v63 = &v45;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C06280,
      (unsigned __int8 *)&byte_14002BC3F,
      (const GUID *)(a1 + 968),
      (const GUID *)(a1 + 952),
      0xBu,
      &v46);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( MappingResources < 0 )
    IopLiveDumpReleaseResources(a1);
  return (unsigned int)MappingResources;
}
