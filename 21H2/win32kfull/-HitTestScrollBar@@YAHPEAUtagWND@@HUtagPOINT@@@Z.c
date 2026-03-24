/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0244664
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0063DA0 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C015849C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D47C8 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  int v7; // edi
  LONG *v8; // rsi
  int v9; // r14d
  LONG y; // r15d
  LONG x; // ebx
  __int64 v12; // rcx
  LONG *v13; // rcx
  LONG *v14; // rax
  LONG *v15; // rdx
  LONG *v16; // rsi
  int v19[9]; // [rsp+30h] [rbp-50h] BYREF
  char v20; // [rsp+54h] [rbp-2Ch] BYREF
  char v21; // [rsp+58h] [rbp-28h] BYREF
  char v22; // [rsp+60h] [rbp-20h] BYREF
  char v23; // [rsp+64h] [rbp-1Ch] BYREF

  v5 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v7 = 0;
  v8 = (LONG *)v5;
  if ( v5 )
  {
    v9 = *(_DWORD *)(v5 + 12);
    y = a3.y;
    x = a3.x;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v12 + 26) & 0x40) == 0 || a2 )
      x = a3.x - *(_DWORD *)(v12 + 88);
    else
      x = *(_DWORD *)(v12 + 96) - a3.x;
    y = a3.y - *(_DWORD *)(v12 + 92);
    LOBYTE(v9) = GetWndSBDisableFlags((__int64)a1, a2, v6);
  }
  if ( (v9 & 3) == 3 )
    return 4294967294LL;
  if ( v8 )
  {
    v13 = v8 + 16;
    v14 = v8 + 17;
    v15 = v8 + 14;
    v16 = v8 + 13;
  }
  else
  {
    CalcSBStuff((__int64)a1, v19, a2);
    v13 = (LONG *)&v22;
    v14 = (LONG *)&v23;
    v15 = (LONG *)&v21;
    v16 = (LONG *)&v20;
  }
  if ( a2 )
    x = y;
  if ( x < *v16 )
  {
    if ( (v9 & 1) == 0 )
      return 60LL;
    return 4294967294LL;
  }
  if ( x >= *v15 )
  {
    if ( (v9 & 2) == 0 )
      return 61LL;
    return 4294967294LL;
  }
  if ( x < *v14 )
    return 62LL;
  LOBYTE(v7) = x < *v13;
  return (unsigned int)(v7 + 63);
}
