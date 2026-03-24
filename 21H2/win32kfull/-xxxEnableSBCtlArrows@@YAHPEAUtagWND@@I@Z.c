/*
 * XREFs of ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0244C5C
 * Callers:
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     IsVisible @ 0x1C0068164 (IsVisible.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D47C8 (safe_cast_fnid_to_PSBWND.c)
 *     xxxInvalidateRect @ 0x1C023533C (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // ebp
  unsigned int v7; // ebx
  struct tagWND *v8; // rcx

  v4 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = v6 & 0xFFFFFFFC;
  if ( a2 )
    v7 = v6 | a2;
  *(_DWORD *)(v4 + 12) = v7;
  if ( v6 == v7 )
    return 0LL;
  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    xxxInvalidateRect(v8, 0LL, 1);
    v7 = *(_DWORD *)(v5 + 12);
  }
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 1) != 0 )
    xxxWindowEvent(0x800Au, a1, -4, 1u, 1u);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v7) & 2) != 0 )
    xxxWindowEvent(0x800Au, a1, -4, 5u, 1u);
  return 1LL;
}
