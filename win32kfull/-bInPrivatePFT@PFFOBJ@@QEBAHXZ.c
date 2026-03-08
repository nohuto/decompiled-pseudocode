/*
 * XREFs of ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1C0114D30
 * Callers:
 *     ?bFilterNotEnum@PFEOBJ@@QEAAHXZ @ 0x1C000414C (-bFilterNotEnum@PFEOBJ@@QEAAHXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0117434 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278A2C (-GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFFOBJ::bInPrivatePFT(PFFOBJ *this)
{
  return *(_QWORD *)(*(_QWORD *)this + 128LL) == *((_QWORD *)Gre::Base::Globals(this) + 796);
}
