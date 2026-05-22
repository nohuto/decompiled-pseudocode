/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___ @ 0x18014F4E0
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_3f94c1c330aebc4cd0e0e5305e75e493___ @ 0x180151398 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_180151398.c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800C6424 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     _lambda_2f7ec991c440bb20d82758962485f4cf_::operator() @ 0x180158610 (_lambda_2f7ec991c440bb20d82758962485f4cf_--operator().c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180167C90 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidL.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___(
        _QWORD *a1)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v2; // rbx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v2 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
  if ( *((_BYTE *)v2 + 120) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v2);
    v4 = v2;
    v3[0] = a1[1];
    v3[1] = v2;
    v3[2] = &v4;
    std::_Tree<std::_Tmap_traits<_GUID,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::map<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>>>>,0>>::find(
      (char *)v2 + 88,
      &v5,
      *a1);
    if ( v5 != *((_QWORD *)v2 + 11) )
    {
      lambda_2f7ec991c440bb20d82758962485f4cf_::operator()(v3, v5 + 48);
      v2 = v4;
    }
    if ( v2 )
      ReleaseSRWLockExclusive((PSRWLOCK)v2);
  }
}
