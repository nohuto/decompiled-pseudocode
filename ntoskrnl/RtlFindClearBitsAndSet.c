/*
 * XREFs of RtlFindClearBitsAndSet @ 0x14030CEE0
 * Callers:
 *     BgpFwReserveAllocate @ 0x140384344 (BgpFwReserveAllocate.c)
 *     MiAssignSoftwareWsleRegion @ 0x14039751C (MiAssignSoftwareWsleRegion.c)
 *     HalpIommuGetDomainId @ 0x1403A4310 (HalpIommuGetDomainId.c)
 *     MiGetUltraHugeAlreadyActive @ 0x1403BA8F4 (MiGetUltraHugeAlreadyActive.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1404555FE (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FCF80 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x1404FD018 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404FD200 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404FD2D4 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x140513708 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140513794 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14051385C (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     MiReserveFaultPte @ 0x140631D64 (MiReserveFaultPte.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140678714 (RtlHotPatchSynchronizationRequired.c)
 *     SepAddLuidToIndexEntry @ 0x14070B8C0 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140739A38 (SepGetLowBoxNumberEntry.c)
 *     MiGetNewSessionId @ 0x140757858 (MiGetNewSessionId.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 *     PspStorageAllocSlot @ 0x14080C8BC (PspStorageAllocSlot.c)
 *     TtmiCreateTerminal @ 0x1409A7DD8 (TtmiCreateTerminal.c)
 *     MiAllocatePartitionId @ 0x140A2CBB0 (MiAllocatePartitionId.c)
 *     RtlApplyHotPatch @ 0x140AAA600 (RtlApplyHotPatch.c)
 *     ViAllocateFromContiguousMemory @ 0x140AC4B8C (ViAllocateFromContiguousMemory.c)
 *     MiAssignSystemVa @ 0x140B60784 (MiAssignSystemVa.c)
 *     MiAssignSessionRanges @ 0x140B6BF00 (MiAssignSessionRanges.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 */

