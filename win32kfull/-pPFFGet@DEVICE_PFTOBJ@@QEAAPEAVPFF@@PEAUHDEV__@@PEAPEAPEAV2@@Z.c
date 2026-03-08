/*
 * XREFs of ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00039AC
 * Callers:
 *     GreEnumFonts @ 0x1C00037BC (GreEnumFonts.c)
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C011B194 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C026D824 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     DEVICE_PFTOBJ_pPFFGetWrap @ 0x1C026E440 (DEVICE_PFTOBJ_pPFFGetWrap.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029D774 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall DEVICE_PFTOBJ::pPFFGet(DEVICE_PFTOBJ *this, unsigned __int64 a2, struct PFF ***a3)
{
  struct PFF **v3; // rcx
  struct PFF *result; // rax

  v3 = (struct PFF **)(*(_QWORD *)this + 40LL + 8 * ((a2 >> 4) % *(unsigned int *)(*(_QWORD *)this + 24LL)));
  result = *v3;
  if ( a3 )
    *a3 = v3;
  while ( result && a2 != *((_QWORD *)result + 11) )
    result = (struct PFF *)*((_QWORD *)result + 1);
  return result;
}
