int __fastcall HalpInterruptCreateGdtEntry32(__int64 a1, int a2, __int64 a3, unsigned int a4, __int16 a5, char a6)
{
  __int64 v6; // r8
  unsigned int v7; // ecx
  int result; // eax

  v6 = a1 + (a2 & 0xFFFFFFF0);
  *(_QWORD *)v6 = 0LL;
  if ( a4 > 0xFFFFF )
  {
    *(_DWORD *)(v6 + 4) |= 0x800000u;
    a4 >>= 12;
  }
  *(_WORD *)v6 = a4;
  *(_DWORD *)(v6 + 4) ^= (*(_DWORD *)(v6 + 4) ^ a4) & 0xF0000;
  *(_BYTE *)(v6 + 4) = 0;
  *(_BYTE *)(v6 + 7) = 0;
  *(_DWORD *)(v6 + 4) |= 0x8000u;
  v7 = *(_DWORD *)(v6 + 4) & 0xFFFF9FFF;
  *(_WORD *)(v6 + 2) = 0;
  *(_DWORD *)(v6 + 4) = v7;
  if ( !a6 )
  {
    v7 |= 0x400000u;
    *(_DWORD *)(v6 + 4) = v7;
  }
  result = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(a5 << 8)) & 0x1F00;
  *(_DWORD *)(v6 + 4) = result;
  if ( a6 )
  {
    result |= 0x200000u;
    *(_DWORD *)(v6 + 4) = result;
  }
  return result;
}
