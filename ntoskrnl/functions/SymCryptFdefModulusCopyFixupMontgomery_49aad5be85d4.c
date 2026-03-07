__int64 __fastcall SymCryptFdefModulusCopyFixupMontgomery(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)SymCryptFdefSizeofDivisorFromDigits(*(unsigned int *)(a2 + 4));
  *(_QWORD *)(a2 + 40) = (unsigned int)result + a2 + 64;
  return result;
}
