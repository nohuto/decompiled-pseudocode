/*
 * XREFs of ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180159C00
 * Callers:
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014EDA4 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrappe.c)
 *     ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014EF60 (--$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWra.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18015EAC0 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015EF40 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@P.c)
 *     ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015F188 (-GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrap.c)
 *     ?TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL_NODE_ID@@@Z @ 0x1801666C0 (-TrimDurableStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJIPEBUSPATIAL.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801558BC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 */

__int64 __fastcall Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *this,
        __int64 a2)
{
  unsigned __int64 v2; // rdx
  char *v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rbx

  v2 = *(_QWORD *)this + a2;
  v3 = (char *)this + 8;
  v4 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)v3 + 1) - v4;
  if ( v2 >= v5 )
  {
    if ( v2 > v5 )
    {
      if ( v2 > *((_QWORD *)v3 + 2) - v4 )
      {
        try
        {
          std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>((__int64)v3, v2);
        }
        catch ( std::bad_alloc )
        {
          return 2147942414LL;
        }
      }
      else
      {
        v6 = v4 + v2;
        memset_0(*((void **)v3 + 1), 0, v4 + v2 - *((_QWORD *)v3 + 1));
        *((_QWORD *)v3 + 1) = v6;
      }
    }
  }
  else
  {
    *((_QWORD *)v3 + 1) = v4 + v2;
  }
  return 0LL;
}
