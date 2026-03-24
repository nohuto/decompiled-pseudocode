/*
 * XREFs of TrackMouseEvent @ 0x1C002C800
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C002C670 (NtUserTrackMouseEvent.c)
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C002C93C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // edx
  int ProcessorHistory; // edx

  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( result == *(_QWORD *)(v2 + 184)
      && (v4 = *(_DWORD *)(a1 + 4), (*(_DWORD *)(v2 + 192) != 1) == (((unsigned int)v4 >> 4) & 1)) )
    {
      if ( v4 < 0 )
      {
        if ( (v4 & 2) != 0 )
        {
          *(_DWORD *)(v2 + 48) &= ~0x80u;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( (v4 & 1) != 0 && (*(_DWORD *)(v2 + 48) & 0x40) != 0 )
        {
          FindTimer(result, 65530LL, 2u, 1, 0LL);
          *(_DWORD *)(v2 + 48) &= ~0x40u;
        }
      }
      else
      {
        if ( (v4 & 2) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x80u;
          v4 = *(_DWORD *)(a1 + 4);
        }
        if ( (v4 & 1) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x40u;
          ProcessorHistory = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v2 + 212) = ProcessorHistory;
          if ( ((ProcessorHistory + 1) & 0xFFFFFFFE) == 0 )
            ProcessorHistory = WPP_MAIN_CB.Dpc.ProcessorHistory;
          *(_DWORD *)(v2 + 212) = ProcessorHistory;
          ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(result + 16) + 764LL));
        }
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( (v5 & 0x80000002) == 2 )
        PostMessage(result, ((v5 & 0x10) == 0) | 0x2A2u, 0LL, 0LL);
    }
    return 1LL;
  }
  return result;
}
