__int64 __fastcall SymCryptFdefModInvMontgomery256(__int64 a1, _OWORD *a2, void *a3, char a4, _OWORD *a5, __int64 a6)
{
  *a5 = *a2;
  a5[1] = a2[1];
  SymCryptWipe((__int64)(a5 + 2), 0x20uLL);
  SymCryptFdefMontgomeryReduce256Asm(a1, a5, a5);
  SymCryptWipe((__int64)(a5 + 2), 0x20uLL);
  SymCryptFdefMontgomeryReduce256Asm(a1, a5, a3);
  return SymCryptFdefModInvGeneric(a1, a3, (unsigned int *)a3, a4, (__int64)a5, a6);
}
