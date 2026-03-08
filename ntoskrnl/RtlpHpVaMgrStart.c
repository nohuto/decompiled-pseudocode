/*
 * XREFs of RtlpHpVaMgrStart @ 0x140375DF8
 * Callers:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140375AC8 (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrStart(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  char v5; // r11
  char v7; // al
  char v8; // cl
  char v9; // cl
  __int64 result; // rax

  v5 = 0;
  if ( *(_DWORD *)(a3 + 4) )
    v5 = 1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 16);
  *(_BYTE *)(a1 + 44) = a5;
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a3 + 8);
  v7 = *(_BYTE *)(a3 + 4);
  *(_WORD *)(a1 + 42) = 1;
  *(_WORD *)(a1 + 40) = a4 >> 20;
  v8 = *(_BYTE *)(a3 + 12) & 1;
  *(_QWORD *)(a1 + 24) = a2;
  v9 = v5 & 0xE1 | *(_BYTE *)(a1 + 46) & 0xE0 | (2 * (v7 & 7 | (8 * v8)));
  result = 0LL;
  *(_BYTE *)(a1 + 46) = v9;
  return result;
}
