/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C002A520
 * Callers:
 *     EngCreatePalette @ 0x1C007A2E0 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C01427C0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C0149420 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C014D58C (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C029A9B8 (bInitPALOBJ.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C002C350 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0080AE0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00C9248 (-DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C00C926C (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v2; // rcx
  struct HOBJ__ **v3; // rax
  unsigned __int8 *v4; // rcx
  struct HOBJ__ *v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( *((_DWORD *)this + 2) || !HmgRemoveObjectImpl(*v2, 0, 1, 1u, 8, 0LL) )
    {
      XEPALOBJ::DecShareRefCountAndInvalidatePalette((XEPALOBJ *)this);
    }
    else
    {
      v3 = *this;
      if ( *this != (struct HOBJ__ **)(*this)[15] )
      {
        v5 = (*this)[15];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v3 = *this;
      }
      v4 = (unsigned __int8 *)v3[13];
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool(v4);
          v3 = *this;
        }
        v3[13] = 0LL;
      }
      XEPALOBJ::FreePaletteMemory((XEPALOBJ *)this);
    }
  }
}
