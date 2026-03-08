/*
 * XREFs of SymCryptParallelSha256Result1 @ 0x1403F0150
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 */

char __fastcall SymCryptParallelSha256Result1(__int64 a1, unsigned int *a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbx
  char v8; // al
  char result; // al

  v4 = *a2;
  *((_BYTE *)a2 + v4 + 32) = 0x80;
  LODWORD(v4) = v4 + 1;
  SymCryptWipe((char *)a2 + (unsigned int)v4 + 32, (unsigned int)(64 - v4));
  *(_QWORD *)(a3 + 40) = 64LL;
  *(_QWORD *)(a3 + 32) = a2 + 8;
  if ( (unsigned int)v4 <= 0x38 )
  {
    v8 = 4;
    *((_QWORD *)a2 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a2 + 2));
  }
  else
  {
    v8 = 3;
  }
  *(_BYTE *)(a3 + 8) = v8;
  result = 1;
  *a4 = 1;
  return result;
}
