/*
 * XREFs of SymCryptFdefConditionalSwapC @ 0x1403FFA2C
 * Callers:
 *     SymCryptFdefConditionalSwap @ 0x1403FFA14 (SymCryptFdefConditionalSwap.c)
 *     SymCryptFdefIntConditionalSwap @ 0x1403FFBF8 (SymCryptFdefIntConditionalSwap.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptFdefConditionalSwapC(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r9
  __int64 v6; // r11
  _QWORD *v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = -(__int64)(a4 & 1);
  v5 = (unsigned __int64)(unsigned int)(a3 << 6) >> 3;
  if ( v5 )
  {
    v6 = a1 - a2;
    v7 = (_QWORD *)(a2 + 8);
    v8 = ((v5 - 1) >> 1) + 1;
    do
    {
      v9 = v4 & (*(v7 - 1) ^ *(_QWORD *)((char *)v7 + v6 - 8));
      v10 = v4 & (*v7 ^ *(_QWORD *)((char *)v7 + v6));
      *(_QWORD *)((char *)v7 + v6 - 8) ^= v9;
      *(v7 - 1) ^= v9;
      *(_QWORD *)((char *)v7 + v6) ^= v10;
      *v7 ^= v10;
      v7 += 2;
      --v8;
    }
    while ( v8 );
  }
}
