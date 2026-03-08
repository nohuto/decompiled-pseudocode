/*
 * XREFs of ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C01F804C
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C00402A0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall GetWindowMinimizeAnimation(struct tagWND *a1, enum CORNER_STYLE *a2)
{
  unsigned int v4; // edi
  _BYTE v6[40]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+48h] [rbp-30h]

  v4 = -1073741816;
  memset_0(v6, 0, 0x40uLL);
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v6) )
  {
    v4 = 0;
    *(_DWORD *)a2 = v7;
  }
  return v4;
}
