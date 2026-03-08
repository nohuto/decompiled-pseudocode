/*
 * XREFs of ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C00D0A54
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00D0870 (NtGdiAddFontResourceW.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02C56E0 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C02C6D80 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 */

__int64 __fastcall bCheckAndCapThePath(unsigned __int16 *a1, const unsigned __int16 *a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  unsigned __int16 *v8; // rdi
  int v9; // esi
  __int64 v10; // rax
  const unsigned __int16 *v11; // rax

  v5 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 1;
  v10 = a3;
  if ( v10 * 2 )
  {
    v11 = &a2[v10];
    if ( (unsigned __int64)v11 > MmUserProbeAddress || v11 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  if ( !a2[a3 - 1] )
  {
    cCapString(a1, a2, a3);
    if ( a3 )
    {
      do
      {
        if ( *v8 == 124 )
        {
          *v8 = 0;
          ++v9;
        }
        ++v8;
        --v7;
      }
      while ( v7 );
    }
    LOBYTE(v5) = a4 == v9;
  }
  return v5;
}
