/*
 * XREFs of NtUserUpdateDefaultDesktopThumbnail @ 0x1C01FFFF0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastStatus @ 0x1C011A880 (UserSetLastStatus.c)
 *     DwmAsyncUpdateDefaultDesktopThumbnail @ 0x1C02730B4 (DwmAsyncUpdateDefaultDesktopThumbnail.c)
 */

__int64 __fastcall NtUserUpdateDefaultDesktopThumbnail(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  NTSTATUS updated; // eax
  void *v10; // rax

  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
      goto LABEL_16;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 || IsTopLevelWindow(v8) && (unsigned int)IsWindowDesktopComposed(v8) )
  {
    v7 = gptiCurrent;
    if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskIODefault && (!v8 || *(_QWORD *)(v8 + 24) == grpdeskIODefault) )
    {
      v10 = (void *)ReferenceDwmApiPort(gptiCurrent);
      updated = DwmAsyncUpdateDefaultDesktopThumbnail(v10, a4, a5);
    }
    else
    {
      updated = -1073741790;
    }
  }
  else
  {
    updated = -1073741816;
  }
  LODWORD(v8) = updated >= 0;
  if ( updated < 0 )
  {
    LODWORD(v8) = 0;
    UserSetLastStatus(updated, 1);
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v7);
  return (int)v8;
}
