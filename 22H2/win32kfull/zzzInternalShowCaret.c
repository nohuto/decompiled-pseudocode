/*
 * XREFs of zzzInternalShowCaret @ 0x1C006A08C
 * Callers:
 *     xxxEndPaint @ 0x1C00461A0 (xxxEndPaint.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     NtUserShowCaret @ 0x1C0069B00 (NtUserShowCaret.c)
 *     zzzShowCaret @ 0x1C0241324 (zzzShowCaret.c)
 * Callees:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C002C928 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0044F6C (-UT_InvertCaret@@YAXXZ.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(_DWORD *)(v0 + 308);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 308) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 304) ^ ((unsigned __int8)*(_DWORD *)(v0 + 304) ^ (unsigned __int8)(*(_DWORD *)(v0 + 304) >> 1)) & 1;
      *(_DWORD *)(v0 + 304) = v3;
      if ( (v3 & 1) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 296), (struct tagQ *)v0);
      xxxWindowEvent(0x8002u, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v4 = *(_DWORD *)(v0 + 304);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 304) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1;
      if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret();
    }
  }
}
