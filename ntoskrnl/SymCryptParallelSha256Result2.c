/*
 * XREFs of SymCryptParallelSha256Result2 @ 0x1403F01E0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 */

char __fastcall SymCryptParallelSha256Result2(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbx
  char result; // al

  v4 = a2 + 32;
  SymCryptWipe(a2 + 32, 64LL);
  *(_QWORD *)(a2 + 88) = _byteswap_uint64(8LL * *(_QWORD *)(a2 + 16));
  result = 1;
  *(_QWORD *)(a3 + 32) = v4;
  *(_QWORD *)(a3 + 40) = 64LL;
  *(_BYTE *)(a3 + 8) = 4;
  *a4 = 1;
  return result;
}
