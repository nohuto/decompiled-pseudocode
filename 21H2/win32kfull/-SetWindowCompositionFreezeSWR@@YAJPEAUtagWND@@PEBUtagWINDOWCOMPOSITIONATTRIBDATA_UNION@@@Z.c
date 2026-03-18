/*
 * XREFs of ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C010F8C4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0080C74 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
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
  memset(v8, 0, sizeof(v8));
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
        v4 = _DwmAsyncSetCompositionAttribute((__int64)a1);
        if ( !v5 )
          PostIAMShellHookMessage(0x24u, *(_QWORD *)a1);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
