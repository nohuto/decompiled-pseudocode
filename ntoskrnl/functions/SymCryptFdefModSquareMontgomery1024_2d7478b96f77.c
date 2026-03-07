__int64 __fastcall SymCryptFdefModSquareMontgomery1024(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquare1024Asm(a2, *(unsigned int *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduce1024Asm(a1, a4, a3);
}
