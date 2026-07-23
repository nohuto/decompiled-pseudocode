/*
 * XREFs of XmAddOperands @ 0x140396B70
 * Callers:
 *     XmIncOp @ 0x1403967B0 (XmIncOp.c)
 *     XmAddOp @ 0x1403C3A50 (XmAddOp.c)
 *     XmAdcOp @ 0x1404E5C30 (XmAdcOp.c)
 *     XmXaddOp @ 0x1404E5D10 (XmXaddOp.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 */

__int64 __fastcall XmAddOperands(__int64 a1, int a2)
{
  int v2; // eax
  char v3; // di
  char v5; // si
  __int64 v6; // rdx
  unsigned int v7; // edx
  int v8; // r11d
  unsigned int v9; // r8d
  __int64 result; // rax
  unsigned int v11; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 120);
  v11 = 0;
  v3 = a2;
  if ( !v2 )
  {
    v5 = 7;
    LOBYTE(v11) = *(_BYTE *)(a1 + 104) + *(_BYTE *)(a1 + 108) + a2;
    goto LABEL_4;
  }
  if ( v2 != 3 )
  {
    v5 = 15;
    LOWORD(v11) = *(_WORD *)(a1 + 104) + *(_WORD *)(a1 + 108) + a2;
LABEL_4:
    v6 = v11;
    goto LABEL_5;
  }
  v5 = 31;
  v6 = (unsigned int)(a2 + *(_DWORD *)(a1 + 108) + *(_DWORD *)(a1 + 104));
LABEL_5:
  XmStoreResult(a1, v6);
  v9 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 124) != 30 )
    v9 = v8 | v9 & 0xFFFFFFFE;
  result = -v7;
  *(_DWORD *)(a1 + 16) = (v7 == 0 ? 0x40 : 0) | v9 & 0xFFFFF72B | (v3
                                                                 + (*(_BYTE *)(a1 + 104) & 0xF)
                                                                 + (*(_DWORD *)(a1 + 108) & 0xF)) & 0x10 | (4 * (((*((_BYTE *)XmBitCount + (v7 & 0xF)) + *((_BYTE *)XmBitCount + ((unsigned __int8)v7 >> 4))) & 1) == 0)) & 0x3F | (((v7 >> v5) & 1 | (16 * (((unsigned __int8)v8 ^ (unsigned __int8)((v7 ^ *(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108)) >> v5)) & 1))) << 7);
  return result;
}
