/*
 * XREFs of ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244898
 * Callers:
 *     DrawThumb2 @ 0x1C0158244 (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C02447F8 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245214 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxTrackBox @ 0x1C0246B40 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0246CB0 (xxxTrackThumb.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0063DA0 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0244158 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall RecalcTrackRect(struct tagSBTRACK *a1)
{
  unsigned int v1; // eax
  __int128 *v3; // r8
  __int128 *v4; // rcx
  _DWORD *v5; // rdx
  int v6; // r8d
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_DWORD *)a1;
  v8 = 0LL;
  if ( (v1 & 4) == 0 )
  {
    CalcSBStuff(*((_QWORD *)a1 + 1), *((int **)a1 + 12), (v1 >> 1) & 1);
    v1 = *(_DWORD *)a1;
  }
  v3 = &v8;
  v4 = (__int128 *)((char *)&v8 + 4);
  if ( (v1 & 2) == 0 )
  {
    v3 = (__int128 *)((char *)&v8 + 4);
    v4 = &v8;
  }
  v5 = (_DWORD *)*((_QWORD *)a1 + 12);
  *(_DWORD *)v3 = v5[6];
  *(_DWORD *)v4 = v5[4];
  *((_DWORD *)v3 + 2) = v5[7];
  v6 = *((_DWORD *)a1 + 14);
  *((_DWORD *)v4 + 2) = v5[5];
  if ( !v6 )
  {
    v6 = 0;
    *((_DWORD *)v4 + 2) = v5[9];
    goto LABEL_16;
  }
  if ( v6 == 1 )
  {
    *(_DWORD *)v4 = v5[10];
  }
  else
  {
    if ( v6 == 2 )
    {
      *(_DWORD *)v4 = v5[9];
      v7 = v5[13];
    }
    else
    {
      if ( v6 != 3 )
      {
        if ( v6 == 4 )
        {
          CalcTrackDragRect(a1);
          v6 = *((_DWORD *)a1 + 14);
        }
LABEL_16:
        if ( v6 == 4 )
          return;
        goto LABEL_17;
      }
      *(_DWORD *)v4 = v5[12];
      v7 = v5[10];
    }
    *((_DWORD *)v4 + 2) = v7;
  }
LABEL_17:
  *((_OWORD *)a1 + 2) = v8;
}
