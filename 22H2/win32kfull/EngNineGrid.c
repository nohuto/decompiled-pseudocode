/*
 * XREFs of EngNineGrid @ 0x1C00C8C30
 * Callers:
 *     ?EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z @ 0x1C027DB00 (-EngNineGridHelper@@YAHAEAVXDCOBJ@@PEAVPALETTE@@1PEAU_SURFOBJ@@2PEAU_RECTL@@3PEAU_MARGINS@@@Z.c)
 *     ?BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C0299950 (-BmpDevNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C029C1A0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 * Callees:
 *     xxEngNineGrid @ 0x1C00C8CF8 (xxEngNineGrid.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall EngNineGrid(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _DWORD v9[4]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v10; // [rsp+50h] [rbp-41h]
  POINTL *v11; // [rsp+58h] [rbp-39h]
  __int64 v12; // [rsp+60h] [rbp-31h]
  __int64 v13; // [rsp+68h] [rbp-29h]
  __int64 v14; // [rsp+70h] [rbp-21h]
  int v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+7Ch] [rbp-15h]
  __int64 v17; // [rsp+80h] [rbp-11h]

  v9[0] = 0;
  v16 = 0;
  if ( *(_WORD *)(a2 + 76) || *(_DWORD *)(a2 + 72) != 6 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v9[2] = *(_DWORD *)a8;
    v9[1] = *(_DWORD *)(a7 + 20);
    v11 = &gptlZero;
    v14 = *(_QWORD *)(a8 + 24);
    v13 = *(_QWORD *)(a8 + 16);
    v12 = *(_QWORD *)(a8 + 8);
    v10 = 0LL;
    v9[3] = 0;
    v17 = 0LL;
    v15 = 0;
    return xxEngNineGrid(a1, a5, a6, a7, (__int64)v9);
  }
}
