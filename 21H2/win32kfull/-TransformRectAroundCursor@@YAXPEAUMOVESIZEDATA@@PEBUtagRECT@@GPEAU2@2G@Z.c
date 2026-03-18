/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEAUMOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01DEEF0
 * Callers:
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01DE8CC (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     TransformRectAroundPoint @ 0x1C01DFE94 (TransformRectAroundPoint.c)
 */

void __fastcall TransformRectAroundCursor(
        struct MOVESIZEDATA *a1,
        const struct tagRECT *a2,
        unsigned __int16 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int16 a6)
{
  INT v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  INT v12; // r8d
  INT v13; // edx
  int v14; // ecx

  v9 = a3;
  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *((_QWORD *)a1 + 34));
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10) & 0xF) == 2 )
  {
    if ( a4 )
    {
      v12 = a2->bottom - a2->top;
      v13 = a4->bottom - a4->top;
    }
    else
    {
      v12 = v9;
      v13 = a6;
    }
    v14 = *((_DWORD *)a1 + 43) - EngMulDiv(*((_DWORD *)a1 + 43), v13, v12);
    a5->bottom += v14;
    a5->top += v14;
  }
}
