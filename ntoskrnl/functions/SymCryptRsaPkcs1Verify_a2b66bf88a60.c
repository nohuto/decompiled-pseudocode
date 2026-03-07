__int64 __fastcall SymCryptRsaPkcs1Verify(
        __int64 a1,
        const void *a2,
        size_t a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        __int64 a7,
        unsigned __int64 a8,
        int a9)
{
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rax
  _WORD *v15; // rsi
  __int64 v16; // r15

  v11 = (unsigned int)SymCryptRsakeySizeofModulus(a1);
  if ( a5 <= v11 )
  {
    if ( a6 == 1 )
    {
      return 32779;
    }
    else
    {
      if ( (unsigned int)SymCryptRsaCoreEncScratchSpace(a1) <= v11 )
        v13 = v11;
      else
        v13 = (unsigned int)SymCryptRsaCoreEncScratchSpace(a1);
      v14 = SymCryptCallbackAlloc(v13 + v11);
      v15 = (_WORD *)v14;
      if ( v14 )
      {
        v16 = v13 + v14;
        v12 = SymCryptRsaCoreEnc(a1, a4, a5, 2, a9, v13 + v14, v11, v14, v13);
        if ( !v12 )
          v12 = SymCryptRsaPkcs1VerifySignaturePadding(a2, a3, a7, a8, v16, v11, a9, v15);
        SymCryptWipe((__int64)v15, v13 + v11);
        SymCryptCallbackFree(v15);
      }
      else
      {
        return 32783;
      }
    }
  }
  else
  {
    return 32782;
  }
  return v12;
}
