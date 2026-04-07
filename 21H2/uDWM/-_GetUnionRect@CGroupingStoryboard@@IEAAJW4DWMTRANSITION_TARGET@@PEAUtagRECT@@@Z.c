/*
 * XREFs of ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800B1AEC
 * Callers:
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x1800B1F48 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800B2240 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3480 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800B1B50 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_GetUnionRect(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  *a3 = 0LL;
  v5 = -2147024809;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, a2, &v7) >= 0 )
  {
    v5 = 0;
    *a3 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * v7) + 4LL);
  }
  return v5;
}
