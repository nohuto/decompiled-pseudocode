__int64 __fastcall HvpAddFreeCellHint(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  __int64 CellMap; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // r10
  __int64 BinAddress; // rax
  __int64 v10; // r11
  __int64 v11; // rsi
  ULONG v12; // edi
  __int64 v13; // rbx
  __int64 result; // rax
  _WORD v15[12]; // [rsp+30h] [rbp-18h] BYREF

  v3 = a3;
  v15[0] = 0;
  HvpGetBinContextInitialize(v15);
  CellMap = HvpGetCellMap(BugCheckParameter2, v5);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x2B9uLL);
  BinAddress = HvpMapEntryGetBinAddress(v7, CellMap, v15);
  v11 = 632 * v10;
  v12 = *(_DWORD *)(BinAddress + 4) >> 12;
  v13 = 632 * v10 + 24 * v3;
  RtlSetBits((PRTL_BITMAP)(v13 + BugCheckParameter2 + 320), v12, *(_DWORD *)(BinAddress + 8) >> 12);
  *(_DWORD *)(v13 + BugCheckParameter2 + 316) = v12;
  result = (unsigned int)(1 << v3);
  *(_DWORD *)(v11 + BugCheckParameter2 + 904) |= result;
  return result;
}
