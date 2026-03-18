/*
 * XREFs of FinalUserInit @ 0x1C00D43C4
 * Callers:
 *     xxxInitWindowStation @ 0x1C00D42E4 (xxxInitWindowStation.c)
 * Callees:
 *     DestroyClass @ 0x1C0060880 (DestroyClass.c)
 *     GreSetTextColor @ 0x1C00BE3F8 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00BE480 (GreSetBkColor.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GreSetBkMode @ 0x1C00BFC20 (GreSetBkMode.c)
 *     GetCharDimensions @ 0x1C00C40F8 (GetCharDimensions.c)
 *     MNSetupAnimationDC @ 0x1C00D4628 (MNSetupAnimationDC.c)
 */

__int64 FinalUserInit()
{
  __int64 SessionDpiServerInfo; // rsi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  HDC v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 i; // rcx
  __int64 v15; // rcx
  struct tagPROCESSINFO *v16; // rax

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 32) = GetCharDimensions(
                                             *(HDC *)(gpDispInfo + 64LL),
                                             SessionDpiServerInfo + 40,
                                             (_DWORD *)(SessionDpiServerInfo + 36));
  v4 = Get96DpiServerInfo(v2, v1, v3);
  v5 = GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), *(_QWORD *)(v4 + 24), 1);
  *(_DWORD *)(v4 + 32) = GetCharDimensions(*(HDC *)(gpDispInfo + 64LL), v4 + 40, (_DWORD *)(v4 + 36));
  GreSelectFontInternal(*(HDC *)(gpDispInfo + 64LL), v5, 1);
  *(_QWORD *)(gpDispInfo + 72LL) = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), v6, v7, v8);
  v9 = *(HDC *)(gpDispInfo + 72LL);
  if ( !v9 )
    return 0LL;
  GreSelectFontInternal(v9, *(_QWORD *)(SessionDpiServerInfo + 24), 1);
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 72LL), 0LL, 0LL, 0LL);
  *(_DWORD *)(gpDispInfo + 88LL) = 40 * *(_DWORD *)(SessionDpiServerInfo + 32);
  *(_DWORD *)(gpDispInfo + 92LL) = *(_DWORD *)(SessionDpiServerInfo + 36) + 2;
  *(_QWORD *)(gpDispInfo + 80LL) = GreCreateBitmap(
                                     *(unsigned int *)(gpDispInfo + 88LL),
                                     *(unsigned int *)(gpDispInfo + 92LL),
                                     1LL,
                                     1LL,
                                     0LL);
  v10 = *(_QWORD *)(gpDispInfo + 80LL);
  if ( !v10 )
    return 0LL;
  GreSetBitmapOwner(v10, 0LL);
  GreSelectBitmap(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpDispInfo + 80LL));
  GreSetTextColor(*(HDC *)(gpDispInfo + 72LL), 0);
  GreSelectBrush(*(_QWORD *)(gpDispInfo + 72LL), *(_QWORD *)(gpsi + 4944LL));
  GreSetBkMode(*(HDC *)(gpDispInfo + 72LL), 2);
  GreSetBkColor(*(HDC *)(gpDispInfo + 72LL), 0xFFFFFF);
  MNSetupAnimationDC(gMenuState[0]);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 352); i; i = *(_QWORD *)(CurrentProcessWin32Process + 352) )
  {
    v15 = *(_QWORD *)(i + 8);
    if ( (*(_DWORD *)(v15 + 8) & 0x4000) != 0 )
      break;
    v16 = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v15);
    DestroyClass(v16, (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 352));
  }
  return 1LL;
}
