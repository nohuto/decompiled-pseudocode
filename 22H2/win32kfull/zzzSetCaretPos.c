/*
 * XREFs of zzzSetCaretPos @ 0x1C002B450
 * Callers:
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0244EB0 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002B400 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002C928 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0044F6C (-UT_InvertCaret@@YAXXZ.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C0069BFC (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     GreTransformPoints @ 0x1C00FA30C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(int a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // eax
  HDC DC; // rbx
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v4 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( *(_DWORD *)(v4 + 316) != a1 || *(_DWORD *)(v4 + 320) != a2 )
    {
      v5 = *(_QWORD *)(v4 + 296);
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 136) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v9 = a1 + *(_DWORD *)(v4 + 328);
        v10 = a2 + *(_DWORD *)(v4 + 324);
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, 1);
        _ReleaseDC(DC);
        *(_DWORD *)(v4 + 356) = a1;
        *(_DWORD *)(v4 + 364) = v9 - a1;
        *(_DWORD *)(v4 + 360) = a2;
        *(_DWORD *)(v4 + 368) = v10 - a2;
      }
      if ( (*(_DWORD *)(v4 + 304) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v4 + 316) = a1;
      *(_DWORD *)(v4 + 320) = a2;
      if ( *(_QWORD *)(v4 + 344) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v4 + 296), (struct tagQ *)v4);
        CreateCaretTimer(*(struct tagWND **)(v4 + 296), (struct tagQ *)v4);
      }
      v6 = *(_DWORD *)(v4 + 304) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v4 + 304) = v6;
      if ( !*(_DWORD *)(v4 + 308) )
      {
        *(_DWORD *)(v4 + 304) = v6 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL);
    return 0LL;
  }
}
