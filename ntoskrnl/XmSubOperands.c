/*
 * XREFs of XmSubOperands @ 0x1403B3B58
 * Callers:
 *     XmSubOp @ 0x1403AAAD0 (XmSubOp.c)
 *     XmDecOp @ 0x1403B35E0 (XmDecOp.c)
 *     XmCmpxchgOp @ 0x140530EA0 (XmCmpxchgOp.c)
 *     XmNegOp @ 0x140530F10 (XmNegOp.c)
 *     XmSbbOp @ 0x140530F40 (XmSbbOp.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmSubOperands(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  char v4; // r11
  _DWORD *v5; // r9
  int v6; // r10d
  int v7; // eax
  char v8; // bl
  unsigned __int8 v9; // cl
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  char v14; // al
  unsigned int v15; // r8d
  __int64 result; // rax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // [rsp+38h] [rbp+10h]

  v2 = a1[30];
  v3 = 0;
  v21 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      v19 = a1[26];
      v8 = 31;
      v20 = a1[27];
      LOBYTE(v6) = v19 < a2;
      LOBYTE(v3) = v19 - a2 < v20;
      v10 = v3 | v6;
      v11 = v19 - a2 - v20;
      goto LABEL_4;
    }
    v17 = *((_WORD *)a1 + 52);
    v8 = 15;
    v18 = *((_WORD *)a1 + 54);
    LOBYTE(v6) = (unsigned __int16)(v17 - a2) < v18;
    LOBYTE(v3) = v17 < (unsigned __int16)a2;
    v10 = v3 | v6;
    LOWORD(v21) = v17 - a2 - v18;
  }
  else
  {
    v7 = *((unsigned __int8 *)a1 + 104);
    v8 = 7;
    v9 = *((_BYTE *)a1 + 108);
    LOBYTE(v6) = (unsigned __int8)(v7 - a2) < v9;
    LOBYTE(v3) = (unsigned __int8)v7 < (unsigned __int8)a2;
    v10 = v3 | v6;
    LOBYTE(v21) = v7 - a2 - v9;
  }
  v11 = v21;
LABEL_4:
  v12 = v5[31];
  if ( v12 != 13 && v12 != 87 )
    XmStoreResult(v5, v11);
  v13 = v5[31];
  if ( v13 != 31 )
    v5[4] = v10 | v5[4] & 0xFFFFFFFE;
  v14 = v5[27] & 0xF;
  v5[4] ^= (v5[4] ^ (4
                   * ~(*((unsigned __int8 *)XmBitCount + (v11 & 0xF))
                     + *((unsigned __int8 *)XmBitCount + ((unsigned __int8)v11 >> 4))))) & 4;
  v15 = v5[4] ^ ((unsigned __int8)v5[4] ^ (unsigned __int8)((v5[26] & 0xF) - v14 - v4)) & 0x10;
  v5[4] = v15;
  if ( v13 != 87 )
  {
    v15 = ((_DWORD)v11 == 0 ? 0x40 : 0) | v15 & 0xFFFFFFBF;
    v5[4] = v15;
  }
  result = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int8)((unsigned int)v11 >> v8) << 7)) & 0x80;
  v5[4] = result ^ ((unsigned __int16)result ^ (unsigned __int16)(((unsigned __int16)v10 ^ (unsigned __int16)((v5[27] ^ v5[26] ^ (unsigned int)v11) >> v8)) << 11)) & 0x800;
  return result;
}
