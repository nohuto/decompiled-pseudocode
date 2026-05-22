/*
 * XREFs of ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180161CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800A8F58 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     _lambda_2b98ef75b445f08568c37aeca5d9510e_::operator() @ 0x1801585B0 (_lambda_2b98ef75b445f08568c37aeca5d9510e_--operator().c)
 *     _lambda_cba08b96e4acaa4f1bd67338dd697b1d_::operator() @ 0x180158794 (_lambda_cba08b96e4acaa4f1bd67338dd697b1d_--operator().c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180164118 (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::PrecacheProperties(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  char v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  char v13; // [rsp+80h] [rbp+10h] BYREF
  char v14; // [rsp+88h] [rbp+18h] BYREF
  ULONGLONG TickCount64; // [rsp+90h] [rbp+20h] BYREF

  *((_BYTE *)this + 137) = 1;
  v9 = 0LL;
  v11 = 0LL;
  TickCount64 = GetTickCount64();
  v7[0] = &TickCount64;
  v7[1] = (char *)this - 24;
  v6[0] = (char *)this - 24;
  v6[1] = &v9;
  v10 = 0LL;
  v2 = lambda_cba08b96e4acaa4f1bd67338dd697b1d_::operator()(
         v6,
         (__int64)&SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
         (__int64)Windows::Internal::Holographic::ValidateProperty::Boolean);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1790LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v2);
    v13 = 0;
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 200),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_FORWARD_ONLY,
      &v13,
      1uLL);
  }
  v3 = lambda_cba08b96e4acaa4f1bd67338dd697b1d_::operator()(
         v6,
         (__int64)&SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
         (__int64)Windows::Internal::Holographic::ValidateProperty::Boolean);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1796LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v3);
    v14 = 0;
    Windows::Internal::Holographic::PropertyCache::SetValue(
      (Windows::Internal::Holographic::SpatialGraphDriverClient *)((char *)this + 200),
      &SPATIAL_GRAPH_DEVICE_PROPERTY_SITTING_STANDING_ONLY,
      &v14,
      1uLL);
  }
  v4 = lambda_cba08b96e4acaa4f1bd67338dd697b1d_::operator()(
         v6,
         (__int64)&SPATIAL_GRAPH_DEVICE_PROPERTY_FLOOR_FINDER,
         (__int64)Windows::Internal::Holographic::ValidateProperty::Guid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1802LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v4);
  std::vector<unsigned char>::_Tidy((__int64)&v10);
  v8 = 0;
  lambda_2b98ef75b445f08568c37aeca5d9510e_::operator()((__int64)v7);
  return 0LL;
}
