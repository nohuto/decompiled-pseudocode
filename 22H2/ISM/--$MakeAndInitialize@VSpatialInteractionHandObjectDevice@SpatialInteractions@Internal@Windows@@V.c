/*
 * XREFs of ??$MakeAndInitialize@VSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@V1234@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@234@AEAPEAUISpatialObjectDDIClientFactory@Holographic@34@AEAPEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAPEAUISpatialInteractionSourceDeviceCollectionInternal@456@AEAPEAUISpatialObjectDDIClientFactory@Holographic@56@AEAPEB_W$$QEAPEAUISpatialObjectDevice@956@$$QEAPEAUISpatialObject@956@@Z @ 0x1800D4CD4
 * Callers:
 *     ?CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@SAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WV?$function@$$A6AJPEAVSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800D7110 (-CreateSpatialInteractionObjectDevices@SpatialInteractionObjectDevice@SpatialInteractions@Intern.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800D5A6C (--0SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800E18C0 (-RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice,Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal * &,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory * &,wchar_t const * &,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice **a1,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal **a2,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory **a3,
        const wchar_t **a4,
        struct Windows::Internal::Holographic::ISpatialObjectDevice **a5,
        struct Windows::Internal::Holographic::ISpatialObject **a6)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *v10; // rax
  int v11; // edi
  Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *v12; // rbx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  *a1 = 0LL;
  v10 = (Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *)operator new(
                                                                                        0xD8uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
  v14[0] = (__int64)v10;
  if ( v10 )
  {
    v14[1] = (__int64)v10;
    v12 = (Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *)Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::SpatialInteractionHandObjectDevice(v10);
    v14[0] = (__int64)v12;
    v11 = Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::RuntimeClassInitialize(
            v12,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
