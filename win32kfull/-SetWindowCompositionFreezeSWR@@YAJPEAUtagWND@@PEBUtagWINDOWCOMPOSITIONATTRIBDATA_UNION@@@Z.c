/*
 * XREFs of ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C000FCCC
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0027E28 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C002DAB8 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0043348 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C009C174 (PostIAMShellHookMessage.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SetWindowCompositionFreezeSWR(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // edi
  _DWORD v8[16]; // [rsp+20h] [rbp-68h] BYREF

  v4 = -1073741816;
  memset_0(v8, 0, sizeof(v8));
  v5 = *(_DWORD *)a2;
  v6 = *(_DWORD *)a2 != 0;
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v8) )
  {
    if ( -__CFSHR__(v8[0], 13) == v6 )
    {
      return 0;
    }
    else
    {
      v8[0] = v8[0] & 0xFFFFEFFF | (v6 << 12);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
      {
        v4 = _DwmAsyncSetCompositionAttribute(a1, 20LL, a2);
        if ( !v5 )
          PostIAMShellHookMessage(36LL, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
