/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ_K@Z @ 0x180427960
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x180427E3C (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ??1?$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@URecoveredViewInfo@@@@@@QEAA@XZ @ 0x18031020C (--1-$CCoSimpleArray@URecoveredViewInfo@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@URecover.c)
 */

__int64 __fastcall CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // rdx

  if ( a2 >= a1[1] )
    return 2147650721LL;
  v5 = 48 * a2;
  CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>::~CCoSimpleArray<RecoveredViewInfo,4294967294,CSimpleArrayStandardCompareHelper<RecoveredViewInfo>>(48 * a2 + *a1);
  v6 = a1[1];
  if ( a2 != v6 - 1 )
  {
    memmove_0((void *)(v5 + *a1), (const void *)(v5 + *a1 + 48), 48 * (v6 - a2) - 48);
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return 0LL;
}
