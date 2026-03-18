/*
 * XREFs of ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C011C73C
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C009313C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00932EC (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C02A8450 (NtGdiMakeObjectUnXferable.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
