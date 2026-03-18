/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00A8438
 * Callers:
 *     GreEnumFonts @ 0x1C0003CEC (GreEnumFonts.c)
 *     vLinkEudcPFEs @ 0x1C00827D0 (vLinkEudcPFEs.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00A81E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00BDC38 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029ABC8 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029AFF8 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     vUnlinkEudcRFONTs @ 0x1C02A08BC (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02A09C0 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this)
{
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 20280LL);
  return this;
}
