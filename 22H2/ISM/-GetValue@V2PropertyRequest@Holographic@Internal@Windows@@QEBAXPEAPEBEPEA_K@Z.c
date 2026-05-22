/*
 * XREFs of ?GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z @ 0x18015F39C
 * Callers:
 *     ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x180161440 (-OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEA.c)
 *     ?OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2NodePropertyRequest@234@J@Z @ 0x180161680 (-OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@XZ @ 0x18015D144 (-GetHeaderRef@V2PropertyRequest@Holographic@Internal@Windows@@IEBAAEBUHOLOGRAPHIC_DEVICE_PROPERT.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::GetValue(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        const unsigned __int8 **a2,
        unsigned __int64 *a3,
        const char *a4)
{
  const struct HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2 *HeaderRef; // rax
  const char *v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 26) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      235LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      a4);
    __debugbreak();
  }
  HeaderRef = Windows::Internal::Holographic::V2PropertyRequest::GetHeaderRef(this, (__int64)a2, (__int64)a3, a4);
  v9 = *((_QWORD *)this + 10);
  v10 = *(unsigned int *)HeaderRef;
  if ( *((_QWORD *)this + 11) - v9 != v10 + 12 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      239LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      v8);
    __debugbreak();
  }
  *a2 = (const unsigned __int8 *)(v9 + 12);
  *a3 = v10;
}
