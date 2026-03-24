/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C015F050
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C015EFD0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247F08 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0006BE4 (LayerHitTest.c)
 *     GetWindowCloakState @ 0x1C004DB6C (GetWindowCloakState.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall ChildWindowFromPointEx(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp+28h] BYREF

  v24 = a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
      if ( (*(_BYTE *)(v5 + 224) & 0x20) == 0 )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v5) >> 8)) & 0x1FF) != 0
          || ((v7 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL),
               (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2)
           || (v7 & 0x20000000) == 0
            ? (v8 = 0)
            : (v8 = 1),
              (W32GetCurrentThreadDpiAwarenessContext(v7) & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext(v9) & 0x20000000) == 0
            ? (v10 = 0)
            : (v10 = 1),
              v8 != v10) )
        {
          TransformPointBetweenCoordinateSpaces(&v24, &v24, a1, 0LL);
        }
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
      v12 = *(_DWORD *)(v11 + 112) - v24;
    else
      v12 = *(_DWORD *)(v11 + 104) + v24;
    LODWORD(v24) = v12;
    HIDWORD(v24) += *(_DWORD *)(v11 + 108);
  }
  v23 = v24;
  if ( !PtInRect((_DWORD *)(v11 + 104), v24) )
    return 0LL;
  v16 = *(_QWORD *)(v13 + 168);
  if ( v16 )
  {
    if ( !(unsigned int)GrePtInRegion(v16, v14, v15) )
      return 0LL;
  }
  v17 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v17 + 26) & 8) != 0 && (*(_DWORD *)(v17 + 232) & 0x20) == 0 && !LayerHitTest(a1, v24) )
    return 0LL;
  v18 = *(_QWORD **)(a1 + 112);
  if ( !v18 )
    return (_QWORD *)a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v24, &v23, v18, a1);
    if ( (a3 & 1) != 0
      && ((*(_BYTE *)(v18[5] + 31LL) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v18) && (unsigned int)GetWindowCloakState(v18))
      || (a3 & 2) != 0 && (*(_BYTE *)(v18[5] + 31LL) & 8) != 0
      || (a3 & 4) != 0 && (*(_BYTE *)(v18[5] + 24LL) & 0x20) != 0
      || !PtInRect((_DWORD *)(v18[5] + 88LL), v24) )
    {
      goto LABEL_26;
    }
    v22 = *(_QWORD *)(v20 + 168);
    if ( !v22 )
      break;
    if ( (unsigned int)GrePtInRegion(v22, (unsigned int)v24, HIDWORD(v24)) )
    {
      v19 = v24;
      break;
    }
LABEL_26:
    v18 = (_QWORD *)v18[11];
    if ( !v18 )
      return (_QWORD *)a1;
  }
  if ( (*(_BYTE *)(v18[5] + 26LL) & 8) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) == 0
    && !LayerHitTest((__int64)v18, v19) )
  {
    goto LABEL_26;
  }
  return v18;
}
