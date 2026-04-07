/*
 * XREFs of ?ReleaseDCompResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x1800141B0
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180012234 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ @ 0x180014184 (-ReleaseResources@SharedDwmDcompVisual@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SharedDwmDcompVisual::ReleaseDCompResources(SharedDwmDcompVisual *this)
{
  void *v2; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 8);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 16);
  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
}
