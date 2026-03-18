/*
 * XREFs of xxxSystemTimerProc @ 0x1C0005B40
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C0005BBC (InvalidateWEFCOMPOSITEDDCEs.c)
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 *     _PostTransformableMessage @ 0x1C004F59C (_PostTransformableMessage.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     GetActiveTrackPwnd @ 0x1C01B68AC (GetActiveTrackPwnd.c)
 *     zzzAnimateFade @ 0x1C01BD378 (zzzAnimateFade.c)
 */

__int64 __fastcall xxxSystemTimerProc(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  int v9; // r14d
  int MouseKeyFlags; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // [rsp+60h] [rbp+18h]

  v3 = a3;
  if ( a3 > 0xFFFA )
    return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
  switch ( (_DWORD)a3 )
  {
    case 0xFFF5:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 0xFFF6:
      return zzzAnimateFade();
    case 0xFFF7:
      v13 = a1[2];
      if ( *(_QWORD *)(*(_QWORD *)(v13 + 456) + 192LL) && a1 == (_QWORD *)GetActiveTrackPwnd() )
      {
        *(_DWORD *)(*(_QWORD *)(v13 + 432) + 396LL) |= 0x200020u;
        SetWakeBit(v13, 2LL);
      }
      return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow((ULONG_PTR)a1);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
  v6 = a1[2];
  v7 = *(_QWORD *)(v6 + 456);
  result = *(unsigned int *)(v7 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v7 + 192);
    if ( *a1 == *(_QWORD *)result )
    {
      v14 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(a1[5] + 288LL));
      result = PtInRect(v7 + 204, v14);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v7 + 200);
        if ( v8 == 1 )
        {
          v9 = 673;
          MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(v6 + 432));
          v11 = a1[5];
          LODWORD(v12) = MouseKeyFlags;
          if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
            LODWORD(v14) = *(_DWORD *)(v11 + 112) - v14 - 1;
          else
            LODWORD(v14) = v14 - *(_DWORD *)(v11 + 104);
          HIDWORD(v14) -= *(_DWORD *)(v11 + 108);
        }
        else
        {
          v12 = *(unsigned __int16 *)(v7 + 200);
          v9 = 672;
          if ( (unsigned __int64)(v12 - 65) > 4 )
          {
            if ( (unsigned __int64)(v12 - 60) <= 4 )
              LODWORD(v12) = (HIWORD(v8) != 0) + 6;
          }
          else
          {
            LODWORD(v12) = 5;
          }
        }
        PostTransformableMessage((_DWORD)a1, v9, v12, (unsigned __int16)v14 | (WORD2(v14) << 16), 0);
        *(_DWORD *)(v7 + 48) &= ~0x40u;
        return FindTimer((_DWORD)a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
