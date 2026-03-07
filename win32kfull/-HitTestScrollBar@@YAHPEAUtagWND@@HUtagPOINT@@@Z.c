__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  int v6; // esi
  LONG *v7; // rbp
  int v8; // edi
  LONG y; // r14d
  LONG x; // ebx
  __int64 v11; // rcx
  LONG *v12; // rcx
  LONG *v13; // rax
  LONG *v14; // rdx
  LONG *v15; // rbp
  _BYTE v18[36]; // [rsp+30h] [rbp-88h] BYREF
  char v19; // [rsp+54h] [rbp-64h] BYREF
  char v20; // [rsp+58h] [rbp-60h] BYREF
  char v21; // [rsp+60h] [rbp-58h] BYREF
  char v22; // [rsp+64h] [rbp-54h] BYREF

  memset_0(v18, 0, 0x40uLL);
  v5 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v6 = 0;
  v7 = (LONG *)v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(v5 + 12);
    y = a3.y;
    x = a3.x;
  }
  else
  {
    v11 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v11 + 26) & 0x40) == 0 || a2 )
      x = a3.x - *(_DWORD *)(v11 + 88);
    else
      x = *(_DWORD *)(v11 + 96) - a3.x;
    y = a3.y - *(_DWORD *)(v11 + 92);
    LOBYTE(v8) = GetWndSBDisableFlags((__int64)a1, a2);
  }
  if ( (v8 & 3) == 3 )
    return 4294967294LL;
  if ( v7 )
  {
    v12 = v7 + 16;
    v13 = v7 + 17;
    v14 = v7 + 14;
    v15 = v7 + 13;
  }
  else
  {
    CalcSBStuff((__int64)a1, (__int64)v18, a2);
    v12 = (LONG *)&v21;
    v13 = (LONG *)&v22;
    v14 = (LONG *)&v20;
    v15 = (LONG *)&v19;
  }
  if ( a2 )
    x = y;
  if ( x < *v15 )
  {
    if ( (v8 & 1) == 0 )
      return 60LL;
    return 4294967294LL;
  }
  if ( x >= *v14 )
    return (v8 & 2) != 0 ? -2 : 61;
  if ( x < *v13 )
    return 62LL;
  LOBYTE(v6) = x < *v12;
  return (unsigned int)(v6 + 63);
}
