/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440
 * Callers:
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z @ 0x1C002D400 (-EngDeletePaletteInternal@@YAHPEAVEPALOBJ@@@Z.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0057B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C019925C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0048350 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C0048AE0 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(struct OBJECT **this)
{
  struct OBJECT *v2; // rdi
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  if ( *this
    && ((*((_DWORD *)*this + 6) & 0x5000000) == 0x1000000
     || !(unsigned int)XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)this, 0)) )
  {
    v2 = *this;
    HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v3, *this, 0, 0, 1);
    if ( v4 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v3 + 14), v2);
      --*((_DWORD *)v2 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
      if ( v4 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v3);
    }
    *this = 0LL;
  }
}
