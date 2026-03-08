/*
 * XREFs of SymCryptFdef369MaskedCopyAsm @ 0x140409720
 * Callers:
 *     SymCryptFdef369ModAddGeneric @ 0x140403AD0 (SymCryptFdef369ModAddGeneric.c)
 *     SymCryptFdef369ModSubGeneric @ 0x140403DD0 (SymCryptFdef369ModSubGeneric.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdef369MaskedCopyAsm(_QWORD *a1, _QWORD *a2, int a3, int a4)
{
  int v4; // r8d
  __int64 result; // rax

  v4 = a3 + 1;
  do
  {
    *a2 ^= a4 & (*a2 ^ *a1);
    a2[1] ^= a4 & (a2[1] ^ a1[1]);
    result = a2[2] ^ a4 & (a2[2] ^ a1[2]);
    a2[2] = result;
    a1 += 3;
    a2 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
