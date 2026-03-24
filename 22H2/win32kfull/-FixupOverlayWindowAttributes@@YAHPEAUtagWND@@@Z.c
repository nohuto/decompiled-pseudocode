/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D5F40
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01D75E0 (_NotifyOverlayWindow.c)
 * Callees:
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     _GetTopLevelWindow @ 0x1C006FC20 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C02140DC (SetWindowCompositionVideoOverlayActive.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  struct tagBWL *v6; // rax
  struct tagBWL *v7; // r14
  unsigned __int64 *i; // rsi
  __int64 v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_QWORD *)(TopLevelWindow + 40);
    v5 = -__CFSHR__(*(_DWORD *)(v4 + 232), 11);
    if ( __CFSHR__(*(_DWORD *)(v4 + 232), 11) )
    {
LABEL_12:
      v11 = 0LL;
      LODWORD(v11) = v5;
      v12 = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3, &v11) >= 0;
      return v1;
    }
    v6 = BuildHwndList(v3, 1, 0LL);
    v7 = v6;
    if ( v6 )
    {
      for ( i = (unsigned __int64 *)((char *)v6 + 32); *i != 1; ++i )
      {
        v9 = HMValidateHandleNoSecure(*i, 1);
        if ( v9 && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 0x400) != 0 )
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
