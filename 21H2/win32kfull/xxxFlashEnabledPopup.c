/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C0243C64
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B3CC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     DWP_GetEnabledPopup @ 0x1C00071D0 (DWP_GetEnabledPopup.c)
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxMessageBeep @ 0x1C015D9A0 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(_QWORD *a1)
{
  _QWORD *EnabledPopup; // rbx
  __int64 ThreadWin32Thread; // rax
  _DWORD *v3; // rax
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( (HIDWORD(gSoundSentry) & 1) == 0 )
  {
    EnabledPopup = DWP_GetEnabledPopup(a1);
    if ( EnabledPopup )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v6 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v6;
      *((_QWORD *)&v6 + 1) = EnabledPopup;
      HMLockObject(EnabledPopup);
      v3 = (_DWORD *)UPDWORDPointer(8196LL);
      xxxFlashWindow((__int64)EnabledPopup, ((unsigned __int16)*v3 << 16) | 3, *(_DWORD *)(gpsi + 4984LL) >> 3);
      ThreadUnlock1(v4);
    }
  }
  return xxxMessageBeep(0LL);
}
