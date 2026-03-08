/*
 * XREFs of _CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018 @ 0x1C01DD61C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BB60C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyWorker_::_2_::_AUTO_USING_PM_PathChanged3018::__AUTO_USING_PM_PathChanged3018(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 256) &= ~0x10u )
  {
    v2 = i++;
    v3 = 296 * v2;
    *(_DWORD *)(v3 + *a1 + 272) = 0;
    result = *a1;
  }
  return result;
}
