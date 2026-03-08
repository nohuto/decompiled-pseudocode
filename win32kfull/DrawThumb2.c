/*
 * XREFs of DrawThumb2 @ 0x1C0013FB8
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0013CD4 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C022B9E0 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022C1A4 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022C460 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00140F0 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     DrawPushButton @ 0x1C0086E34 (DrawPushButton.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022BEFC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(__int64 a1, _DWORD *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  int v6; // eax
  LONG v11; // edx
  LONG v12; // r8d
  struct tagRECT *p_top; // rax
  struct tagRECT *v14; // rbx
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // ecx
  __int64 v19; // rbx
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct tagRECT v23; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2[5];
  v23 = 0LL;
  if ( a2[4] < v6 )
  {
    v11 = a2[6];
    v12 = a2[7];
    if ( v11 < v12 )
    {
      p_top = (struct tagRECT *)&v23.top;
      v14 = &v23;
      if ( a5 )
      {
        p_top = &v23;
        v14 = (struct tagRECT *)&v23.top;
      }
      p_top->left = v11;
      p_top->right = v12;
      if ( (a6 & 3) == 3 || (v15 = a2[9], a2[10] - v15 < a2[8]) )
      {
        v14->left = a2[9];
        v14->right = a2[10];
        DrawGroove(a3, a4, &v23, a5);
      }
      else
      {
        v16 = a2[13];
        if ( v15 < v16 )
        {
          v14->left = v15;
          v14->right = v16;
          DrawGroove(a3, a4, &v23, a5);
        }
        v17 = a2[12];
        v18 = a2[10];
        if ( v17 < v18 )
        {
          v14->right = v18;
          v14->left = v17;
          DrawGroove(a3, a4, &v23, a5);
        }
        v14->left = a2[13];
        v14->right = a2[12];
        DrawPushButton(a3);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 720LL);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 56);
          if ( (unsigned int)(v20 - 2) <= 1 && a1 == *(_QWORD *)(v19 + 8) && ((*(_DWORD *)v19 >> 1) & 1) == a5 )
          {
            if ( (*(_DWORD *)v19 & 8) != 0 )
            {
              RecalcTrackRect((struct tagSBTRACK *)v19);
              *(_DWORD *)v19 &= ~8u;
              v20 = *(_DWORD *)(v19 + 56);
            }
            v21 = a5 != 0 ? 36LL : 32LL;
            v22 = v21 + v19;
            if ( v20 == 2 )
              *(_DWORD *)(v22 + 8) = a2[13];
            else
              *(_DWORD *)(v21 + v19) = a2[12];
            if ( *(_DWORD *)(v21 + v19) < *(_DWORD *)(v22 + 8) )
              NtGdiPatBlt(
                a3,
                *(_DWORD *)(v19 + 32),
                *(_DWORD *)(v19 + 36),
                *(_DWORD *)(v19 + 40) - *(_DWORD *)(v19 + 32),
                *(_DWORD *)(v19 + 44) - *(_DWORD *)(v19 + 36),
                5570569);
          }
        }
      }
    }
  }
}
