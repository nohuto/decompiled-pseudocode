/*
 * XREFs of HmgIncrementShareReferenceCount @ 0x1C003FFA0
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0062100 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0088B30 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00B41E0 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0150B20 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0161D84 (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016C3DC (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0042940 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00444D0 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
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
