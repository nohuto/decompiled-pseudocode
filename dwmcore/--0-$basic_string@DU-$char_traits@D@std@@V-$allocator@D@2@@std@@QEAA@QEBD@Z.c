/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1801D5F40
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x18010BE9C (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1801D5FA4 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18024CE80 (-PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18024D4B0 (-PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1801D5CF0 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  size_t v4; // rdi

  *a1 = 0LL;
  a1[2] = 0LL;
  v4 = -1LL;
  a1[3] = 15LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 > 0xF )
  {
    std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>((__int64)a1, v4, a3, a2);
  }
  else
  {
    a1[2] = v4;
    memmove_0(a1, a2, v4);
    *((_BYTE *)a1 + v4) = 0;
  }
  return a1;
}
