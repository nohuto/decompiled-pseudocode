/*
 * XREFs of HvpRemoveFreeCellHint @ 0x1406557C0
 * Callers:
 *     HvpDoAllocateCell @ 0x1406564F8 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     HvpDelistFreeCell @ 0x140656E34 (HvpDelistFreeCell.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     RtlFindSetBits @ 0x1402D8000 (RtlFindSetBits.c)
 *     RtlSetBits @ 0x1402D9750 (RtlSetBits.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x140655DC0 (HvpGetCellMap.c)
 */

void __fastcall HvpRemoveFreeCellHint(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // rdi
  char v7; // r13
  ULONG_PTR v8; // rbx
  __int64 CellMap; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned int v12; // ebp
  unsigned int *v13; // rdx
  __int64 v14; // r15
  int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // rsi
  ULONG v18; // ebp
  __int64 v19; // r14
  int v20; // ebx
  _RTL_BITMAP *v21; // rdi
  ULONG SetBits; // eax
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx

  v5 = a4;
  v7 = 0;
  v8 = (unsigned int)BugCheckParameter3;
  CellMap = HvpGetCellMap(BugCheckParameter2, BugCheckParameter3);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x310uLL);
  v11 = *(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = *(_DWORD *)(v11 + 4);
  v13 = (unsigned int *)(v11 + 32);
  v14 = *(unsigned int *)(v11 + 8);
  v15 = ((_DWORD)v5 << 31) | (v12 + 32);
  if ( v11 + 32 < v11 + v14 )
  {
    do
    {
      v16 = *v13;
      if ( (*v13 & 0x80000000) == 0 )
      {
        v24 = (v16 >> 3) - 1;
        if ( v24 >= 0x10 )
        {
          v25 = v24 >> 4;
          if ( v25 > 0xFF )
          {
            v24 = 23;
          }
          else
          {
            _BitScanReverse(&v25, v25);
            v24 = v25 + 16;
          }
        }
        if ( (_DWORD)v10 == v24 && v15 != (_DWORD)v8 && v15 != a5 )
        {
          v7 = 1;
          break;
        }
      }
      else
      {
        v16 = -v16;
      }
      v15 += v16;
      v13 = (unsigned int *)((char *)v13 + v16);
    }
    while ( (unsigned __int64)v13 < v11 + v14 );
  }
  v17 = 632 * v5;
  v18 = v12 >> 12;
  v19 = 24 * v10;
  v20 = 1 << v10;
  v21 = (_RTL_BITMAP *)(24 * v10 + 632 * v5 + BugCheckParameter2 + 312);
  if ( v7 )
  {
    *(_DWORD *)(v17 + BugCheckParameter2 + 896) |= v20;
    *(_DWORD *)(v19 + v17 + BugCheckParameter2 + 308) = v18;
    RtlSetBits(v21, v18, *(_DWORD *)(v11 + 8) >> 12);
  }
  else
  {
    RtlClearBits(v21, v18, (unsigned int)v14 >> 12);
    SetBits = RtlFindSetBits(v21, 1u, v18);
    v23 = *(_DWORD *)(v17 + BugCheckParameter2 + 896);
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v17 + BugCheckParameter2 + 896) = v23 & ~v20;
    }
    else
    {
      *(_DWORD *)(v17 + BugCheckParameter2 + 896) = v20 | v23;
      *(_DWORD *)(v19 + v17 + BugCheckParameter2 + 308) = SetBits;
    }
  }
}
