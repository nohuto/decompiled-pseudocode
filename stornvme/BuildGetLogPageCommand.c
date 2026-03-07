__int64 __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        unsigned __int16 a8)
{
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edi
  __int64 result; // rax

  v8 = *(_QWORD *)(a1 + 1840);
  v9 = a4;
  if ( (unsigned __int8)(a3 + 0x80) <= 1u
    || (unsigned __int8)a3 <= 9u && (v13 = 954, _bittest(&v13, a3))
    || (unsigned __int8)(a3 + 64) <= 9u && (v14 = 823, _bittest(&v14, a3 + 64)) )
  {
    a6 = -1;
  }
  *(_BYTE *)(a2 + 4136) = a3;
  v15 = *(_DWORD *)(a2 + 4136) & 0xF0007FFF;
  *(_DWORD *)(a2 + 4100) = a6;
  v16 = a4 >> 2;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4136) = v15 | ((((unsigned __int16)(a4 >> 2) - 1) & 0xFFF) << 16);
  SetPrpFromBuffer(a1, a2, a5, a4);
  result = a8;
  *(_WORD *)(a2 + 4142) = a8;
  if ( (*(_BYTE *)(v8 + 261) & 4) != 0 )
  {
    *(_WORD *)(a2 + 4138) = v16 - 1;
    *(_WORD *)(a2 + 4140) = ((unsigned int)(v9 >> 2) - 1) >> 16;
    result = (unsigned int)a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4144) = result;
    *(_DWORD *)(a2 + 4148) = (a7 >> 16) & 0xFFFF0000;
  }
  return result;
}
