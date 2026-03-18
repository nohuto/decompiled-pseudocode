/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020FDCC
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C020C448 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     _ClientToScreen @ 0x1C025A47C (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(
        unsigned __int64 *BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        struct MOVESIZEDATA *a5)
{
  unsigned int v8; // r14d
  int v9; // r15d
  unsigned int v10; // r14d
  unsigned int v11; // r14d
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 != 256 && (a2 <= 0x1FF || a2 > 0x202) )
    return 1LL;
  LODWORD(v18) = (__int16)a4;
  HIDWORD(v18) = SHIWORD(a4);
  ClientToScreen(BugCheckParameter2, &v18);
  _InterlockedIncrement(&glSendMessage);
  v8 = a2 - 256;
  v9 = xxxSendTransformableMessageTimeout(
         BugCheckParameter2,
         0x84u,
         0LL,
         (unsigned __int16)v18 | (WORD2(v18) << 16),
         0,
         0,
         0LL,
         1,
         0);
  if ( !v8 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
      xxxSendMessage((ULONG_PTR)BugCheckParameter2);
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_30;
  }
  v10 = v8 - 256;
  if ( !v10 )
  {
    if ( a3 != 1 )
    {
      v19 = *(_OWORD *)(BugCheckParameter2[5] + 88);
      if ( PtInRect(&v19, v18) && (unsigned int)(v9 - 10) <= 7 )
        xxxSendMessage((ULONG_PTR)BugCheckParameter2);
      else
        zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
      return 1LL;
    }
LABEL_14:
    v13 = *((_DWORD *)a5 + 44);
    if ( !v13 )
    {
      if ( (unsigned int)(v9 - 10) <= 7 )
      {
        xxxSendMessage((ULONG_PTR)BugCheckParameter2);
        *((_DWORD *)a5 + 50) &= ~1u;
        v14 = dword_1C02F450C[v9];
        v15 = *(_DWORD *)&aFromStateWithC[4 * v9 + 12];
        *((_DWORD *)a5 + 45) = v14;
        v16 = v15 + v14;
        *((_DWORD *)a5 + 46) = v15;
        *((_DWORD *)a5 + 44) = v16;
        v17 = dword_1C02F4560[v16];
        *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + dword_1C02F4590[v16] + 30) - v18;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v17 + 30) - HIDWORD(v18);
      }
      return 1LL;
    }
    if ( v13 != 9 || v9 != 2 )
      return 1LL;
    xxxSendMessage((ULONG_PTR)BugCheckParameter2);
    *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + 30) - v18;
    *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + 31) - HIDWORD(v18);
LABEL_30:
    *((_DWORD *)a5 + 50) &= ~1u;
    return 1LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !PtInRect((_DWORD *)a5 + 6, v18) )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( v11 != 1 )
    return 1LL;
LABEL_10:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 50) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 50) |= 8u;
  return 0LL;
}
