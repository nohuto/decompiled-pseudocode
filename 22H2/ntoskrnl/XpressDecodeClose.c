/*
 * XREFs of XpressDecodeClose @ 0x140679DAC
 * Callers:
 *     CMFReadCompressedSegment @ 0x140A02670 (CMFReadCompressedSegment.c)
 * Callees:
 *     CMFFreeFn @ 0x140885CF0 (CMFFreeFn.c)
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
