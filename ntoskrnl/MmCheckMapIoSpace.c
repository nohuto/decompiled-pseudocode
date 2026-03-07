__int64 __fastcall MmCheckMapIoSpace(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v4; // rbp
  signed __int64 v6; // rdi
  __int64 result; // rax

  v2 = BugCheckParameter2 >> 12;
  v4 = ((BugCheckParameter2 & 0xFFF) + BugCheckParameter3 + 4095) >> 12;
  v6 = 48 * (BugCheckParameter2 >> 12);
  do
  {
    result = MiIsPfn(v2);
    if ( (_DWORD)result )
    {
      if ( !*(_WORD *)(v6 - 0x21FFFFFFFFE0LL) )
        result = VerifierBugCheckIfAppropriate(
                   0xC4u,
                   0x83uLL,
                   BugCheckParameter2,
                   BugCheckParameter3,
                   0xAAAAAAAAAAAAAAABuLL * (v6 >> 4));
    }
    v6 += 48LL;
    ++v2;
    --v4;
  }
  while ( v4 );
  return result;
}
