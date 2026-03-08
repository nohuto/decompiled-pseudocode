/*
 * XREFs of CalcSBStuff @ 0x1C00D9FC8
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0013C30 (xxxDrawScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00D9CEC (xxxGetScrollBarInfo.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C022BCB4 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C022BEFC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022C1A4 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C022CC6C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C022D18C (xxxSBTrackInit.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     _InitPwSB @ 0x1C00DA0E8 (_InitPwSB.c)
 *     CalcSBStuff2 @ 0x1C00DA144 (CalcSBStuff2.c)
 */

__int64 __fastcall CalcSBStuff(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  __int64 result; // rax
  bool v12; // zf
  int v13; // esi
  int v14; // eax
  int DpiForSystem; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  int v17; // [rsp+24h] [rbp-1Ch]
  int v18; // [rsp+28h] [rbp-18h]
  int v19; // [rsp+2Ch] [rbp-14h]
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF

  v20 = 0LL;
  GetRect(a1, (__int64)&v20, 33);
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 26) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 88) - DWORD2(v20);
    v8 = *(_DWORD *)(v7 + 96) - *(_DWORD *)(v7 + 88) - v20;
  }
  else
  {
    v8 = DWORD2(v20);
    v9 = v20;
  }
  if ( a3 )
  {
    LOBYTE(v6) = *(_BYTE *)(v7 + 16) & 2;
    if ( (*(_BYTE *)(v7 + 25) & 0x40) != 0 )
    {
      v16 = v9;
      v18 = v9;
      if ( (_BYTE)v6 )
      {
        DpiForSystem = GetDpiForSystem(v6);
        v16 = v9 - GetDpiDependentMetric(0, DpiForSystem);
      }
    }
    else
    {
      v16 = v8;
      v18 = v8;
      if ( (_BYTE)v6 )
      {
        v10 = GetDpiForSystem(v6);
        v18 = v8 + GetDpiDependentMetric(0, v10);
      }
    }
    v17 = DWORD1(v20);
    v19 = HIDWORD(v20);
  }
  else
  {
    v12 = (*(_BYTE *)(v7 + 16) & 4) == 0;
    v13 = HIDWORD(v20);
    v17 = HIDWORD(v20);
    v19 = HIDWORD(v20);
    if ( !v12 )
    {
      v14 = GetDpiForSystem(v6);
      v19 = v13 + GetDpiDependentMetric(1, v14);
    }
    v16 = v9;
    v18 = v8;
  }
  result = InitPwSB(a1);
  if ( result )
    return CalcSBStuff2(a2, &v16, *(_QWORD *)(a1 + 152) + (a3 != 0 ? 20LL : 4LL), a3);
  return result;
}
