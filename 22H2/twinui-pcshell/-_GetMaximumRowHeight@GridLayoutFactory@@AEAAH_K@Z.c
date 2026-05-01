/*
 * XREFs of ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x18042811C
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x180427AAC (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 *     ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x180428340 (-_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PP.c)
 * Callees:
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x180409610 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ?_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ @ 0x1804281B4 (-_GetMaximumVisibleRows@GridLayoutFactory@@AEAA_KXZ.c)
 */

__int64 __fastcall GridLayoutFactory::_GetMaximumRowHeight(GridLayoutFactory *this, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // eax

  v4 = *((_DWORD *)this + 29)
     + *((_DWORD *)this + 38)
     + *((_DWORD *)this + 39)
     + *((_DWORD *)this + 42)
     + *((_DWORD *)this + 43)
     + ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 88), *((_DWORD *)this + 129));
  if ( a2 >= GridLayoutFactory::_GetMaximumVisibleRows(this) )
    LODWORD(a2) = GridLayoutFactory::_GetMaximumVisibleRows(this);
  v5 = *((_DWORD *)this + 13) * (a2 - 1);
  v6 = *((_DWORD *)this + 133) - *((_DWORD *)this + 131);
  if ( (int)(v5 + v4 * a2) > v6 )
    return (unsigned int)((v6 - v5) / (int)a2);
  return v4;
}
