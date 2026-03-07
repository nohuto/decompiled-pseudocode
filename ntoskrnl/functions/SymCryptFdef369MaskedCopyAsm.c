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
