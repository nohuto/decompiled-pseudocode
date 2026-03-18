/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001A590 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0025050 (--1SURFMEM@@QEAA@XZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0088360 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B0820 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C016B4F4 (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016F7F8 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C016B444 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(XEPALOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 0x1000000) != 0 || !HmgRemoveObject(*(_QWORD *)v2, 0, 1, 0, 8, 0LL) )
    {
      DEC_SHARE_REF_CNT(*(_QWORD *)this);
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v3 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 24LL) & 0x800) != 0 && *(_QWORD *)(v3 + 48) )
      {
        v5 = *(_QWORD *)(v3 + 48);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *(_QWORD *)this;
      }
      if ( v3 != *(_QWORD *)(v3 + 120) )
      {
        v5 = *(_QWORD *)(v3 + 120);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *(_QWORD *)this;
      }
      v4 = *(void **)(v3 + 104);
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool(*(PVOID *)(v3 + 104));
          v3 = *(_QWORD *)this;
        }
        *(_QWORD *)(v3 + 104) = 0LL;
      }
      XEPALOBJ::FreePaletteMemory(this);
    }
  }
}
