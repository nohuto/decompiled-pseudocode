/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C002E1C0
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C000EC20 (vDynamicConvertNewSurfaceDCs.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C00BCD60 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C013BEC0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0142B10 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C01449E0 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 * Callees:
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C002FBA0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030700 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00316E0 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 */

void __fastcall HmgIncrementShareReferenceCount(struct OBJECT *a1)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]

  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v2, a1, 0, 0, 0);
  if ( v3 )
  {
    TrackHmgrReferenceIncrement(*(_BYTE *)(v2 + 14), a1);
    ++*((_DWORD *)a1 + 2);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v2);
    if ( v3 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v2);
  }
}
