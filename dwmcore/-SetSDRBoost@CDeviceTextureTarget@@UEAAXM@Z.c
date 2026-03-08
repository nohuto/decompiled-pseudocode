/*
 * XREFs of ?SetSDRBoost@CDeviceTextureTarget@@UEAAXM@Z @ 0x180107BB8
 * Callers:
 *     ?SetSDRBoost@CDeviceTextureTarget@@$4PPPPPPPM@A@EAAXM@Z @ 0x18011C4D0 (-SetSDRBoost@CDeviceTextureTarget@@$4PPPPPPPM@A@EAAXM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetSDRBoost(CDeviceTextureTarget *this, float a2)
{
  *((float *)this - 33) = a2;
}
