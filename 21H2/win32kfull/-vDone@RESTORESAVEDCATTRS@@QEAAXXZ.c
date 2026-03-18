/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C012CA70
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiStartPage @ 0x1C012C8A0 (NtGdiStartPage.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiEndPage @ 0x1C027ACD0 (NtGdiEndPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C012CA98 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vDone(XDCOBJ **this)
{
  XDCOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
    XDCOBJ::vSaveAttributesAlways(v2);
  *this = 0LL;
}
