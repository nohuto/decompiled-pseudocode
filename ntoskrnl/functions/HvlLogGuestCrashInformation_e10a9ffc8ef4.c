_UNKNOWN **__fastcall HvlLogGuestCrashInformation(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v11; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v12[0] = 0LL;
  if ( (HvlEnlightenments & 0x2000) != 0 )
  {
    result = (_UNKNOWN **)HvlpGetRegister64(533LL, v12);
    v11 = 0x8000000000000000uLL;
    if ( v12[0] < 0 )
    {
      HvlpSetRegister64(528LL, a1);
      __writemsr(0x40000101u, a2);
      __writemsr(0x40000102u, a3);
      __writemsr(0x40000103u, a4);
      __writemsr(0x40000104u, a5);
      if ( (v12[0] & 0x2000000000000000LL) != 0 )
        v11 = (-(__int64)(a6 != 0) & 0x2000000000000000LL) + 0x8000000000000000uLL;
      return (_UNKNOWN **)HvlpSetRegister64(533LL, v11);
    }
  }
  return result;
}
