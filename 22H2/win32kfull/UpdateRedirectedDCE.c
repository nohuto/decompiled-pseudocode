/*
 * XREFs of UpdateRedirectedDCE @ 0x1C00D4F90
 * Callers:
 *     UnredirectDCEs @ 0x1C004C19C (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C004C470 (RedirectDCEs.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C004C63C (ChangeRedirectionParentInDCEs.c)
 * Callees:
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     GreSelectRedirectionBitmap @ 0x1C0083440 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1C00BEBC0 (GetRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C00D50D0 (GreHintDCWnd.c)
 *     RevalidateDCE @ 0x1C00D52B0 (RevalidateDCE.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  HBITMAP RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
  v6 = (_QWORD *)StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = (HBITMAP)GetRedirectionBitmap(StyleWindow);
  if ( !(unsigned int)GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), RedirectionBitmap) )
    GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v9 = v7 | 0x4000;
    v10 = 5LL;
  }
  else
  {
    v9 = v7 & 0xFFFFBFFF;
    v10 = 6LL;
  }
  *(_DWORD *)(a1 + 64) = v9;
  result = GreGetBounds(v8, 0LL, v10);
  if ( *(_QWORD **)(a1 + 32) != v6 )
  {
    v12 = *(_QWORD **)(a1 + 16);
    v13 = *(_QWORD *)(a1 + 8);
    a2 = 1;
    *(_QWORD *)(a1 + 32) = v6;
    result = GreHintDCWnd(v13, *v12, 0, 0, 0);
    if ( !v6 )
      return RevalidateDCE(a1);
    v15 = v6[5];
    if ( (*(_BYTE *)(v15 + 26) & 8) != 0 )
    {
      LOBYTE(v14) = ~*(_BYTE *)(v15 + 27);
      result = GreHintDCWnd(
                 *(_QWORD *)(a1 + 8),
                 **(_QWORD **)(a1 + 16),
                 *v6,
                 (v14 >> 1) & 1,
                 (*(_WORD *)(v15 + 42) & 0x2FFF) == 669);
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( (_QWORD *)result == v6 )
      *(_QWORD *)(a1 + 24) = result;
  }
  if ( a2 )
    return RevalidateDCE(a1);
  return result;
}
