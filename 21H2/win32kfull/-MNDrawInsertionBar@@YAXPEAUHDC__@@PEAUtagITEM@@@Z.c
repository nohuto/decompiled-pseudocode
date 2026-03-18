/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00BE6B4
 * Callers:
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00BE508 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  _DWORD *v2; // r9
  int v3; // r11d
  int v4; // r14d
  int v5; // edi
  int v6; // esi
  int v7; // r8d
  int v8; // ebx
  __int64 v9; // r15
  int v10; // r10d
  _DWORD v11[4]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-19h]
  int v13; // [rsp+50h] [rbp-11h]
  int v14; // [rsp+54h] [rbp-Dh]
  int v15; // [rsp+58h] [rbp-9h]
  int v16; // [rsp+5Ch] [rbp-5h]
  __int64 v17; // [rsp+60h] [rbp-1h]
  int v18; // [rsp+68h] [rbp+7h]
  int v19; // [rsp+6Ch] [rbp+Bh]
  int v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  __int64 v22; // [rsp+78h] [rbp+17h]

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v3 < 0 || (v3 & 0x40000000) != 0 )
  {
    v4 = v2[16];
    v5 = *(_DWORD *)(gpsi + 2168LL);
    v6 = *(_DWORD *)(gpsi + 2172LL);
    v11[2] = v5;
    v11[3] = v6;
    v11[0] = v4 + v5;
    if ( v3 >= 0 )
    {
      v8 = v2[17];
      v7 = v8 + v2[19] - v6;
    }
    else
    {
      v7 = v2[17];
      v8 = v7;
    }
    v9 = *(_QWORD *)(gpsi + 4800LL);
    v10 = v2[18];
    v13 = v4 + 2 * v5;
    v11[1] = v7;
    v12 = v9;
    v15 = v10 - 4 * v5;
    v16 = v6 / 2;
    if ( v3 >= 0 )
      v14 = v8 + v2[19] - v6 / 2;
    else
      v14 = v8;
    v19 = v7;
    v17 = v9;
    v18 = v4 + v10 - 2 * v5;
    v20 = v5;
    v21 = v6;
    v22 = v9;
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v11, 3u);
  }
}
