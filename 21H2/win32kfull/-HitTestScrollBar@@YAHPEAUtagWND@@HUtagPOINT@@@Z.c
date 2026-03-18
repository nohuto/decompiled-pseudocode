/*
 * XREFs of ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02405EC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     GetWndSBDisableFlags @ 0x1C0065218 (GetWndSBDisableFlags.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D0504 (safe_cast_fnid_to_PSBWND.c)
 */

__int64 __fastcall HitTestScrollBar(struct tagWND *a1, unsigned int a2, struct tagPOINT a3)
{
  __int64 v5; // rax
  int v6; // edi
  LONG *v7; // rsi
  int v8; // ebp
  LONG y; // r14d
  LONG x; // ebx
  __int64 v11; // rcx
  LONG *v12; // rcx
  LONG *v13; // rax
  LONG *v14; // rdx
  LONG *v15; // rsi
  _BYTE v18[64]; // [rsp+30h] [rbp-88h] BYREF

  memset(v18, 0, sizeof(v18));
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
    v12 = (LONG *)&v18[48];
    v13 = (LONG *)&v18[52];
    v14 = (LONG *)&v18[40];
    v15 = (LONG *)&v18[36];
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
  {
    if ( (v8 & 2) == 0 )
      return 61LL;
    return 4294967294LL;
  }
  if ( x < *v13 )
    return 62LL;
  LOBYTE(v6) = x < *v12;
  return (unsigned int)(v6 + 63);
}
