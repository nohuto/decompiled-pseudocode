/*
 * XREFs of zzzSetCaretPos @ 0x1C010A5AC
 * Callers:
 *     NtUserSetCaretPos @ 0x1C010A560 (NtUserSetCaretPos.c)
 *     ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C02413D4 (-zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z.c)
 * Callees:
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1C00726A8 (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C2E38 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00C344C (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(LONG a1, LONG a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // edx
  int v8; // edx
  HDC DC; // rbx
  LONG y; // edx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  struct _POINTL v15; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+3Ch] [rbp-2Ch]

  if ( UT_CaretSet(0LL) )
  {
    v5 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( *(_DWORD *)(v5 + 316) != a1 || *(_DWORD *)(v5 + 320) != a2 )
    {
      v6 = *(_QWORD *)(v5 + 296);
      if ( v6 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 136) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v7 = a1 + *(_DWORD *)(v5 + 328);
        v15.x = a1;
        v16 = v7;
        v8 = a2 + *(_DWORD *)(v5 + 324);
        v15.y = a2;
        v17 = v8;
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, &v15, &v15, 2, 1);
        _ReleaseDC(DC);
        y = v15.y;
        v11 = v16 - v15.x;
        *(_DWORD *)(v5 + 356) = v15.x;
        *(_DWORD *)(v5 + 364) = v11;
        v12 = v17 - y;
        *(_DWORD *)(v5 + 360) = y;
        *(_DWORD *)(v5 + 368) = v12;
      }
      if ( (*(_DWORD *)(v5 + 304) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v5 + 316) = a1;
      *(_DWORD *)(v5 + 320) = a2;
      if ( *(_QWORD *)(v5 + 344) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v5 + 296), (struct tagQ *)v5);
        CreateCaretTimer(*(struct tagWND **)(v5 + 296), (struct tagQ *)v5);
      }
      v13 = *(_DWORD *)(v5 + 304) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v5 + 304) = v13;
      if ( !*(_DWORD *)(v5 + 308) )
      {
        *(_DWORD *)(v5 + 304) = v13 | 1;
        UT_InvertCaret();
      }
      xxxWindowEvent(0x800Bu, *(struct tagWND **)(v5 + 296), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v4);
    return 0LL;
  }
}
