__int64 __fastcall IvtBuildScalableModePasidTableS2Entry(
        __int64 a1,
        int a2,
        __int16 a3,
        __int64 a4,
        int a5,
        __int64 *a6)
{
  __int64 result; // rax
  __int64 v11; // rcx

  result = (__int64)memset(a6, 0, 0x40uLL);
  if ( a2 != 2 || a4 )
  {
    result = ((unsigned __int64)(a2 & 7) << 6) | 1;
    *a6 = result;
    v11 = result | (4LL * (*(_DWORD *)(a1 + 248) & 7));
    if ( a2 != 4 )
      v11 |= a4 << 12;
    *a6 = v11;
    *((_WORD *)a6 + 4) = a3;
    if ( a2 != 4 && (*(_BYTE *)(a1 + 230) & 1) != 0 )
      a6[1] |= 0x800000uLL;
  }
  return result;
}
