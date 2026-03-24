/*
 * XREFs of CheckCursorClipAccess @ 0x1C003DCE0
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C00333F0 (CheckWinstaAttributeAccess.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C003DC5C (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004B714 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     CheckGrantedAccess @ 0x1C0103D34 (CheckGrantedAccess.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C01100C8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  struct tagTHREADINFO *v5; // rbx
  int v6; // edi
  __int64 v8; // rcx
  bool v9; // zf
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v5 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 53)) )
        return 0LL;
      if ( !*(_DWORD *)(*((_QWORD *)v5 + 53) + 884LL) )
        return 0LL;
      if ( !InForegroundQueue((__int64 **)v5, 0) )
        return 0LL;
      v8 = *(_QWORD *)(*((_QWORD *)v5 + 53) + 832LL);
      if ( !v8 )
        return 0LL;
      v9 = (*(_DWORD *)(v8 + 100) & 1) == 0;
    }
    else
    {
      v9 = (unsigned int)CheckGrantedAccess(
                           *(unsigned int *)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 680LL),
                           2LL) == 0;
    }
    if ( v9 )
      return 0LL;
  }
  else
  {
    if ( **((_QWORD **)CurrentLogicalCursorThread + 53) != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(16LL)
      && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v5 + 53))
       || !(unsigned int)IsGpqForegroundAccessibleExplicit(
                           1LL,
                           v5,
                           *(_QWORD *)(*((_QWORD *)v5 + 53) + 880LL),
                           *(_DWORD *)(*((_QWORD *)v5 + 53) + 12LL) & 0x80000000)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v10);
    if ( *((_QWORD *)v5 + 54) != gpqForeground && !a2 && (unsigned int)IsRectEmptyInl(&v10) )
      return 0LL;
  }
  return 1LL;
}
