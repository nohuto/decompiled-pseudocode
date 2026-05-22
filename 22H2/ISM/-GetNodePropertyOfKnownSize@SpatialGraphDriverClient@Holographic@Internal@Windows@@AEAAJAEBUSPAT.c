/*
 * XREFs of ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D68C
 * Callers:
 *     ?GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAH@Z @ 0x18015C4B0 (-GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Inter_ea_18015C4B0.c)
 *     ?GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAE@Z @ 0x18015C8A0 (-GetDynamicNodeHapticsIntensityLevels@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEA.c)
 *     ?GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAI@Z @ 0x18015CA00 (-GetDynamicNodeHapticsOutputPeriodMicroseconds@SpatialGraphDriverClient@Holographic_ea_18015CA00.c)
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18015CB60 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAX_K@Z @ 0x18014EB70 (--$GetPropertyOfKnownSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@H.c)
 *     ??$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0AEB_N@Z @ 0x18014F998 (--$NodePropertyCacheMiss@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBU1@AEB_N@HolographicDriverClientTrac.c)
 *     ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_K@Z @ 0x18015F098 (-GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@_ea_18015F098.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163F7C (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfKnownSize(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        struct _GUID *a3,
        void *a4,
        rsize_t DestinationSize,
        __int64 (__fastcall *a6)(void *, rsize_t),
        char a7)
{
  char v11; // bl
  bool v12; // al
  int PropertyOfKnown; // ebx
  __int64 v14; // rdx
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v16; // rcx
  struct _GUID v17; // xmm1
  char v18; // [rsp+30h] [rbp-68h] BYREF
  int v19[4]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v20; // [rsp+48h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v11 = 1;
  v12 = (a7 & 1) != 0 || *(_BYTE *)(a1 + 161) && (a7 & 2) == 0;
  if ( (a7 & 2) != 0 || !*(_BYTE *)(a1 + 161) )
  {
    v18 = 1;
  }
  else
  {
    v18 = 0;
    v11 = 0;
  }
  if ( v12 )
  {
    if ( Windows::Internal::Holographic::NodePropertyCache::GetValue(
           (Windows::Internal::Holographic::NodePropertyCache *)(a1 + 280),
           a2,
           a3,
           a4,
           DestinationSize) >= 0 )
      return 0LL;
    HolographicDriverClientTrace::NodePropertyCacheMiss<_GUID const &,SPATIAL_NODE_ID const &,_GUID const &,bool const &>(
      (struct _GUID *)(a1 + 80),
      a2,
      a3,
      (bool *)&v18);
  }
  if ( !v11 )
  {
    PropertyOfKnown = -2147023728;
    v14 = 1446LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)PropertyOfKnown);
    return (unsigned int)PropertyOfKnown;
  }
  v16 = *(Windows::Internal::Holographic::HolographicDriverHandleWrapper **)(a1 + 96);
  v17 = *a3;
  v20 = *(_OWORD *)a2;
  *(struct _GUID *)v19 = v17;
  PropertyOfKnown = Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfKnownSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
                      v16,
                      0x5B8418u,
                      v19,
                      0x20u,
                      a4,
                      DestinationSize);
  if ( PropertyOfKnown < 0 )
  {
    v14 = 1461LL;
    goto LABEL_15;
  }
  PropertyOfKnown = a6(a4, DestinationSize);
  if ( PropertyOfKnown < 0 )
  {
    v14 = 1463LL;
    goto LABEL_15;
  }
  Windows::Internal::Holographic::NodePropertyCache::SetValue((struct _GUID *)(a1 + 280), a2, a3, a4, DestinationSize);
  return 0LL;
}
