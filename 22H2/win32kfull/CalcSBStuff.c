/*
 * XREFs of CalcSBStuff @ 0x1C0063D00
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00629F0 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C0157970 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02440A4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02442D8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02445B4 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C024510C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0245640 (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     CalcSBStuff2 @ 0x1C0063AB4 (CalcSBStuff2.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     _InitPwSB @ 0x1C0063E20 (_InitPwSB.c)
 *     GetRect @ 0x1C0063E88 (GetRect.c)
 */

int __fastcall CalcSBStuff(__int64 a1, int *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // eax
  __int64 inited; // rax
  bool v12; // zf
  int v13; // esi
  unsigned int v14; // eax
  unsigned int DpiForSystem; // eax
  int v17; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+24h] [rbp-1Ch]
  int v19; // [rsp+28h] [rbp-18h]
  int v20; // [rsp+2Ch] [rbp-14h]
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF

  v21 = 0LL;
  GetRect(a1, &v21, 33LL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 26) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 88) - DWORD2(v21);
    v8 = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 88) - v21;
  }
  else
  {
    v8 = DWORD2(v21);
    v9 = v21;
  }
  if ( a3 )
  {
    LOBYTE(v6) = *(_BYTE *)(v7 + 16) & 2;
    if ( (*(_BYTE *)(v7 + 25) & 0x40) != 0 )
    {
      v17 = v9;
      v19 = v9;
      if ( (_BYTE)v6 )
      {
        DpiForSystem = GetDpiForSystem(v6);
        v17 = v9 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v17 = v8;
      v19 = v8;
      if ( (_BYTE)v6 )
      {
        v10 = GetDpiForSystem(v6);
        v19 = v8 + GetDpiDependentMetric(0LL, v10);
      }
    }
    v18 = DWORD1(v21);
    v20 = HIDWORD(v21);
  }
  else
  {
    v12 = (*(_BYTE *)(v7 + 16) & 4) == 0;
    v13 = HIDWORD(v21);
    v18 = HIDWORD(v21);
    v20 = HIDWORD(v21);
    if ( !v12 )
    {
      v14 = GetDpiForSystem(v6);
      v20 = v13 + GetDpiDependentMetric(1LL, v14);
    }
    v17 = v9;
    v19 = v8;
  }
  inited = InitPwSB(a1);
  if ( inited )
    LODWORD(inited) = CalcSBStuff2(a2, &v17, (int *)(*(_QWORD *)(a1 + 152) + (a3 != 0 ? 20LL : 4LL)), a3);
  return inited;
}
