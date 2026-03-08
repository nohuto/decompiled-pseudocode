/*
 * XREFs of HvpRemoveFreeCellHint @ 0x1407A6200
 * Callers:
 *     HvpDelistFreeCell @ 0x1407A5BF0 (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 * Callees:
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     RtlFindSetBits @ 0x14030D990 (RtlFindSetBits.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 *     HvpGetCellMap @ 0x140AF2670 (HvpGetCellMap.c)
 */

void __fastcall HvpRemoveFreeCellHint(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v6; // rdi
  ULONG_PTR v7; // rbx
  char v8; // r12
  __int64 v9; // rdx
  __int64 CellMap; // rax
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 BinAddress; // r15
  unsigned int v14; // r14d
  unsigned int *v15; // rdx
  __int64 v16; // r11
  int v17; // r8d
  unsigned int v18; // eax
  ULONG v19; // r14d
  int v20; // ebx
  ULONG_PTR v21; // rbp
  ULONG_PTR v22; // rdi
  RTL_BITMAP *v23; // rcx
  ULONG SetBits; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  _WORD v28[20]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  v28[0] = 0;
  v7 = (unsigned int)BugCheckParameter3;
  v8 = 0;
  HvpGetBinContextInitialize(v28);
  CellMap = HvpGetCellMap(BugCheckParameter2, v9);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x310uLL);
  BinAddress = HvpMapEntryGetBinAddress(v11, CellMap, v28);
  v14 = *(_DWORD *)(BinAddress + 4);
  v15 = (unsigned int *)(BinAddress + 32);
  v16 = *(unsigned int *)(BinAddress + 8);
  v17 = ((_DWORD)v6 << 31) | (v14 + 32);
  if ( BinAddress + 32 < (unsigned __int64)(BinAddress + v16) )
  {
    do
    {
      v18 = *v15;
      if ( (*v15 & 0x80000000) == 0 )
      {
        v26 = (v18 >> 3) - 1;
        if ( v26 >= 0x10 )
        {
          v27 = v26 >> 4;
          if ( v27 > 0xFF )
          {
            v26 = 23;
          }
          else
          {
            _BitScanReverse(&v27, v27);
            v26 = v27 + 16;
          }
        }
        if ( (_DWORD)v12 == v26 && v17 != (_DWORD)v7 && v17 != a5 )
        {
          v8 = 1;
          break;
        }
      }
      else
      {
        v18 = -v18;
      }
      v17 += v18;
      v15 = (unsigned int *)((char *)v15 + v18);
    }
    while ( (unsigned __int64)v15 < BinAddress + v16 );
  }
  v19 = v14 >> 12;
  v20 = 1 << v12;
  v21 = BugCheckParameter2 + 632 * v6 + 24 * v12;
  v22 = 632 * v6 + BugCheckParameter2;
  v23 = (RTL_BITMAP *)(v21 + 320);
  if ( v8 )
  {
    *(_DWORD *)(v22 + 904) |= v20;
    *(_DWORD *)(v21 + 316) = v19;
    RtlSetBits(v23, v19, *(_DWORD *)(BinAddress + 8) >> 12);
  }
  else
  {
    RtlClearBits(v23, v19, (unsigned int)v16 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(v21 + 320), 1u, v19);
    v25 = *(_DWORD *)(v22 + 904);
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v22 + 904) = v25 & ~v20;
    }
    else
    {
      *(_DWORD *)(v22 + 904) = v20 | v25;
      *(_DWORD *)(v21 + 316) = SetBits;
    }
  }
}
