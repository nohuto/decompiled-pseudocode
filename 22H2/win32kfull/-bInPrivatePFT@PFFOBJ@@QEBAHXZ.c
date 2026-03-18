/*
 * XREFs of ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1C00A8EE4
 * Callers:
 *     ?bFilterNotEnum@PFEOBJ@@QEAAHXZ @ 0x1C000474C (-bFilterNotEnum@PFEOBJ@@QEAAHXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0115DB0 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0115F0C (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0276040 (-GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFFOBJ::bInPrivatePFT(PFFOBJ *this)
{
  return *(_QWORD *)(*(_QWORD *)this + 128LL) == *((_QWORD *)Gre::Base::Globals(this) + 796);
}
