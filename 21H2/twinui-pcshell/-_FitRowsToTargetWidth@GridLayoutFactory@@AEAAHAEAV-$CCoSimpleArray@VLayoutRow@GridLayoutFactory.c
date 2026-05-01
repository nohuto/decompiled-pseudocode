/*
 * XREFs of ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1804282F0
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x180427E3C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x180427318 (-GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x180427398 (-GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x180427AA4 (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 *     ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x1804281DC (-_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x180428978 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_FitRowsToTargetWidth(
        GridLayoutFactory *this,
        const struct GridLayoutFactory::LayoutRow **a2)
{
  int TotalWidthForHeight; // r12d
  int v3; // r8d
  int v5; // r9d
  int v7; // ebp
  unsigned int v8; // esi
  GridLayoutFactory::LayoutRow *v9; // rdi
  const struct GridLayoutFactory::LayoutRow *v10; // rax
  __int64 v11; // r14
  int v12; // ebx
  signed int NextMaxHeight; // eax
  GridLayoutFactory::LayoutRow *v14; // rbx
  const struct GridLayoutFactory::LayoutRow *v15; // rbx
  __int64 v16; // r14
  GridLayoutFactory::LayoutItem *v17; // rdi
  __int64 v18; // rbp
  const struct GridLayoutFactory::LayoutRow *v19; // rbx
  __int64 v20; // rdi

  TotalWidthForHeight = 0;
  v3 = *((_DWORD *)this + 132);
  v5 = *((_DWORD *)this + 130);
  v7 = *((_DWORD *)*a2 + 8);
  v8 = v7;
  if ( v3 - v5 > 0 )
  {
    do
    {
      v9 = *a2;
      v8 = 0;
      v10 = a2[1];
      v11 = (__int64)*a2 + 48 * (_QWORD)v10;
      if ( *a2 != (const struct GridLayoutFactory::LayoutRow *)v11 )
      {
        do
        {
          v12 = *((_DWORD *)v9 + 8);
          if ( v12 < (int)GridLayoutFactory::LayoutRow::GetMaxHeight(v9) )
          {
            NextMaxHeight = GridLayoutFactory::LayoutRow::GetNextMaxHeight(v9);
            if ( !v8 || NextMaxHeight < (int)v8 )
              v8 = NextMaxHeight;
          }
          v9 = (GridLayoutFactory::LayoutRow *)((char *)v9 + 48);
        }
        while ( v9 != (GridLayoutFactory::LayoutRow *)v11 );
        v9 = *a2;
        v10 = a2[1];
      }
      TotalWidthForHeight = 0;
      v14 = (GridLayoutFactory::LayoutRow *)((char *)v9 + 48 * (_QWORD)v10);
      while ( v9 != v14 )
      {
        if ( TotalWidthForHeight <= (int)GridLayoutFactory::s_GetTotalWidthForHeight(
                                           v9,
                                           *((unsigned int *)v9 + 10),
                                           v8,
                                           0LL) )
          TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(v9, *((unsigned int *)v9 + 10), v8, 0LL);
        v9 = (GridLayoutFactory::LayoutRow *)((char *)v9 + 48);
      }
      v3 = *((_DWORD *)this + 132);
      if ( TotalWidthForHeight <= v3 - *((_DWORD *)this + 130) )
      {
        v15 = *a2;
        v16 = (__int64)*a2 + 48 * (_QWORD)a2[1];
        if ( *a2 != (const struct GridLayoutFactory::LayoutRow *)v16 )
        {
          do
          {
            v17 = *(GridLayoutFactory::LayoutItem **)v15;
            v18 = *(_QWORD *)v15 + 16LL * *((_QWORD *)v15 + 1);
            while ( v17 != (GridLayoutFactory::LayoutItem *)v18 )
            {
              GridLayoutFactory::LayoutItem::SetHeight(v17, v8);
              v17 = (GridLayoutFactory::LayoutItem *)((char *)v17 + 16);
            }
            *((_DWORD *)v15 + 8) = v8;
            v15 = (const struct GridLayoutFactory::LayoutRow *)((char *)v15 + 48);
          }
          while ( v15 != (const struct GridLayoutFactory::LayoutRow *)v16 );
          v3 = *((_DWORD *)this + 132);
        }
        v7 = v8;
      }
      v5 = *((_DWORD *)this + 130);
    }
    while ( TotalWidthForHeight < v3 - v5 );
  }
  if ( TotalWidthForHeight > v3 - v5 )
  {
    v7 = v8;
    v19 = *a2;
    v20 = (__int64)*a2 + 48 * (_QWORD)a2[1];
    while ( v19 != (const struct GridLayoutFactory::LayoutRow *)v20 )
    {
      if ( v7 >= (int)GridLayoutFactory::_FitRowToTargetWidth(this, v19) )
        v7 = GridLayoutFactory::_FitRowToTargetWidth(this, v19);
      v19 = (const struct GridLayoutFactory::LayoutRow *)((char *)v19 + 48);
    }
  }
  return (unsigned int)v7;
}
