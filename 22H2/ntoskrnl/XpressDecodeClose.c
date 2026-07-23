/*
 * XREFs of XpressDecodeClose @ 0x1405CA3A4
 * Callers:
 *     CMFReadCompressedSegment @ 0x140958F40 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140773920 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[26] == 903790814 )
    {
      a1[26] = 0;
      CMFFreeFn(0LL, a1);
    }
  }
}
