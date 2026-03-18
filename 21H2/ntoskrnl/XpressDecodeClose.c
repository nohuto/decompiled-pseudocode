/*
 * XREFs of XpressDecodeClose @ 0x140654B84
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A04C34 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x1406EB7B0 (CMFFreeFn.c)
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
