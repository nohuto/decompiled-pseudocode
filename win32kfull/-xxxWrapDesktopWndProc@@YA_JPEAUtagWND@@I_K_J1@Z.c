/*
 * XREFs of ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00F9A30 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxDesktopWndProc @ 0x1C00FA150 (xxxDesktopWndProc.c)
 */

__int64 __fastcall xxxWrapDesktopWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxDesktopWndProc(a1, a2, a3, a4);
  else
    return 0LL;
}
