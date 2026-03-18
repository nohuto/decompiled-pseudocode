/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C8EC0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     _GetMenuState @ 0x1C00C8FD8 (_GetMenuState.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 *     xxxTrackCaptionButton @ 0x1C0243270 (xxxTrackCaptionButton.c)
 */

void __fastcall xxxDWP_NCMouse(unsigned __int64 *BugCheckParameter2, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  unsigned __int64 v9; // rcx
  __int64 SysMenu; // rax

  if ( a2 != 161 )
  {
    if ( a2 <= 0xA1 || a2 > 0xA3 )
      return;
    goto LABEL_18;
  }
  if ( a3 < 8 || a3 > 9 && a3 - 20 > 1 )
  {
    if ( a3 - 10 > 7 )
      goto LABEL_18;
    v8 = a3 + 61431;
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2)
      && (*(_BYTE *)(BugCheckParameter2[5] + 26) & 8) != 0 )
    {
      v7 = xxxDCETrackCaptionButton(BugCheckParameter2, a3);
    }
    else
    {
      v7 = xxxTrackCaptionButton(BugCheckParameter2, a3);
    }
    v8 = v7;
  }
  if ( !v8 )
  {
LABEL_18:
    xxxHandleNCMouseGuys((ULONG_PTR)BugCheckParameter2);
    return;
  }
  if ( v8 == 61824
    || (v9 = BugCheckParameter2[5], (*(_BYTE *)(v9 + 30) & 8) == 0)
    || (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(BugCheckParameter2, 1), (GetMenuState(SysMenu, (unsigned __int16)v8 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x112u, v8, a4, 0, 0, 0LL, 1, 1);
  }
}
