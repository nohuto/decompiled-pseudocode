/*
 * XREFs of ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B9B60
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00F9A30 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxSwitchWndProc @ 0x1C01CC6D0 (xxxSwitchWndProc.c)
 */

__int64 __fastcall xxxWrapSwitchWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxSwitchWndProc(a1);
  else
    return 0LL;
}
