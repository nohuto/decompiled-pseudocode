__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // esi
  unsigned int v7; // edx
  struct tagWND *v8; // rcx
  int v9; // edi

  v4 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = *(_DWORD *)(v4 + 12);
  v7 = v6 & 0xFFFFFFFC;
  if ( a2 )
    v7 = a2 | *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v7;
  if ( v6 == v7 )
    return 0LL;
  if ( (unsigned int)IsVisible((__int64)a1) )
    xxxInvalidateRect(v8, 0LL, 1);
  v9 = *(_DWORD *)(v5 + 12);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v9) & 1) != 0 )
    xxxWindowEvent(0x800Au, a1, -4, 1u, 1);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v9) & 2) != 0 )
    xxxWindowEvent(0x800Au, a1, -4, 5u, 1);
  return 1LL;
}