ULONG __stdcall RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r13d
  ULONG v4; // esi
  unsigned int *Buffer; // r10
  ULONG v8; // ebx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int v11; // r15d
  unsigned int v12; // r8d
  ULONG v13; // edx
  char *v14; // r14
  ULONG v15; // ebp
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  ULONG v23; // ebx
  unsigned int v25; // r9d
  int v26; // ecx
  unsigned __int64 *v27; // rdi
  bool v28; // zf
  __int64 v29; // rax
  ULONG v30; // r10d
  unsigned __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r9d
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned __int64 v37; // r10
  unsigned __int64 *v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  char v41; // r9
  unsigned __int64 *v42; // rcx
  unsigned int v43; // r9d
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // [rsp+70h] [rbp+8h]
  unsigned int *v48; // [rsp+88h] [rbp+20h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  Buffer = BitMapHeader->Buffer;
  v48 = Buffer;
  v8 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( NumberToFind )
  {
    v10 = (unsigned __int8)Buffer & 4;
    v46 = v10;
    v11 = v10 != 0 ? 0x20 : 0;
    while ( 1 )
    {
      v12 = v11 + v9;
      v13 = v11 + v8;
      v14 = (char *)Buffer - (v10 != 0 ? 4 : 0);
      if ( v9 - v8 + 1 >= NumberToFind )
        break;
      v21 = -1;
LABEL_20:
      if ( !v8 )
        goto LABEL_14;
      v10 = v46;
      v25 = NumberToFind + v4;
      Buffer = v48;
      if ( NumberToFind + v4 > SizeOfBitMap )
        v25 = SizeOfBitMap;
      v9 = v25 - 1;
      v8 = 0;
    }
    v15 = v12 - NumberToFind + 1;
    v16 = (1LL << (v13 & 0x3F)) - 1;
    v17 = (unsigned __int64)&v14[8 * ((unsigned __int64)v15 >> 6)];
    v18 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v13 >> 6)];
    v19 = *v18 | v16;
    if ( NumberToFind > 0x7F )
    {
      v37 = v17 + 8;
      if ( (v15 & 0x3F) == 0 )
        v37 = (unsigned __int64)&v14[8 * ((unsigned __int64)(v12 - NumberToFind + 1) >> 6)];
      if ( !v19 )
      {
        v40 = 0;
        goto LABEL_65;
      }
      if ( !*++v18 )
      {
        v28 = !_BitScanReverse64((unsigned __int64 *)&v45, v19);
        if ( v28 )
          goto LABEL_80;
        v40 = 63 - v45;
        goto LABEL_65;
      }
LABEL_61:
      while ( 1 )
      {
        v38 = v18;
        if ( (unsigned __int64)v18 > v37 )
          goto LABEL_18;
        if ( !*++v18 )
        {
          v28 = !_BitScanReverse64((unsigned __int64 *)&v39, *v38);
          if ( v28 )
LABEL_80:
            v40 = 64;
          else
            v40 = 63 - v39;
LABEL_65:
          v21 = ((unsigned int)(((char *)v18 - v14) >> 3) << 6) - v40;
          if ( v21 > v15 )
            goto LABEL_18;
          v41 = NumberToFind - v40;
          v42 = &v18[(unsigned __int64)(NumberToFind - v40) >> 6];
          while ( ++v18 != v42 )
          {
            if ( *v18 )
              goto LABEL_61;
          }
          v43 = v41 & 0x3F;
          if ( !v43 )
            goto LABEL_12;
          v28 = !_BitScanForward64((unsigned __int64 *)&v44, *v18);
          if ( v28 )
            LODWORD(v44) = 64;
          if ( (unsigned int)v44 >= v43 )
            goto LABEL_12;
        }
      }
    }
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v26 = 0;
        v27 = (unsigned __int64 *)&v14[8 * ((unsigned __int64)v12 >> 6)];
        while ( v19 != -1 )
        {
LABEL_26:
          v28 = !_BitScanForward64((unsigned __int64 *)&v29, v19);
          if ( v28 )
            LODWORD(v29) = 64;
          if ( v26 + (int)v29 >= NumberToFind )
          {
            LODWORD(v31) = -v26;
LABEL_33:
            v21 = ((unsigned int)(((char *)v18 - v14) >> 3) << 6) + v31;
            v22 = v21 <= v15;
            goto LABEL_11;
          }
          v30 = NumberToFind;
          v31 = ~v19;
          while ( 1 )
          {
            v31 &= v31 >> (v30 >> 1);
            if ( !v31 )
              break;
            v30 -= v30 >> 1;
            if ( v30 <= 1 )
            {
              _BitScanForward64(&v31, v31);
              goto LABEL_33;
            }
          }
          if ( v18 == v27 )
            goto LABEL_18;
          v28 = !_BitScanReverse64((unsigned __int64 *)&v32, v19);
          if ( v28 )
            v26 = 64;
          else
            v26 = 63 - v32;
          v19 = *++v18;
        }
        while ( (unsigned __int64)++v18 <= v17 )
        {
          v19 = *v18;
          if ( *v18 != -1LL )
          {
            v26 = 0;
            goto LABEL_26;
          }
        }
      }
      else
      {
        while ( v19 == -1 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_18;
          v19 = *v18;
        }
        _BitScanForward64(&v20, ~v19);
        v21 = v20 + ((unsigned int)(((char *)v18 - v14) >> 3) << 6);
        v22 = v21 <= v15;
LABEL_11:
        if ( v22 )
        {
LABEL_12:
          if ( v21 != -1 )
          {
            v21 -= v11;
LABEL_14:
            v23 = v21;
            goto LABEL_15;
          }
          goto LABEL_19;
        }
      }
LABEL_18:
      v21 = -1;
LABEL_19:
      v4 = HintIndex;
      goto LABEL_20;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v19 < 0 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_18;
          v19 = *v18;
        }
        v28 = !_BitScanReverse64((unsigned __int64 *)&v33, v19);
        if ( v28 )
          v34 = 64;
        else
          v34 = 63 - v33;
        v21 = (((unsigned int)(((char *)v18 - v14) >> 3) + 1) << 6) - v34;
        if ( v21 > v15 )
          goto LABEL_18;
        v35 = NumberToFind - v34;
        if ( NumberToFind == v34 )
          goto LABEL_12;
        v19 = *++v18;
        if ( v35 >= 0x40 )
          break;
LABEL_53:
        v28 = !_BitScanForward64((unsigned __int64 *)&v36, v19);
        if ( v28 )
          LODWORD(v36) = 64;
        if ( (unsigned int)v36 >= v35 )
          goto LABEL_12;
      }
      if ( !*v18 )
      {
        v35 -= 64;
        if ( !v35 )
          goto LABEL_12;
        v19 = *++v18;
        goto LABEL_53;
      }
    }
  }
  v23 = v8 & 0xFFFFFFF8;
LABEL_15:
  if ( v23 != -1 )
    RtlSetBits(BitMapHeader, v23, NumberToFind);
  return v23;
}
