/*
 * XREFs of ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C01F75B4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00EC2A0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00C609C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C00CCCF4 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EF314 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall SetWindowDisableMoveSizeFeedback(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  _DWORD v9[16]; // [rsp+20h] [rbp-58h] BYREF

  v4 = -1073741816;
  memset_0(v9, 0, sizeof(v9));
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v9, v5, v6) )
  {
    v7 = *(_DWORD *)a2 != 0;
    if ( -__CFSHR__(v9[0], 18) == v7 )
    {
      return 0;
    }
    else
    {
      v9[0] = v9[0] & 0xFFFDFFFF | (v7 << 17);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v9) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute((__int64)a1);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
