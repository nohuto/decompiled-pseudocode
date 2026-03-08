/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@YAPEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@_KAEAV?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@0@@Z @ 0x1801BCB28
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801BCA34 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V-$allo.c)
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x1801C1C18 (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Instance_Pos4_QRot_ColorDW_Size2>>(
        char *a1,
        __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 48 * a2;
    memset_0(a1, 0, 48 * a2);
    v2 += v3;
  }
  return v2;
}
