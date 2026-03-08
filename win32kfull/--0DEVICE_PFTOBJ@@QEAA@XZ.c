/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C00DF170
 * Callers:
 *     GreEnumFonts @ 0x1C00037BC (GreEnumFonts.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00DEFF0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     vLinkEudcPFEs @ 0x1C011177C (vLinkEudcPFEs.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029D774 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     vUnlinkEudcRFONTs @ 0x1C02A3018 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02A311C (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     <none>
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this)
{
  *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 20280LL);
  return this;
}
