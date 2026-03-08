/*
 * XREFs of HvIsCellAllocated @ 0x1407B0B10
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckValueList @ 0x1407B2930 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

char __fastcall HvIsCellAllocated(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, PRTL_BITMAP BitMapHeader)
{
  unsigned int v5; // edi
  __int64 CellMap; // rax
  __int64 v7; // rsi
  __int64 CellFlat; // rax
  __int64 BinAddress; // rax
  int *v10; // rcx
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  __int64 v15; // r9
  bool v16; // di
  __int16 v18; // [rsp+30h] [rbp+8h] BYREF
  __int64 v19; // [rsp+48h] [rbp+20h] BYREF

  v19 = 0LL;
  v18 = 0;
  v5 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v19);
  HvpGetBinContextInitialize(&v18);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    return 1;
  if ( (v5 & 0x7FFFFFFF) >= *(_DWORD *)(632LL * (v5 >> 31) + BugCheckParameter3 + 280) || (v5 & 7) != 0 )
    return 0;
  if ( BitMapHeader && (v5 & 0x80000000) == 0 )
  {
    if ( _bittest64((const signed __int64 *)BitMapHeader->Buffer, v5 >> 3) )
    {
      RtlClearBits(BitMapHeader, v5 >> 3, 1u);
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  CellMap = HvpGetCellMap(BugCheckParameter3, v5);
  v7 = CellMap;
  if ( !CellMap || (*(_BYTE *)(CellMap + 8) & 2) != 0 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( !CellFlat || CellFlat == 4 )
    return 1;
  BinAddress = HvpMapEntryGetBinAddress(CellFlat - 4, v7, &v18);
  v11 = (int)v10;
  v12 = *v10;
  v13 = v11 - BinAddress;
  v14 = -v12;
  v16 = 0;
  if ( v12 < 0 && v14 - 8 <= 0xFFFF8 )
  {
    v15 = *(unsigned int *)(BinAddress + 8);
    if ( v14 <= (unsigned __int64)(v15 - 32) && v13 - v12 <= (unsigned int)v15 && v13 >= 0x20 )
      v16 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v19);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v19);
  return v16;
}
