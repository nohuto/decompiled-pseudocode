/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222AD8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00D3B08 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200A20 (xxxHandleNCMouseGuys.c)
 *     xxxGetSysMenu @ 0x1C02221A0 (xxxGetSysMenu.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     _GetMenuState @ 0x1C024BB54 (_GetMenuState.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *BugCheckParameter2, unsigned int a2, unsigned int a3, __int128 *a4)
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
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
      && (*(_BYTE *)(*((_QWORD *)BugCheckParameter2 + 5) + 26LL) & 8) != 0 )
    {
      v9 = xxxDCETrackCaptionButton(BugCheckParameter2, a3);
    }
    else
    {
      v9 = xxxTrackCaptionButton(BugCheckParameter2, a3);
    }
    v8 = v9;
  }
  else
  {
    if ( a3 - 10 > 7 )
    {
LABEL_3:
      xxxHandleNCMouseGuys((__int64)BugCheckParameter2, (const struct tagWND *)a2, a3, a4);
      return;
    }
    v8 = a3 + 61431;
  }
  if ( !v8 )
    goto LABEL_3;
  if ( v8 == 61824
    || (v10 = *((_QWORD *)BugCheckParameter2 + 5), (*(_BYTE *)(v10 + 30) & 8) == 0)
    || (*(_BYTE *)(v10 + 31) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(BugCheckParameter2, 1), (GetMenuState(SysMenu, (unsigned __int16)v8 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((unsigned __int64 *)BugCheckParameter2, 0x112u, v8, a4, 0, 0, 0LL, 1, 1);
  }
}
