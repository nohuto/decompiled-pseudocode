/*
 * XREFs of ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x180168828
 * Callers:
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x18016E9B8 (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180169958 (--0SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJXZ @ 0x18016EC68 (-RuntimeClassInitialize@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@Q.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,>(
        _QWORD *a1)
{
  Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *v2; // rax
  int v3; // edi
  Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *v4; // rbx

  *a1 = 0LL;
  v2 = (Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *)operator new(
                                                                                      0x88uLL,
                                                                                      (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *)Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SimpleTimeProvider(v2);
    v3 = Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_a933a9eb_3914_4eb6_af73_692a6fca813c,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
