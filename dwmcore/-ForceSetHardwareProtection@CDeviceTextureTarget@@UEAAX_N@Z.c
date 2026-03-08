/*
 * XREFs of ?ForceSetHardwareProtection@CDeviceTextureTarget@@UEAAX_N@Z @ 0x180107B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::ForceSetHardwareProtection(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 32) = a2;
}
