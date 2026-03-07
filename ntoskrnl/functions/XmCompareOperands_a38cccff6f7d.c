__int64 __fastcall XmCompareOperands(__int64 a1)
{
  int v1; // eax
  int v2; // r9d
  int v4; // esi
  unsigned int v5; // r10d
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  bool v11; // zf
  unsigned int v12; // edx
  unsigned __int16 v13; // r8
  unsigned int v14; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 120);
  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  LOBYTE(v7) = 0;
  if ( !v1 )
  {
    v14 = *(unsigned __int8 *)(a1 + 104);
    LOBYTE(v7) = *(_BYTE *)(a1 + 108) - v14;
    v5 = (((unsigned __int8)v7 ^ (unsigned int)*(unsigned __int8 *)(a1 + 108)) >> 7) & (((unsigned __int8)v7 ^ v14) >> 7);
    v6 = (unsigned __int8)v7 >> 7;
    LOBYTE(v4) = *(_BYTE *)(a1 + 108) < (unsigned __int8)v14;
    v11 = *(_BYTE *)(a1 + 108) == (unsigned __int8)v14;
    goto LABEL_7;
  }
  v8 = v1 - 1;
  if ( !v8 )
  {
    v12 = *(unsigned __int16 *)(a1 + 104);
    v13 = *(_WORD *)(a1 + 108);
    v7 = (unsigned __int16)(v13 - v12);
    v5 = ((v7 ^ v13) >> 15) & ((v7 ^ v12) >> 15);
    v6 = v7 >> 15;
    LOBYTE(v4) = v13 < (unsigned __int16)v12;
    v11 = v13 == (unsigned __int16)v12;
    goto LABEL_7;
  }
  if ( v8 == 2 )
  {
    v9 = *(_DWORD *)(a1 + 108);
    v10 = *(_DWORD *)(a1 + 104);
    v7 = v9 - v10;
    v5 = ((v7 ^ v10) >> 31) & ((v9 ^ v7) >> 31);
    v6 = (v9 - v10) >> 31;
    LOBYTE(v4) = v9 < v10;
    v11 = v9 == v10;
LABEL_7:
    LOBYTE(v2) = v11;
  }
  result = *((unsigned __int8 *)XmBitCount + (v7 & 0xF));
  *(_DWORD *)(a1 + 16) = (4
                        * ((v5 << 9) | ((((_BYTE)result + *((_BYTE *)XmBitCount + ((unsigned __int8)v7 >> 4))) & 1) == 0))) | v4 & 0xFFFFF72B | *(_DWORD *)(a1 + 16) & 0xFFFFF72A | (((2 * v6) | v2 & 0xFFFFFFFD) << 6) & 0xFFFFF7FF | ((*(_BYTE *)(a1 + 104) & 0xF) + (*(_BYTE *)(a1 + 108) & 0xF)) & 0xFFFFF730;
  return result;
}
