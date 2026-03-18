/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0088360
 * Callers:
 *     EngCreatePalette @ 0x1C0088260 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016F7F8 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C0175750 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0179378 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C02E572C (bInitPALOBJ.c)
 * Callees:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C001DB70 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0021390 (DEC_SHARE_REF_CNT.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C016B444 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(PALMEMOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  void *v4; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    if ( *((_DWORD *)this + 2) || (v3 = HmgRemoveObject(*(_QWORD *)v2, 0, 1, 1, 8, 0LL), v2 = *(_QWORD *)this, !v3) )
    {
      DEC_SHARE_REF_CNT((unsigned int *)v2);
      *(_QWORD *)this = 0LL;
    }
    else
    {
      if ( v2 != *(_QWORD *)(v2 + 120) )
      {
        v5 = *(_QWORD *)(v2 + 120);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v5);
        v2 = *(_QWORD *)this;
      }
      v4 = *(void **)(v2 + 104);
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool(*(char **)(v2 + 104));
          v2 = *(_QWORD *)this;
        }
        *(_QWORD *)(v2 + 104) = 0LL;
      }
      XEPALOBJ::FreePaletteMemory(this);
    }
  }
}
