/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@YAPEAUScribbleFrame@CComputeScribbleScheduler@@PEAU12@_KAEAV?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@0@@Z @ 0x1801FF32C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801FF1D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UScribbleFrame@CComputeScribbleScheduler@@.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1802000E0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CComputeScribbleScheduler::ScribbleFrame>>(
        char *a1,
        __int64 a2)
{
  char *v3; // rdi

  v3 = a1;
  if ( a2 )
  {
    memset_0(a1, 0, 32 * a2);
    v3 += 32 * a2;
  }
  return v3;
}
