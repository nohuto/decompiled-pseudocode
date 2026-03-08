/*
 * XREFs of XpressDecodeClose @ 0x14067775C
 * Callers:
 *     CMFReadCompressedSegment @ 0x1409FF980 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140880F10 (CMFFreeFn.c)
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
