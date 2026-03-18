/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C005FA80
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0060150 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C0165450 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01656A0 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01657EC (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01659A0 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B99B0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (xmmword_1C0295A4C & 1) != 0
    || (xmmword_1C0295A4C & 4) != 0
    || (dword_1C0295A44 & 1) != 0
    || (dword_1C0295A44 & 4) != 0
    || (dword_1C02959FC & 4) != 0
    || (dword_1C0295A24 & 1) != 0
    || (dword_1C0295A24 & 4) != 0
    || (dword_1C0295A0C & 1) != 0
    || (dword_1C0295A0C & 4) != 0
    || (dword_1C0298C94 & 1) != 0
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
