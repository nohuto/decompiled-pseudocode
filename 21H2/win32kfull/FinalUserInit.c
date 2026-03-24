/*
 * XREFs of FinalUserInit @ 0x1C00E5318
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C0B8 (xxxInitWindowStation.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0045F3C (GreSetBkMode.c)
 *     DestroyClass @ 0x1C0079040 (DestroyClass.c)
 *     GetCharDimensions @ 0x1C00E33C8 (GetCharDimensions.c)
 *     MNSetupAnimationDC @ 0x1C00E6268 (MNSetupAnimationDC.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdi
  HDC v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v11; // rcx
  struct tagPROCESSINFO *v12; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  v4 = Get96DpiServerInfo(v2, v1, v3);
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_DWORD *)(v4 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), v4 + 40, (_DWORD *)(v4 + 36));
  GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v5 = *(HDC *)(gpDispInfo + 72LL);
  if ( !v5 )
    return 0LL;
  GreSelectFont(v5);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL);
  v6 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v6 )
    return 0LL;
  GreSetBitmapOwner(v6, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352); i; i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v11 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v11 + 8) & 0x4000) != 0 )
      break;
    v12 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v11);
    DestroyClass(v12, (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352));
  }
  return 1LL;
}
