/*
 * XREFs of xxxSystemTimerProc @ 0x1C010B7C0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     _PostTransformableMessage @ 0x1C00A755C (_PostTransformableMessage.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     GetActiveTrackPwnd @ 0x1C01DCBDC (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E2634 (InvalidateWEFCOMPOSITEDDCEs.c)
 *     zzzAnimateFade @ 0x1C01E2D24 (zzzAnimateFade.c)
 */

__int64 __fastcall xxxSystemTimerProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  unsigned int v9; // r14d
  unsigned int MouseKeyFlags; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+60h] [rbp+18h]

  if ( a3 > 0xFFFA )
    return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  switch ( (_DWORD)a3 )
  {
    case 0xFFF5:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 0xFFF6:
      return zzzAnimateFade();
    case 0xFFF7:
      v13 = *((_QWORD *)a1 + 2);
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 456) + 184LL);
      if ( v14 && a1 == (struct tagWND *)GetActiveTrackPwnd(v14) )
      {
        *(_DWORD *)(*(_QWORD *)(v13 + 432) + 388LL) |= 0x200020u;
        SetWakeBit(v13, 2u);
      }
      return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow((ULONG_PTR)a1);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  v6 = *((_QWORD *)a1 + 2);
  v7 = *(_QWORD *)(v6 + 456);
  result = *(unsigned int *)(v7 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v7 + 184);
    if ( *(_QWORD *)a1 == *(_QWORD *)result )
    {
      v15 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
      result = PtInRect((_DWORD *)(v7 + 196), v15);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v7 + 192);
        if ( v8 == 1 )
        {
          v9 = 673;
          MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(v6 + 432));
          v11 = *((_QWORD *)a1 + 5);
          v12 = MouseKeyFlags;
          if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
            LODWORD(v15) = *(_DWORD *)(v11 + 112) - v15 - 1;
          else
            LODWORD(v15) = v15 - *(_DWORD *)(v11 + 104);
          HIDWORD(v15) -= *(_DWORD *)(v11 + 108);
        }
        else
        {
          v12 = *(unsigned __int16 *)(v7 + 192);
          v9 = 672;
          if ( v12 - 65 > 4 )
          {
            if ( v12 - 60 <= 4 )
              v12 = (HIWORD(v8) != 0) + 6LL;
          }
          else
          {
            v12 = 5LL;
          }
        }
        PostTransformableMessage(a1, v9, v12, (unsigned __int16)v15 | (unsigned __int64)(WORD2(v15) << 16), 0);
        *(_DWORD *)(v7 + 48) &= ~0x40u;
        return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
      }
    }
  }
  return result;
}
