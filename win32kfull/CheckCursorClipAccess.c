/*
 * XREFs of CheckCursorClipAccess @ 0x1C0022250
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0022318 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0023F94 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003B230 (CheckWinstaAttributeAccess.c)
 *     CheckGrantedAccess @ 0x1C00D7810 (CheckGrantedAccess.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00DCF88 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  struct tagTHREADINFO *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  bool v11; // zf
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v6 = 0;
  v7 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v8 = a1 - 1;
    if ( !v8 )
    {
      v11 = (unsigned int)CheckGrantedAccess(
                            *(unsigned int *)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 672LL),
                            2LL) == 0;
      goto LABEL_10;
    }
    if ( v8 == 1 )
    {
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 53), v5) )
        return 0LL;
      if ( !*(_DWORD *)(*((_QWORD *)v7 + 53) + 868LL) )
        return 0LL;
      if ( !(unsigned int)InForegroundQueue(v7, 0) )
        return 0LL;
      v9 = *(_QWORD *)(*((_QWORD *)v7 + 53) + 824LL);
      if ( !v9 )
        return 0LL;
      v11 = (*(_DWORD *)(v9 + 100) & 1) == 0;
LABEL_10:
      if ( v11 )
        return 0LL;
    }
    return 1LL;
  }
  if ( **((_QWORD **)CurrentLogicalCursorThread + 53) != gpepCSRSS
    && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v7 + 53))
     || !(unsigned int)IsGpqForegroundAccessibleExplicit(
                         1LL,
                         v7,
                         *(_QWORD *)(*((_QWORD *)v7 + 53) + 864LL),
                         *(_DWORD *)(*((_QWORD *)v7 + 53) + 12LL) & 0x80000000)) )
  {
    return 0LL;
  }
  CCursorClip::GetClip(gpCursorClip, &v12);
  if ( *((_QWORD *)v7 + 54) == gpqForeground || a2 )
    return 1LL;
  LOBYTE(v6) = (unsigned int)IsRectEmptyInl(&v12) == 0;
  return v6;
}
