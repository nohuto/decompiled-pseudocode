/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EACCC
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18003DFE0 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EAD2C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_R.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@YAPEAUCSM_REALIZATION_INFO@@PEAU1@_KAEAV?$allocator@UCSM_REALIZATION_INFO@@@0@@Z @ 0x1800EAE20 (--$_Uninitialized_value_construct_n@V-$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@YAPEAUCSM_RE.c)
 */

void __fastcall std::vector<CSM_REALIZATION_INFO>::_Resize<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v2 = *a1;
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( a2 < v4 )
  {
    a1[1] = v2 + 40 * a2;
  }
  else if ( a2 > v4 )
  {
    if ( a2 <= 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v2) >> 3) )
      a1[1] = std::_Uninitialized_value_construct_n<std::allocator<CSM_REALIZATION_INFO>>(a1[1], a2 - v4);
    else
      std::vector<CSM_REALIZATION_INFO>::_Resize_reallocate<std::_Value_init_tag>(a1);
  }
}
