/*
 * XREFs of TrackMouseEvent @ 0x1C00E01E4
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C00E0060 (NtUserTrackMouseEvent.c)
 *     xxxMNMouseMove @ 0x1C021B510 (xxxMNMouseMove.c)
 * Callees:
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0143AD6 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  int *v5; // rdx
  int v6; // r8d
  _BOOL8 v7; // rcx
  int v8; // eax
  int v9; // edx

  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  v4 = result;
  if ( result )
  {
    v5 = (int *)(a1 + 4);
    if ( result == *(_QWORD *)(v2 + 184) && (v7 = *(_DWORD *)(v2 + 192) != 1, v7 == (((unsigned int)*v5 >> 4) & 1)) )
    {
      v6 = *v5;
      if ( *v5 < 0 )
      {
        if ( (v6 & 2) != 0 )
          *(_DWORD *)(v2 + 48) &= ~0x80u;
        if ( (*v5 & 1) != 0 && (*(_DWORD *)(v2 + 48) & 0x40) != 0 )
        {
          FindTimer((void *)result, (void *)0xFFFA, 2u, 1, 0LL);
          *(_DWORD *)(v2 + 48) &= ~0x40u;
        }
      }
      else
      {
        if ( (v6 & 2) != 0 )
          *(_DWORD *)(v2 + 48) |= 0x80u;
        if ( (*v5 & 1) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x40u;
          v8 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v2 + 212) = v8;
          if ( ((v8 + 1) & 0xFFFFFFFE) == 0 )
            *(_DWORD *)(v2 + 212) = *(_DWORD *)(SGDGetUserSessionState(v7) + 15924);
          ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(v4 + 16) + 764LL));
        }
      }
    }
    else
    {
      v9 = *v5;
      if ( (v9 & 0x80000002) == 2 )
        PostMessage(result, ((v9 & 0x10) == 0) | 0x2A2u, 0LL, 0LL);
    }
    return 1LL;
  }
  return result;
}
