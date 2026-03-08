/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C027A344
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278BE8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0279074 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C027A2E4 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     NtGdiEndPage @ 0x1C027AC90 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C027B830 (NtGdiStartPage.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00F5BEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  if ( (unsigned int)XDCOBJ::SaveAttributesHelper(this) )
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
}
