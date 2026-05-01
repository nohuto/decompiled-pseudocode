/*
 * XREFs of ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x180427AAC
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x180417E90 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x18030FF9C (--1-$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@URecover.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x180409610 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x180426CEC (GridLayoutFactory--_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x180427560 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?RemoveAt@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ_K@Z @ 0x1804275D0 (-RemoveAt@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayoutR.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x180427830 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x180427F60 (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x18042811C (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804285E8 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

_QWORD *__fastcall GridLayoutFactory::_CalculateRowSize(_DWORD *a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 *v7; // rbx
  int v8; // r15d
  __int64 v9; // rsi
  int TotalWidthForHeight; // eax
  int MaximumRowHeight; // eax
  __int64 *v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+48h] BYREF

  LODWORD(v23) = a1[132] - a1[130];
  v4 = a1[29]
     + a1[38]
     + a1[39]
     + a1[42]
     + a1[43]
     + ThumbnailHeight::GetForScreenHeight((ThumbnailHeight *)(a1 + 18), a1[129]);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  HIDWORD(v23) = v4;
  v13 = &v17;
  v14 = &v23;
  v5 = GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___((__int64)a1, (__int64)&v13);
  if ( v18 )
  {
    if ( v5 >= 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v6 = GridLayoutFactory::_CalculateNumberOfRows((GridLayoutFactory *)a1, (__int64)&v17, (__int64)&v13, &v24, &v22);
      if ( v6 >= 0 )
      {
        if ( v22 < a1[132] - a1[130] )
        {
          v7 = v14;
          v8 = 0;
          if ( !v14 )
            goto LABEL_16;
          v9 = 6LL * (_QWORD)v14;
          do
          {
            TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(
                                    &v13[v9 - 6],
                                    LODWORD(v13[v9 - 1]),
                                    *((unsigned int *)&v13[v9 - 1] - 1),
                                    0LL);
            if ( v8 <= TotalWidthForHeight )
              v8 = TotalWidthForHeight;
            if ( TotalWidthForHeight <= a1[132] - a1[130] )
              CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAt(
                &v13,
                (unsigned __int64)v7 - 1);
            v9 -= 6LL;
            v7 = (__int64 *)((char *)v7 - 1);
          }
          while ( v7 );
          if ( v14 )
          {
            MaximumRowHeight = GridLayoutFactory::_FitRowsToTargetWidth((GridLayoutFactory *)a1);
          }
          else
          {
LABEL_16:
            LODWORD(v23) = v8;
            MaximumRowHeight = GridLayoutFactory::_GetMaximumRowHeight((GridLayoutFactory *)a1, v24);
          }
          HIDWORD(v23) = MaximumRowHeight;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12C,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v6);
      }
      CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll((__int64)&v13);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  else
  {
    HIDWORD(v23) = GridLayoutFactory::_GetMaximumRowHeight((GridLayoutFactory *)a1, 1uLL);
  }
  *a2 = v23;
  CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>((__int64)&v17);
  return a2;
}
