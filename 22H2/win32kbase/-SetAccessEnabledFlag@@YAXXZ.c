/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C000D590
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C000F410 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0138674 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138914 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138A84 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138C14 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183B10 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (xmmword_1C024F974 & 1) != 0
    || (xmmword_1C024F974 & 4) != 0
    || (dword_1C024F944 & 1) != 0
    || (dword_1C024F944 & 4) != 0
    || (dword_1C024F91C & 4) != 0
    || (dword_1C024F94C & 1) != 0
    || (dword_1C024F94C & 4) != 0
    || (dword_1C024F93C & 1) != 0
    || (dword_1C024F93C & 4) != 0
    || (dword_1C0252EC4 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v0 = gdwPUDFlags | 0x100;
  }
  else
  {
    v0 = gdwPUDFlags & 0xFFFFFEFF;
  }
  gdwPUDFlags = v0;
}
