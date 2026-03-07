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
    if ( *(_DWORD *)(v4 + 324) != a1 || *(_DWORD *)(v4 + 328) != a2 )
    {
      v5 = *(_QWORD *)(v4 + 304);
      if ( v5 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 136) + 8LL) + 8LL) & 0x20) != 0 )
      {
        v9 = a1 + *(_DWORD *)(v4 + 336);
        v10 = a2 + *(_DWORD *)(v4 + 332);
        DC = (HDC)_GetDC();
        GreTransformPoints(DC, 1);
        _ReleaseDC(DC);
        *(_DWORD *)(v4 + 364) = a1;
        *(_DWORD *)(v4 + 372) = v9 - a1;
        *(_DWORD *)(v4 + 368) = a2;
        *(_DWORD *)(v4 + 376) = v10 - a2;
      }
      if ( (*(_DWORD *)(v4 + 312) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v4 + 324) = a1;
      *(_DWORD *)(v4 + 328) = a2;
      if ( *(_QWORD *)(v4 + 352) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v4 + 304), (struct tagQ *)v4);
        CreateCaretTimer(*(struct tagWND **)(v4 + 304), (struct tagQ *)v4);
      }
      v6 = *(_DWORD *)(v4 + 312) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v4 + 312) = v6;
      if ( !*(_DWORD *)(v4 + 316) )
      {
        *(_DWORD *)(v4 + 312) = v6 | 1;
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
