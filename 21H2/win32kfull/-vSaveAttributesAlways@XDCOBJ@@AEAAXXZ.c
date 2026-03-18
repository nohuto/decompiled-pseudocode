/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C012CA98
 * Callers:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiStartPage @ 0x1C012C8A0 (NtGdiStartPage.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C012CA70 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiEndPage @ 0x1C027ACD0 (NtGdiEndPage.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C012CAC0 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  if ( (unsigned int)XDCOBJ::SaveAttributesHelper(this) )
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
}
