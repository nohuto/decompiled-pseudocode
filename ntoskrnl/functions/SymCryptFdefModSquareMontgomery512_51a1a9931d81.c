__int64 __fastcall SymCryptFdefModSquareMontgomery512(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquare512Asm(a2, *(unsigned int *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduce512Asm(a1, a4, a3);
}
