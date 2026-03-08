/*
 * XREFs of ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B9B00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00F9A30 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 */

__int64 __fastcall xxxWrapSBWndProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxSBWndProc(a1);
  else
    return 0LL;
}
