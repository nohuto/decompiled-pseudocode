/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@0AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012AC50
 * Callers:
 *     _std::vector_InputSpacePayload_std::allocator_InputSpacePayload___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_&__::_1_::catch$40 @ 0x18012AEB9 (_std--vector_InputSpacePayload_std--allocator_InputSpacePayload___--_Emplace_reallo_ea_18012AEB9.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x18012BC7C (--$_Uninitialized_move@PEAUInputSpacePayload@@PEAU1@V-$allocator@UInputSpacePayload@@@std@@@std@.c)
 *     ??$_Visit@V_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@std@@@?$_Variant_raw_visit1@$01@std@@SAX_K$$QEAV_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV?$_Variant_storage_@$0A@Umonostate@std@@UHeatInputConfigContextMessage@@UHeatLowPowerStateContextMessage@@UHeatHingeAngleContextMessage@@UHeatDisplayOcclusionContextMessage@@UHeatVirtualTouchpadContextMessage@@@1@@Z @ 0x18012BD08 (--$_Visit@V_lambda_7c9a1ed22efa7e719e5ba754edc265b7_@@AEAV-$_Variant_storage_@$0A@Umonostate@std.c)
 *     ??1?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ @ 0x18012C564 (--1-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x18012D728 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Destroy_range<std::allocator<InputSpacePayload>>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 4;
    do
    {
      v4 = (void *)*(v3 - 2);
      if ( v4 )
      {
        std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(200 * ((*v3 - (_QWORD)v4) / 200LL)));
        *(v3 - 2) = 0LL;
        *(v3 - 1) = 0LL;
        *v3 = 0LL;
      }
      v3 += 5;
      result = v3 - 4;
    }
    while ( v3 - 4 != a2 );
  }
  return result;
}
