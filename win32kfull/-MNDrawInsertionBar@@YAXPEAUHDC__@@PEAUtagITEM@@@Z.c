/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C023656C
 * Callers:
 *     xxxDrawMenuItem @ 0x1C0237914 (xxxDrawMenuItem.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
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
  int v11; // [rsp+28h] [rbp-39h]
  _DWORD v12[4]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h]
  int v14; // [rsp+50h] [rbp-11h]
  int v15; // [rsp+54h] [rbp-Dh]
  int v16; // [rsp+58h] [rbp-9h]
  int v17; // [rsp+5Ch] [rbp-5h]
  __int64 v18; // [rsp+60h] [rbp-1h]
  int v19; // [rsp+68h] [rbp+7h]
  int v20; // [rsp+6Ch] [rbp+Bh]
  int v21; // [rsp+70h] [rbp+Fh]
  int v22; // [rsp+74h] [rbp+13h]
  __int64 v23; // [rsp+78h] [rbp+17h]

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v3 < 0 || (v3 & 0x40000000) != 0 )
  {
    v4 = v2[16];
    v5 = *(_DWORD *)(gpsi + 2168LL);
    v6 = *(_DWORD *)(gpsi + 2172LL);
    v12[2] = v5;
    v12[3] = v6;
    v12[0] = v5 + v4;
    if ( v3 >= 0 )
    {
      v8 = v2[17];
      v7 = v2[19] + v8 - v6;
    }
    else
    {
      v7 = v2[17];
      v8 = v7;
    }
    v9 = *(_QWORD *)(gpsi + 4800LL);
    v10 = v2[18];
    v14 = v4 + 2 * v5;
    v12[1] = v7;
    v13 = v9;
    v16 = v10 - 4 * v5;
    v17 = v6 / 2;
    if ( v3 >= 0 )
      v15 = v8 + v2[19] - v6 / 2;
    else
      v15 = v8;
    v20 = v7;
    v18 = v9;
    v19 = v4 + v10 - 2 * v5;
    v21 = v5;
    v22 = v6;
    v23 = v9;
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v12, 3u, v11);
  }
}
