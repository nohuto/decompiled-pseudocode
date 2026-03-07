void __fastcall TransformRectAroundCursor(
        struct MOVESIZEDATA *a1,
        const struct tagRECT *a2,
        unsigned __int16 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int16 a6)
{
  INT v9; // ebp
  __int64 v10; // rcx
  INT v11; // r8d
  INT v12; // edx
  int v13; // edx
  LONG right; // eax

  v9 = a3;
  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *(_QWORD *)((char *)a1 + 268));
  if ( (W32GetCurrentThreadDpiAwarenessContext(v10) & 0xF) == 2 )
  {
    if ( a4 )
    {
      v11 = a2->bottom - a2->top;
      v12 = a4->bottom - a4->top;
    }
    else
    {
      v11 = v9;
      v12 = a6;
    }
    v13 = *((_DWORD *)a1 + 43) - EngMulDiv(*((_DWORD *)a1 + 43), v12, v11);
    right = a5->right;
    a5->bottom += v13;
    a5->top += v13;
    a5->right = right;
  }
}
