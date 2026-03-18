/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D2150
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01D3A0C (_NotifyOverlayWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1C0212E70 (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rsi
  int v4; // eax
  BOOL v5; // ebp
  struct tagBWL *v6; // rax
  struct tagBWL *v7; // r14
  _QWORD *i; // rdi
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_DWORD *)(TopLevelWindow + 320) & 0x10000;
    v5 = v4 != 0;
    if ( (v4 & 0x10000) != 0 )
    {
LABEL_12:
      v11 = 0LL;
      LODWORD(v11) = v5;
      v12 = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(
                          v3,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v11) >= 0;
      return v1;
    }
    v6 = BuildHwndList(v3, (const struct tagWND *)1, 0LL, 1);
    v7 = v6;
    if ( v6 )
    {
      for ( i = (_QWORD *)((char *)v6 + 32); *i != 1LL; ++i )
      {
        v9 = HMValidateHandleNoSecure(*i, 1);
        if ( v9 && (*(_DWORD *)(v9 + 320) & 0x10000) != 0 )
        {
          v5 = 1;
          break;
        }
      }
      FreeHwndList(v7);
      goto LABEL_12;
    }
  }
  return v1;
}
