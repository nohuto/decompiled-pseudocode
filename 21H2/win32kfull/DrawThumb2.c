/*
 * XREFs of DrawThumb2 @ 0x1C00C5BBC
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C02402EC (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240ACC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240DA0 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     DrawPushButton @ 0x1C00C16F0 (DrawPushButton.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00C5B6C (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C024082C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(__int64 a1, _DWORD *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  int v6; // eax
  LONG v11; // edx
  LONG v12; // r8d
  struct tagRECT *p_top; // rax
  struct tagRECT *v14; // rbx
  LONG v15; // ecx
  LONG v16; // edx
  LONG v17; // eax
  LONG v18; // r8d
  LONG v19; // eax
  __int64 v20; // rbx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  struct tagRECT v25; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2[5];
  v25 = 0LL;
  if ( a2[4] < v6 )
  {
    v11 = a2[6];
    v12 = a2[7];
    if ( v11 < v12 )
    {
      p_top = (struct tagRECT *)&v25.top;
      v14 = &v25;
      if ( a5 )
      {
        p_top = &v25;
        v14 = (struct tagRECT *)&v25.top;
      }
      p_top->left = v11;
      p_top->right = v12;
      if ( (a6 & 3) == 3 || (v15 = a2[10], v16 = a2[9], v15 - v16 < a2[8]) )
      {
        v14->left = a2[9];
        v14->right = a2[10];
        DrawGroove(a3, a4, &v25, a5);
      }
      else
      {
        v17 = a2[13];
        if ( v16 < v17 )
        {
          v14->left = v16;
          v14->right = v17;
          DrawGroove(a3, a4, &v25, a5);
          v15 = a2[10];
        }
        v18 = a2[12];
        if ( v18 < v15 )
        {
          v14->left = v18;
          v14->right = v15;
          DrawGroove(a3, a4, &v25, a5);
          v18 = a2[12];
        }
        v19 = a2[13];
        v14->right = v18;
        v14->left = v19;
        DrawPushButton(a3, &v25, 0, 0);
        v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 720LL);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v20 + 56);
          if ( (unsigned int)(v21 - 2) <= 1 && a1 == *(_QWORD *)(v20 + 8) && ((*(_DWORD *)v20 >> 1) & 1) == a5 )
          {
            if ( (*(_DWORD *)v20 & 8) != 0 )
            {
              RecalcTrackRect((struct tagSBTRACK *)v20);
              *(_DWORD *)v20 &= ~8u;
              v21 = *(_DWORD *)(v20 + 56);
            }
            v22 = a5 != 0 ? 4 : 0;
            if ( v21 == 2 )
            {
              v23 = a2[13];
              v24 = *(_DWORD *)(v22 + v20 + 32);
              *(_DWORD *)(v22 + v20 + 40) = v23;
            }
            else
            {
              v24 = a2[12];
              v23 = *(_DWORD *)(v22 + v20 + 40);
              *(_DWORD *)(v22 + v20 + 32) = v24;
            }
            if ( v24 < v23 )
              NtGdiPatBlt(
                a3,
                *(_DWORD *)(v20 + 32),
                *(_DWORD *)(v20 + 36),
                *(_DWORD *)(v20 + 40) - *(_DWORD *)(v20 + 32),
                *(_DWORD *)(v20 + 44) - *(_DWORD *)(v20 + 36),
                5570569);
          }
        }
      }
    }
  }
}
