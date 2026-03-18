/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C02779B4
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0276204 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0276684 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0277954 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     NtGdiEndPage @ 0x1C0278330 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C0278EF0 (NtGdiStartPage.c)
 * Callees:
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013E67C (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  if ( (unsigned int)XDCOBJ::SaveAttributesHelper(this) )
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
}
