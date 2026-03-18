/*
 * XREFs of CalcSBStuff @ 0x1C0065248
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C00C5DC8 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02405EC (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C024082C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240ACC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 * Callees:
 *     CalcSBStuff2 @ 0x1C0065364 (CalcSBStuff2.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     _InitPwSB @ 0x1C006884C (_InitPwSB.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  int v10; // edi
  bool v11; // zf
  unsigned int v12; // eax
  __int64 result; // rax
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
    if ( (*(_BYTE *)(v8 + 25) & 0x40) != 0 )
    {
      v11 = (*(_BYTE *)(v8 + 16) & 2) == 0;
      v17 = v10;
      v19 = v10;
      if ( !v11 )
      {
        DpiForSystem = GetDpiForSystem(v7, v6);
        v17 = v10 - GetDpiDependentMetric(0LL, DpiForSystem);
      }
    }
    else
    {
      v11 = (*(_BYTE *)(v8 + 16) & 2) == 0;
      v17 = v9;
      v19 = v9;
      if ( !v11 )
      {
        v12 = GetDpiForSystem(v7, v6);
        v19 = v9 + GetDpiDependentMetric(0LL, v12);
      }
    }
    v18 = DWORD1(v21);
    v20 = HIDWORD(v21);
  }
  else
  {
    v11 = (*(_BYTE *)(v8 + 16) & 4) == 0;
    v14 = HIDWORD(v21);
    v18 = HIDWORD(v21);
    v20 = HIDWORD(v21);
    if ( !v11 )
    {
      v15 = ((__int64 (*)(void))GetDpiForSystem)();
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
