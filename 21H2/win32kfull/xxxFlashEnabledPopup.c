/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C023F618
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 *     DWP_GetEnabledPopup @ 0x1C023F45C (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  unsigned __int64 *EnabledPopup; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned int v3; // ebx
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v9 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v9 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v9;
      *((_QWORD *)&v9 + 1) = EnabledPopup;
      HMLockObject(EnabledPopup);
      v3 = *(_DWORD *)(gpsi + 4984LL) >> 3;
      v4 = (unsigned __int16 *)UPDWORDPointer(8196LL);
      xxxFlashWindow(EnabledPopup, (*v4 << 16) | 3, v3);
      ThreadUnlock1(v6, v5, v7);
    }
  }
  return xxxMessageBeep(0LL);
}
