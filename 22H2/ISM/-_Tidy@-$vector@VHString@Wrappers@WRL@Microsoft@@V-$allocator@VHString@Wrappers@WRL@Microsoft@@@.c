/*
 * XREFs of ?_Tidy@?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800C7198
 * Callers:
 *     ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800C5AA4 (--1-$vector@VHString@Wrappers@WRL@Microsoft@@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@.c)
 *     ?EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800C5E40 (-EnumerateDevices@SpatialInteractionDevices@@YAJU_GUID@@PEAV-$vector@VHString@Wrappers@WRL@Micro.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800D0DEC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrappers@WRL@Microsoft@@0AEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@0@@Z @ 0x1800C4760 (--$_Destroy_range@V-$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@YAXPEAVHString@Wrapp.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::_Tidy(__int64 a1)
{
  HSTRING *v1; // rdi

  v1 = *(HSTRING **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::Wrappers::HString>>(*(HSTRING **)a1, *(HSTRING **)(a1 + 8));
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
