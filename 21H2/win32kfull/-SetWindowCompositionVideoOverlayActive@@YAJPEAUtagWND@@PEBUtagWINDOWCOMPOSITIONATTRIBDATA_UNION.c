/*
 * XREFs of ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212E70
 * Callers:
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D2150 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080C74 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SetWindowCompositionVideoOverlayActive(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  _DWORD v7[16]; // [rsp+20h] [rbp-68h] BYREF

  v4 = -1073741816;
  memset(v7, 0, sizeof(v7));
  v5 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    if ( -__CFSHR__(v7[0], 8) == v5 )
    {
      return 0;
    }
    else
    {
      v7[0] = v7[0] & 0xFFFFFF7F | (v5 << 7);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute((__int64)a1);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
