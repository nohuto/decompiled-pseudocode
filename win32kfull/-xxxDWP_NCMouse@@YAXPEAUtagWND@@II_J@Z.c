void __fastcall xxxDWP_NCMouse(struct tagWND *a1, unsigned int a2, unsigned int a3, __int128 *a4)
{
  unsigned int v8; // esi
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  __int64 SysMenu; // rax

  if ( a2 != 161 )
  {
    if ( a2 - 162 > 1 )
      return;
    goto LABEL_3;
  }
  if ( a3 == 8 || a3 == 9 || a3 - 20 < 2 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      v9 = xxxDCETrackCaptionButton(a1, a3);
    else
      v9 = xxxTrackCaptionButton(a1, a3);
    v8 = v9;
  }
  else
  {
    if ( a3 - 10 > 7 )
    {
LABEL_3:
      xxxHandleNCMouseGuys(a1, (const struct tagWND *)a2, a3, a4);
      return;
    }
    v8 = a3 + 61431;
  }
  if ( !v8 )
    goto LABEL_3;
  if ( v8 == 61824
    || (v10 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v10 + 30) & 8) == 0)
    || (*(_BYTE *)(v10 + 31) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(a1, 1), (GetMenuState(SysMenu, (unsigned __int16)v8 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(a1, 0x112u, v8, a4, 0, 0, 0LL, 1, 1);
  }
}
