/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@YAPEAUCSM_REALIZATION_INFO@@PEAU1@_KAEAV?$allocator@UCSM_REALIZATION_INFO@@@0@@Z @ 0x1800EAE20
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EACCC (--$_Resize@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_REALIZATION_.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800EAD2C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_R.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CSM_REALIZATION_INFO>>(char *a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 40 * a2;
    memset_0(a1, 0, 40 * a2);
    v2 += v3;
  }
  return v2;
}
