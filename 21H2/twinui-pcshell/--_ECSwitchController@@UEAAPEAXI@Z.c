/*
 * XREFs of ??_ECSwitchController@@UEAAPEAXI@Z @ 0x18043ABC0
 * Callers:
 *     ??_ECSwitchController@@WBI@EAAPEAXI@Z @ 0x18016FA90 (--_ECSwitchController@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFD3C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

CSwitchController *__fastcall CSwitchController::`vector deleting destructor'(CSwitchController *this, char a2)
{
  *((_DWORD *)this + 25) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CSwitchController *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
