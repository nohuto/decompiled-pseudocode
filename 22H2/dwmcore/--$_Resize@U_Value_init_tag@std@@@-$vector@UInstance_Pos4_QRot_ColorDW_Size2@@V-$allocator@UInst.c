/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180169554
 * Callers:
 *     ?InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ @ 0x18016ED5C (-InitializeParticleLists@CParticleEmitterVisual@@IEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V?$allocator@UInstance_Pos4_QRot_ColorDW_Size2@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180169614 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UInstance_Pos4_QRot_ColorDW_Size2@@V-$allo.c)
 */

__int64 __fastcall std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rbx

  v2 = (char *)a1[1];
  result = (unsigned __int64)((unsigned __int128)((__int64)&v2[-*a1] * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v5 = (__int64)&v2[-*a1] / 48;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      v6 = a1[2] - *a1;
      result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
      if ( a2 <= v6 / 48 )
      {
        v7 = a2 - v5;
        if ( a2 != v5 )
        {
          v8 = 48 * v7;
          result = (__int64)memset_0(v2, 0, 48 * v7);
          v2 += v8;
        }
        a1[1] = v2;
      }
      else
      {
        return std::vector<Instance_Pos4_QRot_ColorDW_Size2>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      }
    }
  }
  else
  {
    result = *a1 + 48 * a2;
    a1[1] = result;
  }
  return result;
}
