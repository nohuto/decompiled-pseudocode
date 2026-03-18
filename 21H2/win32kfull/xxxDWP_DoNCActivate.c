/*
 * XREFs of xxxDWP_DoNCActivate @ 0x1C00BABE4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C022D580 (xxxEndMenuLoop.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncActivationChange @ 0x1C00BAD74 (DwmAsyncActivationChange.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00BAE1C (IsModelessMenuNotificationWindow.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C00BB5A4 (GetWindowBorders.c)
 *     xxxMenuBarDraw @ 0x1C02488F8 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *BugCheckParameter2, char a2, __int64 a3)
{
  BOOL v5; // ecx
  _BYTE *v6; // rdx
  char v7; // r8
  __int16 v8; // di
  __int64 v9; // rbp
  HDC DCEx; // rsi
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  void *v14; // rax
  unsigned int WindowBorders; // eax

  v5 = (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow();
  SetOrClrWF(v5, BugCheckParameter2, 0x40u, 1);
  if ( a3 != -1 )
  {
    v6 = (_BYTE *)*((_QWORD *)BugCheckParameter2 + 5);
    v7 = v6[31];
    if ( (v7 & 0x10) != 0 && (v6[17] & 1) == 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(gpsi + 4576LL) != *(_DWORD *)(gpsi + 4580LL)
        || *(_DWORD *)(gpsi + 4604LL) != *(_DWORD *)(gpsi + 4644LL) )
      {
        v8 = 4108;
      }
      if ( (v7 & 0x20) == 0 && (v6[30] & 4) != 0 && *(_DWORD *)(gpsi + 4608LL) != *(_DWORD *)(gpsi + 4612LL) )
        v8 |= 0x8000u;
      if ( v8 )
      {
        v9 = UserValidateCopyRgn(a3);
        DCEx = (HDC)_GetDCEx(BugCheckParameter2, v9, 65537LL);
        if ( DCEx )
        {
          v11 = *((_QWORD *)BugCheckParameter2 + 5);
          if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v11 + 28), *(unsigned int *)(v11 + 24));
            xxxMenuBarDraw(BugCheckParameter2, DCEx, WindowBorders, WindowBorders);
          }
          xxxDrawCaptionBar((ULONG_PTR)BugCheckParameter2, DCEx);
          _ReleaseDC(DCEx);
        }
        else
        {
          GreDeleteObject(v9);
        }
      }
    }
  }
  result = IsToplevelWindowDesktopComposed((__int64)BugCheckParameter2);
  if ( (_DWORD)result )
  {
    result = *((_QWORD *)BugCheckParameter2 + 5);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v14 = (void *)ReferenceDwmApiPort(v13);
      return DwmAsyncActivationChange(v14);
    }
  }
  return result;
}
