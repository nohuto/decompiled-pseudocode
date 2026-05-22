/*
 * XREFs of ?GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z @ 0x18015E660
 * Callers:
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C304 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D800 (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015EF40 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@P.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015F188 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrap.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::VariableSizeStructWrapperBase::GetRawValue(
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *this,
        unsigned __int8 **a2,
        unsigned __int64 *a3)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (const char *)*((_QWORD *)this + 1);
  if ( *((_QWORD *)this + 2) - (_QWORD)v3 < *(_QWORD *)this )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      52LL,
      (__int64)"onecoreuap\\analog\\Input\\Common\\inc\\HolographicDriverClientTypes.h",
      v3);
    __debugbreak();
  }
  *a2 = (unsigned __int8 *)&v3[*(_QWORD *)this];
  *a3 = *((_QWORD *)this + 2) - *((_QWORD *)this + 1) - *(_QWORD *)this;
}
