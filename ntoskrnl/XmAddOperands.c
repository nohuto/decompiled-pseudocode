__int64 __fastcall XmAddOperands(__int64 a1, int a2)
{
  int v2; // eax
  char v3; // bl
  char v4; // di
  __int64 v5; // rdx
  unsigned int v6; // edx
  __int64 v7; // r10
  int v8; // r11d
  unsigned int v9; // r9d
  char v10; // al
  unsigned int v11; // r8d
  __int64 result; // rax
  unsigned int v13; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 120);
  v13 = 0;
  v3 = a2;
  if ( !v2 )
  {
    v4 = 7;
    LOBYTE(v13) = *(_BYTE *)(a1 + 104) + *(_BYTE *)(a1 + 108) + a2;
    goto LABEL_4;
  }
  if ( v2 != 3 )
  {
    v4 = 15;
    LOWORD(v13) = *(_WORD *)(a1 + 104) + *(_WORD *)(a1 + 108) + a2;
LABEL_4:
    v5 = v13;
    goto LABEL_5;
  }
  v4 = 31;
  v5 = (unsigned int)(a2 + *(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 104));
LABEL_5:
  XmStoreResult(a1, v5);
  if ( *(_DWORD *)(v7 + 124) != 30 )
    *(_DWORD *)(v7 + 16) = v8 | *(_DWORD *)(v7 + 16) & 0xFFFFFFFE;
  v9 = *(_DWORD *)(v7 + 108);
  v10 = v3 + (*(_BYTE *)(v7 + 104) & 0xF);
  *(_DWORD *)(v7 + 16) ^= (*(_DWORD *)(v7 + 16) ^ (4
                                                 * ~(*((unsigned __int8 *)XmBitCount + (v6 & 0xF))
                                                   + *((unsigned __int8 *)XmBitCount + ((unsigned __int8)v6 >> 4))))) & 4;
  v11 = (v6 == 0 ? 0x40 : 0) | (*(_DWORD *)(v7 + 16) ^ ((unsigned __int8)*(_DWORD *)(v7 + 16) ^ (unsigned __int8)(v10 + (v9 & 0xF))) & 0x10) & 0xFFFFFFBF;
  result = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned __int8)(v6 >> v4) << 7)) & 0x80;
  *(_DWORD *)(v7 + 16) = result ^ ((unsigned __int16)(v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned __int8)(v6 >> v4) << 7)) & 0x80) ^ (unsigned __int16)(((unsigned __int16)v8 ^ (unsigned __int16)((v6 ^ *(_DWORD *)(v7 + 104) ^ v9) >> v4)) << 11)) & 0x800;
  return result;
}
