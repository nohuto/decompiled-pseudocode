/*
 * XREFs of xxxFlashEnabledPopup @ 0x1C0225A38
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00A5C50 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0005B74 (xxxFlashWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C014A64C (DWP_GetEnabledPopup.c)
 *     xxxMessageBeep @ 0x1C01F7F58 (xxxMessageBeep.c)
 */

__int64 __fastcall xxxFlashEnabledPopup(const struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rax
  struct tagWND *v2; // rdi
  int v3; // ebx
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
    v2 = EnabledPopup;
    if ( EnabledPopup )
    {
      ThreadLockAlways(EnabledPopup, &v9);
      v3 = *(_DWORD *)(gpsi + 4984LL) >> 3;
      v4 = (unsigned __int16 *)UPDWORDPointer(8196LL);
      xxxFlashWindow(v2, (*v4 << 16) | 3, v3);
      ThreadUnlock1(v6, v5, v7);
    }
  }
  return xxxMessageBeep(0LL);
}
