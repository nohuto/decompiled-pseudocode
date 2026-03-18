/*
 * XREFs of CalcSBStuff @ 0x1C00C7878
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00149D0 (xxxDrawScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00C73CC (xxxGetScrollBarInfo.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0228F94 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02291DC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0229484 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0229F4C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C022A46C (xxxSBTrackInit.c)
 * Callees:
 *     _InitPwSB @ 0x1C00C7998 (_InitPwSB.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     CalcSBStuff2 @ 0x1C00C7CF4 (CalcSBStuff2.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edi
  unsigned int v11; // eax
  __int64 result; // rax
  bool v13; // zf
  int v14; // esi
  unsigned int v15; // eax
  unsigned int DpiForSystem; // eax
  int v17; // [rsp+20h] [rbp-20h] BYREF
  int v18; // [rsp+24h] [rbp-1Ch]
  int v19; // [rsp+28h] [rbp-18h]
  int v20; // [rsp+2Ch] [rbp-14h]
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF

  v21 = 0LL;
  GetRect(a1, &v21, 33LL);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 26) & 0x40) != 0 )
  {
    v10 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - DWORD2(v21);
    v9 = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 88) - v21;
  }
  else
  {
    v9 = DWORD2(v21);
    v10 = v21;
  }
  if ( a3 )
  {
    LOBYTE(v7) = *(_BYTE *)(v8 + 16) & 2;
    if ( (*(_BYTE *)(v8 + 25) & 0x40) != 0 )
    {
      v17 = v10;
      v19 = v10;
      if ( (_BYTE)v7 )
      {
        DpiForSystem = GetDpiForSystem(v7, v6);
        v17 = v10 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v17 = v9;
      v19 = v9;
      if ( (_BYTE)v7 )
      {
        v11 = GetDpiForSystem(v7, v6);
        v19 = v9 + GetDpiDependentMetric(0LL, v11);
      }
    }
    v18 = DWORD1(v21);
    v20 = HIDWORD(v21);
  }
  else
  {
    v13 = (*(_BYTE *)(v8 + 16) & 4) == 0;
    v14 = HIDWORD(v21);
    v18 = HIDWORD(v21);
    v20 = HIDWORD(v21);
    if ( !v13 )
    {
      v15 = GetDpiForSystem(v7, v6);
      v20 = v14 + GetDpiDependentMetric(1LL, v15);
    }
    v17 = v10;
    v19 = v9;
  }
  result = InitPwSB(a1);
  if ( result )
    return CalcSBStuff2(a2, &v17, *(_QWORD *)(a1 + 152) + (a3 != 0 ? 20LL : 4LL), a3);
  return result;
}
