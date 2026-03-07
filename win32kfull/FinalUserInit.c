__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  struct _CALLPROCDATA ***i; // rbx
  unsigned __int64 v10; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(_QWORD *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             SessionDpiServerInfo + 36);
  v1 = Get96DpiServerInfo();
  v2 = GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), *(_QWORD *)(v1 + 24), 1LL);
  *(_DWORD *)(v1 + 32) = GetCharDimensions(*(_QWORD *)(gpDispInfo + 64LL), v1 + 40, v1 + 36);
  GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), v2, 1LL);
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
  v3 = *(_QWORD *)(gpDispInfo + 72LL);
  if ( !v3 )
    return 0LL;
  GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiServerInfo + 24), 1LL);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v4 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v4 )
    return 0LL;
  GreSetBitmapOwner(v4, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(_QWORD *)(gpDispInfo + 72LL), 0LL);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL));
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL));
  MNSetupAnimationDC(gMenuState);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
  {
    v7 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  for ( i = (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352);
        *i && (*((_DWORD *)(*i)[1] + 2) & 0x4000) == 0;
        DestroyClass((struct tagPROCESSINFO *)v10, i) )
  {
    v10 = PsGetCurrentProcessWin32Process(v7);
    if ( v10 )
      v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
  }
  return 1LL;
}
