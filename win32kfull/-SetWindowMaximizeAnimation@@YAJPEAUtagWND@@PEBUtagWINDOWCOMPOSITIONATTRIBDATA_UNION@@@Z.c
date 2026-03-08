/*
 * XREFs of ?SetWindowMaximizeAnimation@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0014AE4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0027E28 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C002DAB8 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SetWindowMaximizeAnimation(struct tagWND *a1, const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  __int64 v2; // rsi
  int v4; // edi
  unsigned int v6; // ebx
  _BYTE v8[64]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(int *)a2;
  v4 = *((_DWORD *)a2 + 1);
  if ( (unsigned int)v2 > 2 )
    return 3221225485LL;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (unsigned int)v2 <= 1 )
        goto LABEL_5;
    }
    else if ( (v4 & 0xFF000000) == 0xFF000000 )
    {
      goto LABEL_5;
    }
    return 3221225485LL;
  }
LABEL_5:
  v6 = -1073741816;
  memset_0(v8, 0, sizeof(v8));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v8) )
  {
    if ( *(_DWORD *)&v8[4 * v2 + 44] == v4 )
    {
      return 0;
    }
    else
    {
      *(_DWORD *)&v8[4 * v2 + 44] = v4;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 28LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v6;
}
