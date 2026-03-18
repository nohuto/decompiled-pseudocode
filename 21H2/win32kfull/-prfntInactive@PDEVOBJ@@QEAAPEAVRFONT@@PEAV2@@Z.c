/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C000B524
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C000AD70 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0011AA8 (prfntDeactivateEudcRFONTs.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00DBBF8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02998C8 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C02A67E0 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A7404 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this, struct RFONT *a2)
{
  __int64 v2; // r8
  struct RFONT *result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 3496);
    result = *(struct RFONT **)(v4 + 1520);
    *(_QWORD *)(v4 + 1520) = a2;
  }
  else
  {
    result = *(struct RFONT **)(v2 + 1520);
    *(_QWORD *)(v2 + 1520) = a2;
  }
  return result;
}
