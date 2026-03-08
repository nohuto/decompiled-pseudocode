/*
 * XREFs of HvpFindFreeCell @ 0x1407A6710
 * Callers:
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x14030D990 (RtlFindSetBits.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvpFindFreeCellInBin @ 0x1407A6930 (HvpFindFreeCellInBin.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AF26CC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpFindFreeCell(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  ULONG v9; // edx
  __int64 v10; // r15
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  unsigned int v13; // eax
  int v14; // r13d
  ULONG i; // edx
  __int64 v16; // rdi
  ULONG SetBits; // ecx
  int v18; // eax
  __int64 CellMap; // rax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 BinAddress; // rdi
  int FreeCellInBin; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rdi
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int16 v31; // [rsp+98h] [rbp+10h] BYREF
  int v32; // [rsp+A0h] [rbp+18h]
  ULONG v33; // [rsp+A8h] [rbp+20h]

  v32 = a3;
  v6 = a2;
  v7 = a4;
  v31 = 0;
  HvpGetBinContextInitialize(&v31);
  v10 = 632 * v7;
  v11 = -1;
  v12 = (-1 << v6) & *(_DWORD *)(632 * v7 + BugCheckParameter2 + 904);
  if ( !v12 )
    return v11;
  _BitScanForward(&v13, v12);
  v33 = v9;
  v14 = -1;
  if ( v13 != (_DWORD)v6 )
    v6 = v13;
  for ( i = *(_DWORD *)(v10 + 24 * v6 + BugCheckParameter2 + 316); ; i = v33 )
  {
    v16 = v10 + 24 * v6;
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v16 + BugCheckParameter2 + 320), 1u, i);
    *(_DWORD *)(v16 + BugCheckParameter2 + 316) = SetBits;
    v33 = SetBits + 1;
    if ( v14 == SetBits )
    {
      v12 &= v12 - 1;
      if ( !v12 )
        return v11;
      _BitScanForward((unsigned int *)&v6, v12);
      v33 = 0;
      v29 = v10 + 24 * v6;
      SetBits = RtlFindSetBits(
                  (PRTL_BITMAP)(v29 + BugCheckParameter2 + 320),
                  1u,
                  *(_DWORD *)(v29 + BugCheckParameter2 + 316));
      *(_DWORD *)(v29 + BugCheckParameter2 + 316) = SetBits;
      v14 = SetBits;
      v33 = SetBits + 1;
    }
    v18 = SetBits;
    if ( v14 != -1 )
      v18 = v14;
    v14 = v18;
    LODWORD(v30) = (SetBits << 12) + ((_DWORD)v7 << 31);
    CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v30);
    v22 = CellMap;
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v21, 0x48AuLL);
    v23 = *(_QWORD *)(CellMap + 8);
    if ( (v23 & 2) != 0 || (v23 & 4) != 0 || (v23 & 1) == 0 )
      continue;
    BinAddress = HvpMapEntryGetBinAddress(v20, v22, &v31);
    FreeCellInBin = HvpFindFreeCellInBin(BugCheckParameter2, (__int64)&v30, a5, a6);
    if ( FreeCellInBin >= 0 )
      break;
    if ( FreeCellInBin != -1073741275 )
      goto LABEL_14;
    HvpMapEntryReleaseBinAddress(v27, v26, &v31);
  }
  v11 = v30;
LABEL_14:
  if ( BinAddress )
    HvpMapEntryReleaseBinAddress(v27, v26, &v31);
  return v11;
}
