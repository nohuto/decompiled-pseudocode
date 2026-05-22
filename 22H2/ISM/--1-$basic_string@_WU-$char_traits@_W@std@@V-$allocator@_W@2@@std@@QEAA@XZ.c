/*
 * XREFs of ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x1800C5808
 * Callers:
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$1 @ 0x1800CB8DE (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$1.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::SpatialInteractionObjectDevice_::_1_::dtor$2 @ 0x1800D5BD7 (_Windows--Internal--SpatialInteractions--SpatialInteractionObjectDevice--SpatialInt_ea_1800D5BD7.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::dtor$4 @ 0x18015A82D (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--dtor$4.c)
 *     __lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()_::_1_::dtor$0 @ 0x18016A60E (__lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(2 * v1 + 2));
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
