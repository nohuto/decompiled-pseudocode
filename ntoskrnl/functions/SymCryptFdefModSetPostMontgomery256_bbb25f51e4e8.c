__int64 __fastcall SymCryptFdefModSetPostMontgomery256(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefModMulMontgomery256Asm(a1, *(_QWORD *)(a1 + 40), a2, a2, a3, a4);
}
