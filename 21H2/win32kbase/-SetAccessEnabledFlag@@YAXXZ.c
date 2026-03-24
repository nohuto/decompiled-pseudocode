/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C000C420
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C000DFA0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z @ 0x1C01383A4 (-SpiSetAccessTimeOut@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138644 (-SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z @ 0x1C01387B4 (-SpiSetStickyKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z @ 0x1C0138944 (-SpiSetToggleKeys@@YAHKPEAXHHPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183BE0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (xmmword_1C0250C04 & 1) != 0
    || (xmmword_1C0250C04 & 4) != 0
    || (dword_1C0250C1C & 1) != 0
    || (dword_1C0250C1C & 4) != 0
    || (dword_1C0250BBC & 4) != 0
    || (dword_1C0250BD4 & 1) != 0
    || (dword_1C0250BD4 & 4) != 0
    || (dword_1C0250BCC & 1) != 0
    || (dword_1C0250BCC & 4) != 0
    || (dword_1C0253ED4 & 1) != 0
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
