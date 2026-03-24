/*
 * XREFs of ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0069BFC
 * Callers:
 *     zzzSetCaretPos @ 0x1C002B450 (zzzSetCaretPos.c)
 *     NtUserShowCaret @ 0x1C0069B00 (NtUserShowCaret.c)
 *     NtUserHideCaret @ 0x1C0069B80 (NtUserHideCaret.c)
 *     zzzDestroyCaret @ 0x1C0113930 (zzzDestroyCaret.c)
 *     zzzHideCaret @ 0x1C02412FC (zzzHideCaret.c)
 *     zzzShowCaret @ 0x1C0241324 (zzzShowCaret.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

_BOOL8 __fastcall UT_CaretSet(struct tagWND *a1)
{
  __int64 v2; // rbx
  unsigned int ThreadId; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v2 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( !*(_QWORD *)(v2 + 296)
    || (ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
        v5 = *(unsigned int *)(v2 + 352),
        (_DWORD)v5 != ThreadId)
    && ((v6 = PtiFromThreadId(v5)) == 0 || *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(v6 + 424)) )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  return !a1 || a1 == *(struct tagWND **)(v2 + 296);
}
