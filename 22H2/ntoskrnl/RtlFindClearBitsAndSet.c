/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1402509C0
 * Callers:
 *     MiGetUltraHugeAlreadyActive @ 0x1403975F0 (MiGetUltraHugeAlreadyActive.c)
 *     BgpFwReserveAllocate @ 0x14039C00C (BgpFwReserveAllocate.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403B6B00 (MiAssignSoftwareWsleRegion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B6D80 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404B6E18 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B6FF8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404B70CC (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpIommuAcquireNewDomain @ 0x1404CBA84 (HalpIommuAcquireNewDomain.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CD018 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1404CD0A4 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CD260 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x1404CD328 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     MiReserveFaultPte @ 0x14053AA1C (MiReserveFaultPte.c)
 *     SepAddLuidToIndexEntry @ 0x140603C6C (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14070F258 (SepGetLowBoxNumberEntry.c)
 *     MiReserveDriverPtes @ 0x14075F694 (MiReserveDriverPtes.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     PspStorageAllocSlot @ 0x1407906D8 (PspStorageAllocSlot.c)
 *     HalpIrtAllocateIndex @ 0x1408659D4 (HalpIrtAllocateIndex.c)
 *     MiAllocatePartitionId @ 0x1408C7AEC (MiAllocatePartitionId.c)
 *     TtmiCreateTerminal @ 0x1408FD57C (TtmiCreateTerminal.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14091B0D4 (RtlHotPatchSynchronizationRequired.c)
 *     RtlApplyHotPatch @ 0x1409B2884 (RtlApplyHotPatch.c)
 *     ViAllocateFromContiguousMemory @ 0x1409CD4DC (ViAllocateFromContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140A50B28 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140A684D4 (MiAssignSessionRanges.c)
 * Callees:
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v4; // esi
  _RTL_BITMAP *v6; // r13
  ULONG v7; // ebx
  unsigned int v8; // r9d
  unsigned int *Buffer; // r10
  int v10; // r12d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  unsigned int v20; // r8d
  bool v21; // cc
  ULONG v22; // ebx
  unsigned int v24; // r9d
  bool v25; // zf
  __int64 v26; // rax
  int v27; // r9d
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // r10
  int v31; // ecx
  char v32; // r9
  unsigned __int64 *v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // r9d
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // ecx
  unsigned __int64 *v39; // rdi
  __int64 v40; // rax
  ULONG v41; // r10d
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  unsigned int *v44; // [rsp+38h] [rbp-50h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  v6 = BitMapHeader;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v22 = v7 & 0xFFFFFFF8;
    goto LABEL_15;
  }
  Buffer = BitMapHeader->Buffer;
  v44 = Buffer;
  v10 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v8;
    v12 = v10 + v7;
    v13 = (char *)Buffer - (((unsigned __int8)v44 & 4) != 0LL ? 4 : 0);
    if ( v8 - v7 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v15 = (1LL << (v12 & 0x3F)) - 1;
      v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
      v17 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v12 >> 6)];
      v18 = *v17 | v15;
      if ( NumberToFind > 0x7F )
      {
        v30 = v16 + 8;
        if ( (v14 & 0x3F) == 0 )
          v30 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
        if ( !v18 )
        {
          v31 = 0;
          goto LABEL_43;
        }
        if ( *++v17 )
          goto LABEL_47;
        v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v18);
        if ( !v25 )
        {
          v31 = 63 - v37;
          goto LABEL_43;
        }
LABEL_81:
        v31 = 64;
LABEL_43:
        while ( 1 )
        {
          v20 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) - v31;
          if ( v20 > v14 )
            goto LABEL_18;
          v32 = NumberToFind - v31;
          v33 = &v17[(unsigned __int64)(NumberToFind - v31) >> 6];
          while ( ++v17 != v33 )
          {
            if ( *v17 )
              goto LABEL_47;
          }
          v35 = v32 & 0x3F;
          if ( !v35 )
            goto LABEL_12;
          v25 = !_BitScanForward64((unsigned __int64 *)&v36, *v17);
          if ( v25 )
            LODWORD(v36) = 64;
          if ( (unsigned int)v36 >= v35 )
            goto LABEL_12;
          do
          {
LABEL_47:
            if ( (unsigned __int64)v17 > v30 )
              goto LABEL_18;
            ++v17;
          }
          while ( *v17 );
          v25 = !_BitScanReverse64((unsigned __int64 *)&v34, *(v17 - 1));
          if ( v25 )
            goto LABEL_81;
          v31 = 63 - v34;
        }
      }
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v38 = 0;
          v39 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
          while ( v18 != -1 )
          {
LABEL_64:
            v25 = !_BitScanForward64((unsigned __int64 *)&v40, v18);
            if ( v25 )
              LODWORD(v40) = 64;
            if ( v38 + (int)v40 >= NumberToFind )
            {
              LODWORD(v42) = -v38;
LABEL_71:
              v20 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) + v42;
              v21 = v20 <= v14;
              goto LABEL_11;
            }
            v41 = NumberToFind;
            v42 = ~v18;
            while ( 1 )
            {
              v42 &= v42 >> (v41 >> 1);
              if ( !v42 )
                break;
              v41 -= v41 >> 1;
              if ( v41 <= 1 )
              {
                _BitScanForward64(&v42, v42);
                goto LABEL_71;
              }
            }
            if ( v17 == v39 )
              goto LABEL_18;
            v25 = !_BitScanReverse64((unsigned __int64 *)&v43, v18);
            if ( v25 )
              v38 = 64;
            else
              v38 = 63 - v43;
            v18 = *++v17;
          }
          while ( (unsigned __int64)++v17 <= v16 )
          {
            v18 = *v17;
            if ( *v17 != -1LL )
            {
              v38 = 0;
              goto LABEL_64;
            }
          }
        }
        else
        {
          while ( v18 == -1 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_18;
            v18 = *v17;
          }
          _BitScanForward64(&v19, ~v18);
          v20 = v19 + ((unsigned int)(((char *)v17 - v13) >> 3) << 6);
          v21 = v20 <= v14;
LABEL_11:
          if ( v21 )
          {
LABEL_12:
            if ( v20 != -1 )
              break;
            goto LABEL_19;
          }
        }
LABEL_18:
        v20 = -1;
LABEL_19:
        v4 = HintIndex;
        goto LABEL_20;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_18;
            v18 = *v17;
          }
          v25 = !_BitScanReverse64((unsigned __int64 *)&v26, v18);
          if ( v25 )
            v27 = 64;
          else
            v27 = 63 - v26;
          v20 = (((unsigned int)(((char *)v17 - v13) >> 3) + 1) << 6) - v27;
          if ( v20 > v14 )
            goto LABEL_18;
          v28 = NumberToFind - v27;
          if ( NumberToFind == v27 )
            goto LABEL_12;
          v18 = *++v17;
          if ( v28 >= 0x40 )
            break;
LABEL_35:
          v25 = !_BitScanForward64((unsigned __int64 *)&v29, v18);
          if ( v25 )
            LODWORD(v29) = 64;
          if ( (unsigned int)v29 >= v28 )
            goto LABEL_12;
        }
        if ( !*v17 )
        {
          v28 -= 64;
          if ( !v28 )
            goto LABEL_12;
          v18 = *++v17;
          goto LABEL_35;
        }
      }
    }
    v20 = -1;
LABEL_20:
    if ( !v7 )
      break;
    Buffer = v44;
    v24 = NumberToFind + v4;
    if ( NumberToFind + v4 > SizeOfBitMap )
      v24 = SizeOfBitMap;
    v8 = v24 - 1;
    v7 = 0;
  }
  v6 = BitMapHeader;
  v22 = v20 - v10;
  if ( v20 == -1 )
    v22 = -1;
LABEL_15:
  if ( v22 != -1 )
    RtlSetBits(v6, v22, NumberToFind);
  return v22;
}
