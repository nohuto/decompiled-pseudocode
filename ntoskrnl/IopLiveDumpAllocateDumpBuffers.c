/*
 * XREFs of IopLiveDumpAllocateDumpBuffers @ 0x140949C84
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1405579B4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTraceEstimatedAndAllocatedPageCount @ 0x1405586DC (IopLiveDumpTraceEstimatedAndAllocatedPageCount.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x14094A574 (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094A8B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14094B0B8 (IopLiveDumpFreeDumpBuffers.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateDumpBuffers(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 MillisecondCounter; // rax
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // r8d
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 Pool2; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // esi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 IndependentPages; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  unsigned int v38; // esi
  int v39; // r15d
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r10
  __int64 v53; // rcx
  __int64 v55; // [rsp+30h] [rbp-48h]
  __int64 v56; // [rsp+38h] [rbp-40h]
  unsigned __int64 v57; // [rsp+40h] [rbp-38h]
  __int64 v58; // [rsp+48h] [rbp-30h]
  __int64 v59; // [rsp+50h] [rbp-28h]
  unsigned __int64 v60; // [rsp+58h] [rbp-20h]
  __int64 v61; // [rsp+60h] [rbp-18h]
  unsigned __int64 v62; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v63; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v64; // [rsp+C8h] [rbp+50h] BYREF
  unsigned __int64 v65; // [rsp+D0h] [rbp+58h]
  __int64 v66; // [rsp+D8h] [rbp+60h] BYREF

  v1 = 0LL;
  v59 = 0LL;
  v56 = 0LL;
  v3 = 0LL;
  v58 = 0LL;
  v4 = 0LL;
  v55 = 0LL;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v6 = (unsigned int)BufferChunkSizeInPages;
  v61 = MillisecondCounter;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  v7 = ~(v6 - 1);
  v8 = *(_QWORD *)(a1 + 120);
  v9 = v7 & (v6 + *(_QWORD *)(a1 + 96) - 1LL);
  v10 = v7 & (v6 + *(_QWORD *)(a1 + 104) - 1LL);
  *(_QWORD *)(a1 + 96) = v9;
  *(_QWORD *)(a1 + 104) = v10;
  v11 = v7 & (v6 + v8 - 1);
  *(_QWORD *)(a1 + 120) = v11;
  v12 = v9 / v6;
  v62 = v9 / v6;
  v65 = v9 / v6;
  v13 = v7 & (v6 + *(_QWORD *)(a1 + 128) - 1LL);
  *(_QWORD *)(a1 + 128) = v13;
  v14 = v13 / v6;
  v15 = v11;
  v16 = *(_DWORD *)(a1 + 80);
  v17 = v15 / v6 + v14;
  v18 = v17 + v12;
  v57 = v17;
  v60 = v18;
  if ( (v16 & 0x200) != 0 )
  {
    v19 = ((*(_QWORD *)(a1 + 1144) & 0xFFFLL) != 0) + (*(_QWORD *)(a1 + 1144) >> 12);
    if ( v18 * (unsigned int)v6 > v19 )
    {
      *(_DWORD *)(a1 + 80) = v16 | 0x400;
      v18 = (v7 & v19) / v6;
      v60 = v18;
    }
  }
  v20 = (8 * v18 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  Pool2 = ExAllocatePool2(64LL, v20, 1886217292LL);
  *(_QWORD *)(a1 + 752) = Pool2;
  if ( !Pool2 )
    goto LABEL_42;
  v22 = ExAllocatePool2(64LL, v20, 1886217292LL);
  *(_QWORD *)(a1 + 760) = v22;
  if ( !v22 )
    goto LABEL_42;
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 752), v20);
  IopLiveDumpDiscardVirtualAddressRange(a1, *(_QWORD *)(a1 + 760), v20);
  v23 = v65;
  v24 = 1;
  v64 = 0LL;
  v25 = 0LL;
  if ( v65 )
  {
    do
    {
      v66 = 0LL;
      v26 = v25;
      switch ( v24 )
      {
        case 1:
          if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
          {
            IopLiveDumpAllocateFromIOSpace(a1, *(_QWORD *)(a1 + 1104), v23 - v25, &v64);
            v25 = v64;
            v24 = 2;
            v59 += v64 - v26;
            goto LABEL_12;
          }
          v24 = 2;
          break;
        case 2:
          if ( (*(_DWORD *)(a1 + 80) & 4) == 0 )
          {
            v28 = IopLiveDumpAllocateFromVMMemoryPartition(a1, (unsigned int)BufferChunkSizeInBytes, &v66);
            if ( v28 )
            {
              v29 = (unsigned int)BufferChunkSizeInPages;
              ++v56;
              v3 += (unsigned int)BufferChunkSizeInPages;
              v30 = (unsigned int)BufferChunkSizeInBytes;
              *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v25) = v28;
              v31 = *(_QWORD *)(a1 + 760);
              *(_QWORD *)(a1 + 680) += v29;
              v32 = v66;
              ++*(_QWORD *)(a1 + 744);
              *(_QWORD *)(v31 + 8 * v25++) = v32;
              v64 = v25;
              IopLiveDumpDiscardVirtualAddressRange(a1, v28, v30);
            }
            else
            {
              v24 = 3;
            }
            goto LABEL_25;
          }
          v24 = 3;
          break;
        case 3:
          if ( (*(_DWORD *)(a1 + 80) & 0x800) != 0 )
          {
            IopLiveDumpAllocateFromIOSpace(a1, 0LL, v23 - v25, &v64);
            v25 = v64;
            v24 = 4;
            v58 += v64 - v26;
LABEL_12:
            v3 += (unsigned int)BufferChunkSizeInPages * (v25 - v26);
LABEL_25:
            v23 = v65;
            v27 = v65;
            continue;
          }
          v24 = 4;
          break;
        default:
          IndependentPages = MmAllocateIndependentPagesEx((unsigned int)BufferChunkSizeInBytes, -1, 0LL, 0);
          if ( !IndependentPages )
            goto LABEL_27;
          v34 = (unsigned int)BufferChunkSizeInPages;
          v35 = (unsigned int)BufferChunkSizeInBytes;
          v3 += (unsigned int)BufferChunkSizeInPages;
          ++v55;
          *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v25) = IndependentPages;
          v36 = *(_QWORD *)(a1 + 760);
          *(_QWORD *)(a1 + 680) += v34;
          ++*(_QWORD *)(a1 + 744);
          *(_QWORD *)(v36 + 8 * v25++) = 0LL;
          v64 = v25;
          IopLiveDumpDiscardVirtualAddressRange(a1, IndependentPages, v35);
          if ( IopLiveDumpIsUnderMemoryPressure(a1) )
          {
LABEL_33:
            *(_DWORD *)(a1 + 80) |= 0x1000u;
            v38 = -1073741248;
            goto LABEL_43;
          }
          goto LABEL_25;
      }
      v27 = v62;
    }
    while ( v25 < v27 );
  }
LABEL_27:
  if ( *(_QWORD *)(a1 + 680) >= *(_QWORD *)(a1 + 104) )
  {
    v37 = v57;
    *(_QWORD *)(a1 + 216) = v25;
    v38 = 0;
    v63 = 0LL;
    v39 = 2;
    if ( v57 )
    {
      v40 = 8 * v25;
      while ( 1 )
      {
        v66 = 0LL;
        if ( v39 != 2 )
          break;
        if ( (*(_DWORD *)(a1 + 80) & 4) != 0 )
        {
          v39 = 4;
        }
        else
        {
          v41 = IopLiveDumpAllocateFromVMMemoryPartition(a1, (unsigned int)BufferChunkSizeInBytes, &v66);
          if ( v41 )
          {
            ++v56;
            v42 = (unsigned int)BufferChunkSizeInBytes;
            *(_QWORD *)(v40 + *(_QWORD *)(a1 + 752)) = v41;
            v43 = *(_QWORD *)(a1 + 760);
            *(_QWORD *)(a1 + 680) += (unsigned int)BufferChunkSizeInPages;
            v44 = v66;
            ++*(_QWORD *)(a1 + 744);
            *(_QWORD *)(v40 + v43) = v44;
            v40 += 8LL;
            IopLiveDumpDiscardVirtualAddressRange(a1, v41, v42);
LABEL_39:
            v37 = v57;
            ++v63;
            v4 += (unsigned int)BufferChunkSizeInPages;
            goto LABEL_40;
          }
          v37 = v57;
          v39 = 4;
        }
LABEL_40:
        if ( v63 >= v37 )
          goto LABEL_44;
      }
      v45 = MmAllocateIndependentPagesEx((unsigned int)BufferChunkSizeInBytes, -1, 0LL, 0);
      if ( !v45 )
        goto LABEL_44;
      v46 = (unsigned int)BufferChunkSizeInBytes;
      ++v55;
      *(_QWORD *)(v40 + *(_QWORD *)(a1 + 752)) = v45;
      *(_QWORD *)(a1 + 680) += (unsigned int)BufferChunkSizeInPages;
      v47 = *(_QWORD *)(a1 + 760);
      ++*(_QWORD *)(a1 + 744);
      *(_QWORD *)(v40 + v47) = 0LL;
      v40 += 8LL;
      IopLiveDumpDiscardVirtualAddressRange(a1, v45, v46);
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
        goto LABEL_33;
      goto LABEL_39;
    }
  }
  else
  {
LABEL_42:
    v38 = -1073741670;
LABEL_43:
    IopLiveDumpFreeDumpBuffers(a1);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
LABEL_44:
  if ( v3 < *(_QWORD *)(a1 + 104) )
    v3 = 0LL;
  *(_QWORD *)(a1 + 688) = v3;
  if ( v4 )
  {
    v48 = v4;
    if ( v4 > *(_QWORD *)(a1 + 120) )
      v48 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 696) = v48;
    v49 = v4 - v48;
    if ( v49 )
    {
      v1 = *(_QWORD *)(a1 + 128);
      if ( v49 <= v1 )
        v1 = v49;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  *(_QWORD *)(a1 + 704) = v1;
  v50 = IopLiveDumpGetMillisecondCounter(0);
  v51 = (unsigned int)BufferChunkSizeInPages;
  v52 = v55 * (unsigned int)BufferChunkSizeInPages;
  v53 = (unsigned int)BufferChunkSizeInPages;
  *(_QWORD *)(a1 + 768) = v50 - v61;
  IopLiveDumpTraceEstimatedAndAllocatedPageCount(
    a1,
    v60 * v51,
    v59 * (unsigned int)v51,
    v56 * (unsigned int)v51,
    v58 * v53,
    v52);
  return v38;
}
