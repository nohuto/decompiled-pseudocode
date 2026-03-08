/*
 * XREFs of ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x140674D7C
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140A6C6A0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MinCryptCopyAsn1IntToFixedBuffer(
        const unsigned __int8 *Src,
        size_t Size,
        unsigned __int8 *a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  unsigned int v7; // ebx

  v4 = 0;
  v5 = a4;
  v7 = Size;
  if ( (unsigned int)Size <= a4 )
  {
LABEL_4:
    if ( v7 < a4 )
      memset(a3, 0, a4 - v7);
    memmove(&a3[v5 - v7], Src, v7);
  }
  else
  {
    while ( !*Src )
    {
      ++Src;
      if ( --v7 <= a4 )
        goto LABEL_4;
    }
    return (unsigned int)-1073740760;
  }
  return v4;
}
