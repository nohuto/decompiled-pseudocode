__int64 __fastcall MmCheckMdlPages(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // rbx
  __int16 v2; // bp
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // r15
  __int64 v6; // rdi
  __int64 result; // rax

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 48);
  v2 = *(_WORD *)(BugCheckParameter2 + 10) & 0x800;
  v3 = (((*(_DWORD *)(BugCheckParameter2 + 32) + *(_DWORD *)(BugCheckParameter2 + 44)) & 0xFFF)
      + (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40)
      + 4095) >> 12;
  v5 = BugCheckParameter2 + 48 + 8 * v3;
  do
  {
    v6 = *v1;
    result = MiIsPfn(*v1);
    if ( v2 )
    {
      if ( !(_DWORD)result )
        goto LABEL_9;
    }
    else if ( !(_DWORD)result )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0x89uLL, BugCheckParameter2, (ULONG_PTR)v1, v6);
      v6 = *v1;
    }
    result = 48 * v6;
    if ( !*(_WORD *)(48 * v6 - 0x21FFFFFFFFE0LL) )
      result = VerifierBugCheckIfAppropriate(
                 0xC4u,
                 0x85uLL,
                 BugCheckParameter2,
                 v3,
                 0xAAAAAAAAAAAAAAABuLL * (result >> 4));
LABEL_9:
    ++v1;
  }
  while ( (unsigned __int64)v1 < v5 );
  return result;
}
