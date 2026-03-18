/*
 * XREFs of UpdateRedirectedDCE @ 0x1C008EDF0
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C008EC6C (ChangeRedirectionParentInDCEs.c)
 *     RedirectDCEs @ 0x1C00D3618 (RedirectDCEs.c)
 *     UnredirectDCEs @ 0x1C00D3C74 (UnredirectDCEs.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C002F2A0 (GreSelectRedirectionBitmap.c)
 *     GreHintDCWnd @ 0x1C008EF30 (GreHintDCWnd.c)
 *     RevalidateDCE @ 0x1C008F0E0 (RevalidateDCE.c)
 *     GetStyleWindow @ 0x1C0119070 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C011DD30 (GetRedirectionBitmap.c)
 */

__int64 __fastcall UpdateRedirectedDCE(__int64 a1, int a2)
{
  HBITMAP RedirectionBitmap; // rsi
  __int64 StyleWindow; // rax
  _QWORD *v6; // rdi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx

  RedirectionBitmap = 0LL;
  StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848LL);
  v6 = (_QWORD *)StyleWindow;
  if ( StyleWindow )
    RedirectionBitmap = (HBITMAP)GetRedirectionBitmap(StyleWindow);
  v7 = GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), RedirectionBitmap);
  v8 = 1;
  if ( !v7 )
    GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v6 )
  {
    v11 = v9 | 0x4000;
    v12 = 5LL;
  }
  else
  {
    v11 = v9 & 0xFFFFBFFF;
    v12 = 6LL;
  }
  *(_DWORD *)(a1 + 64) = v11;
  result = GreGetBounds(v10, 0LL, v12);
  if ( *(_QWORD **)(a1 + 32) == v6 )
  {
    v8 = a2;
    if ( !v6 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v14 = *(_QWORD **)(a1 + 16);
  v15 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 32) = v6;
  GreHintDCWnd(v15, *v14, 0, 0, 0);
  if ( v6 )
  {
    v17 = v6[5];
    if ( (*(_BYTE *)(v17 + 26) & 8) != 0 )
    {
      LOBYTE(v16) = ~*(_BYTE *)(v17 + 27);
      GreHintDCWnd(
        *(_QWORD *)(a1 + 8),
        **(_QWORD **)(a1 + 16),
        *v6,
        (v16 >> 1) & 1,
        (*(_WORD *)(v17 + 42) & 0x2FFF) == 669);
    }
LABEL_12:
    result = *(_QWORD *)(a1 + 16);
    if ( (_QWORD *)result == v6 )
      *(_QWORD *)(a1 + 24) = result;
LABEL_14:
    if ( !v8 )
      return result;
  }
  return RevalidateDCE(a1);
}
