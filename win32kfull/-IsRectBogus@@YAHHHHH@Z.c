/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A70F0
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A6F6C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C01A7408 (-TestRectBogus@@YAHUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(__int64 a1, int a2, int a3, int a4)
{
  int v7; // r14d
  __int64 v8; // r15
  unsigned int v9; // ebx
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  __m128i v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF

  v7 = a1;
  v8 = *(_QWORD *)(GetDispInfo(a1) + 96);
  v11 = (struct tagRECT)*GetMonitorWorkRect(&v12, v8);
  v9 = 0;
  if ( (unsigned int)TestRectBogus(&v11, v7, a2, a3, a4) )
    return 1;
  v11 = *(struct tagRECT *)GetMonitorRect(&v13, v8);
  if ( (unsigned int)TestRectBogus(&v11, v7, a2, a3, a4) )
    return 1;
  return v9;
}
