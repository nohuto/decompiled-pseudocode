__int64 __fastcall SymCryptRsaPkcs1CheckSignaturePadding(
        const void *a1,
        size_t a2,
        const void *a3,
        size_t a4,
        __int64 a5,
        int a6,
        _WORD *a7,
        unsigned __int64 a8)
{
  __int64 result; // rax

  SymCryptWipe((__int64)a7, a8);
  result = SymCryptRsaPkcs1ApplySignaturePadding(a1, a2, a3, a4, a6, a7, a8);
  if ( !(_DWORD)result )
    return (unsigned __int8)SymCryptEqual(a7, a5, a8) == 0 ? 0x8010 : 0;
  return result;
}
