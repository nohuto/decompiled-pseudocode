/*
 * XREFs of ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800120A8
 * Callers:
 *     ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180012060 (--_EUdwmDcompVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180013944 (-ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DCDC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall UdwmDcompVisual::~UdwmDcompVisual(UdwmDcompVisual *this)
{
  *(_QWORD *)this = &UdwmDcompVisual::`vftable';
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 80);
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 16));
  SharedDwmDcompVisual::ReleaseResources((UdwmDcompVisual *)((char *)this + 48));
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 80);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 64);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 56);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 24);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
