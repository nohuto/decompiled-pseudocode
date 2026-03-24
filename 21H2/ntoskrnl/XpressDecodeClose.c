/*
 * XREFs of XpressDecodeClose @ 0x1405CA464
 * Callers:
 *     CMFReadCompressedSegment @ 0x140958EF0 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140773A70 (CMFFreeFn.c)
 */

void __fastcall XpressDecodeClose(_DWORD *Buffer)
{
  if ( Buffer )
  {
    if ( Buffer[26] == 903790814 )
    {
      Buffer[26] = 0;
      CMFFreeFn(0LL, Buffer);
    }
  }
}
