/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0017820
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0017E70 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C017B404 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B654 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B7A0 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C017B954 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E48F0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (dword_1C02D159C & 1) != 0
    || (dword_1C02D159C & 4) != 0
    || (dword_1C02D1594 & 1) != 0
    || (dword_1C02D1594 & 4) != 0
    || (dword_1C02D154C & 4) != 0
    || (dword_1C02D1574 & 1) != 0
    || (dword_1C02D1574 & 4) != 0
    || (dword_1C02D155C & 1) != 0
    || (dword_1C02D155C & 4) != 0
    || (dword_1C02D49D4 & 1) != 0
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
