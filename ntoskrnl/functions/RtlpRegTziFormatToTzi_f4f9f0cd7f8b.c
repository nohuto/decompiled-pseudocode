__int64 __fastcall RtlpRegTziFormatToTzi(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 8);
  *(_WORD *)(a1 + 68) = *(_WORD *)(a2 + 12);
  *(_WORD *)(a1 + 70) = *(_WORD *)(a2 + 14);
  *(_WORD *)(a1 + 82) = *(_WORD *)(a2 + 16);
  *(_WORD *)(a1 + 72) = *(_WORD *)(a2 + 18);
  *(_WORD *)(a1 + 74) = *(_WORD *)(a2 + 20);
  *(_WORD *)(a1 + 76) = *(_WORD *)(a2 + 22);
  *(_WORD *)(a1 + 78) = *(_WORD *)(a2 + 24);
  *(_WORD *)(a1 + 80) = *(_WORD *)(a2 + 26);
  *(_WORD *)(a1 + 152) = *(_WORD *)(a2 + 28);
  *(_WORD *)(a1 + 154) = *(_WORD *)(a2 + 30);
  *(_WORD *)(a1 + 166) = *(_WORD *)(a2 + 32);
  *(_WORD *)(a1 + 156) = *(_WORD *)(a2 + 34);
  *(_WORD *)(a1 + 158) = *(_WORD *)(a2 + 36);
  *(_WORD *)(a1 + 160) = *(_WORD *)(a2 + 38);
  *(_WORD *)(a1 + 162) = *(_WORD *)(a2 + 40);
  result = *(unsigned __int16 *)(a2 + 42);
  *(_WORD *)(a1 + 164) = result;
  return result;
}
