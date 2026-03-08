/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0006130
 * Callers:
 *     zzzDestroyCaret @ 0x1C0005EAC (zzzDestroyCaret.c)
 *     zzzSetCaretPos @ 0x1C0005ED8 (zzzSetCaretPos.c)
 *     zzzHideCaret @ 0x1C0006078 (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0006108 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall UT_CaretSet(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rsi
  __int64 v5; // rax

  v1 = 0;
  v3 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v3 + 304)
    && (*(_DWORD *)(v3 + 360) == (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent)
     || (v5 = PtiFromThreadId()) != 0 && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(v5 + 424)) )
  {
    if ( a1 )
    {
      LOBYTE(v1) = a1 == *(struct tagWND **)(v3 + 304);
      return v1;
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
