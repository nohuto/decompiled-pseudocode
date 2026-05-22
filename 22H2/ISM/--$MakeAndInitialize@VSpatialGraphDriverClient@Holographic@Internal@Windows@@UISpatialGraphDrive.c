/*
 * XREFs of ??$MakeAndInitialize@VSpatialGraphDriverClient@Holographic@Internal@Windows@@UISpatialGraphDriverClient@234@AEAPEAUHSTRING__@@USpatialGraphSettings@234@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@$$QEAUSpatialGraphSettings@456@@Z @ 0x18014F76C
 * Callers:
 *     ?CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x18015B0B0 (-CreateSpatialGraphDriverClient@@YAJPEAUHSTRING__@@PEAPEAUISpatialGraphDriverClient@Holographic@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@@Z @ 0x1800B7BF0 (-Attach@-$ComPtr@VSpatialGraphDriverClient@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAXPE.c)
 *     ??0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ @ 0x180156BA0 (--0SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x180163A30 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Holographic::SpatialGraphDriverClient,Windows::Internal::Holographic::ISpatialGraphDriverClient,HSTRING__ * &,Windows::Internal::Holographic::SpatialGraphSettings>(
        _QWORD *a1,
        _QWORD *a2,
        _BYTE *a3)
{
  Windows::Internal::Holographic::SpatialGraphDriverClient *v6; // rax
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  Windows::Internal::Holographic::SpatialGraphDriverClient *v12; // [rsp+20h] [rbp-18h]
  Windows::Internal::Holographic::SpatialGraphDriverClient *v13; // [rsp+40h] [rbp+8h] BYREF
  Windows::Internal::Holographic::SpatialGraphDriverClient *v14; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (Windows::Internal::Holographic::SpatialGraphDriverClient *)operator new(
                                                                     0x190uLL,
                                                                     (const struct std::nothrow_t *)&std::nothrow);
  v14 = v6;
  v13 = v6;
  if ( v6 )
  {
    v12 = v6;
    v8 = Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient(v6);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Holographic::SpatialGraphDriverClient>::Attach((__int64 *)&v13, v8);
    v14 = 0LL;
    LOBYTE(v9) = *a3;
    v10 = (__int64)v13;
    v7 = Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize(v13, *a2, v9, 0LL, v12);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v10)(
             v10,
             &GUID_40636a97_be83_4b22_8a72_022beb8146ce,
             a1);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
