/*
 * XREFs of ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212FE0
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080C74 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SetWindowMaximizeAnimation(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  unsigned int v5; // ebx
  _DWORD v7[16]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(int *)a2;
  v3 = *((_DWORD *)a2 + 1);
  if ( (unsigned int)v2 > 2 || v3 && __PAIR64__(v3, v2) != 0x100000000LL && (v3 & 0xFF000000) != 0xFF000000 )
    return 3221225485LL;
  v5 = -1073741816;
  memset(v7, 0, sizeof(v7));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    if ( v7[v2 + 11] == v3 )
    {
      return 0;
    }
    else
    {
      v7[v2 + 11] = v3;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute((__int64)a1);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v5;
}
