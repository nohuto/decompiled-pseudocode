/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950
 * Callers:
 *     zzzInternalShowCaret @ 0x1C00C2D88 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C00C33BC (zzzInternalHideCaret.c)
 *     CaretBlinkProc @ 0x1C00C3720 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C010A5AC (zzzSetCaretPos.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     _ExcludeUpdateRgn @ 0x1C00C4B2C (_ExcludeUpdateRgn.c)
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  struct tagWND *v1; // rbx
  HDC DC; // rax
  HDC v3; // rsi
  int v4; // ebp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _DWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(struct tagWND **)(v0 + 296);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 296)) )
  {
    DC = (HDC)_GetDC();
    v3 = DC;
    if ( *(_QWORD *)(*((_QWORD *)v1 + 5) + 136LL) )
    {
      v4 = 1;
      GreSaveDCInternal(DC);
      if ( (*(_BYTE *)(*((_QWORD *)v1 + 5) + 21LL) & 1) != 0 )
        ExcludeUpdateRgn(v3, v1);
    }
    else
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)(v0 + 336);
    if ( v5 > 1 )
    {
      v6 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 336));
      NtGdiBitBltInternal(
        v3,
        *(_DWORD *)(v0 + 316),
        *(_DWORD *)(v0 + 320),
        *(_DWORD *)(v0 + 328),
        *(_DWORD *)(v0 + 324),
        ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(ghdcMem, v6);
    }
    else
    {
      v7[0] = *(_DWORD *)(v0 + 316);
      v7[1] = *(_DWORD *)(v0 + 320);
      v7[2] = *(_DWORD *)(v0 + 328);
      v7[3] = *(_DWORD *)(v0 + 324);
      if ( v5 == 1 )
        v8 = *(_QWORD *)(gpsi + 4944LL);
      else
        v8 = ghbrWhite;
      GrePolyPatBlt(v3, 5898313, (struct _POLYPATBLT *)v7, 1);
    }
    if ( v4 )
      GreRestoreDC(v3, 0xFFFFFFFFLL);
    _ReleaseDC(v3);
  }
  else
  {
    *(_DWORD *)(v0 + 304) &= ~1u;
  }
}
