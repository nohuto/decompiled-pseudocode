/*
 * XREFs of ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180164118
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C16C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C304 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUHOLOGRAPHIC_DEVICE_SUPPORTED_DDI_LEVELS@@@Z @ 0x18015EDD4 (-GetSupportedDDILevelsInternal@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJPEAUH.c)
 *     ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x180161440 (-OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEA.c)
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180161CE0 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcmp_0 @ 0x18004B24F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_1 @ 0x18011A468 (memcpy_s_1.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801558BC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x180155C6C (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@Prop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Windows::Internal::Holographic::PropertyCache::SetValue(
        Windows::Internal::Holographic::PropertyCache *this,
        const struct _GUID *a2,
        const void *a3,
        size_t a4)
{
  RTL_SRWLOCK *v8; // rbp
  int v9; // r9d
  __int64 v10; // r14
  char *v11; // rsi
  __int64 v12; // rbx
  char *v13; // r15
  bool v14; // cf
  bool v15; // cc
  char v16; // bl
  char *v17; // rbx
  const char *v18; // r9
  __int64 v20[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = (RTL_SRWLOCK *)((char *)this + 32);
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>::_Try_emplace<_GUID const &,>(
    (__int64 *)this + 5,
    (__int64)v20,
    a2,
    v9);
  v10 = v20[0];
  v11 = *(char **)(v20[0] + 56);
  v12 = *(_QWORD *)(v20[0] + 48);
  v13 = &v11[-v12];
  v14 = a4 < (unsigned __int64)&v11[-v12];
  v15 = a4 <= (unsigned __int64)&v11[-v12];
  if ( (char *)a4 == &v11[-v12] )
  {
    if ( !memcmp_0(*(const void **)(v20[0] + 48), a3, a4) )
    {
      v16 = 0;
      goto LABEL_14;
    }
    v14 = a4 < (unsigned __int64)v13;
    v15 = a4 <= (unsigned __int64)v13;
  }
  if ( v14 )
  {
    v11 = (char *)(v12 + a4);
    *(_QWORD *)(v10 + 56) = v12 + a4;
  }
  else if ( !v15 )
  {
    if ( a4 <= *(_QWORD *)(v10 + 64) - v12 )
    {
      v17 = (char *)(a4 + v12);
      memset_0(v11, 0, v17 - v11);
      *(_QWORD *)(v10 + 56) = v17;
      v11 = v17;
    }
    else
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v10 + 48, a4);
      v11 = *(char **)(v10 + 56);
    }
  }
  if ( memcpy_s_1(*(void *const *)(v10 + 48), (const rsize_t)&v11[-*(_QWORD *)(v10 + 48)], a3, a4) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      129LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyCache.h",
      v18);
    __debugbreak();
  }
  (*(void (__fastcall **)(Windows::Internal::Holographic::PropertyCache *, const struct _GUID *, __int64))(*(_QWORD *)this + 16LL))(
    this,
    a2,
    v10 + 48);
  v16 = 1;
LABEL_14:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v16;
}
