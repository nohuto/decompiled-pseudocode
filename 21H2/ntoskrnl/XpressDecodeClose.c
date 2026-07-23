/*
 * XREFs of XpressDecodeClose @ 0x1405CA694
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409590C0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140773C30 (CMFFreeFn.c)
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
