/*
 * XREFs of ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1C010E6E8
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C010E3C0 (NtGdiAddFontResourceW.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C02AE880 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C02AF680 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     cCapString @ 0x1C00BBAF4 (cCapString.c)
 */

__int64 __fastcall bCheckAndCapThePath(unsigned __int16 *a1, WCHAR *a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  unsigned __int16 *v8; // rdi
  int v9; // esi
  __int64 v10; // rax

  v5 = 0;
  v7 = a3;
  v8 = a1;
  v9 = 1;
  v10 = a3;
  if ( v10 * 2 && ((unsigned __int64)&a2[v10] > MmUserProbeAddress || &a2[v10] < a2) )
    *(_BYTE *)MmUserProbeAddress = 0;
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
