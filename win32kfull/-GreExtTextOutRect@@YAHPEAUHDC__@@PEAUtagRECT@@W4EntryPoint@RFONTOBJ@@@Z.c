/*
 * XREFs of ?GreExtTextOutRect@@YAHPEAUHDC__@@PEAUtagRECT@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0025810
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C01143A0 (NtGdiExtTextOutW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007FBDC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C0081D78 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  int v11; // [rsp+48h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+58h] [rbp-28h]
  int v14; // [rsp+5Ch] [rbp-24h]
  __int16 v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp-8h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF
  int v20; // [rsp+ACh] [rbp+2Ch]

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    if ( (*(_DWORD *)(v8[0] + 36LL) & 0x10000) == 0 )
    {
      v5 = *(unsigned __int16 *)(v8[0] + 12LL);
      v13 = 0;
      v14 = 0;
      v10 = 0LL;
      v11 = 0;
      v12 = 0LL;
      v18 = 0LL;
      v17 = 0LL;
      v16 = 0LL;
      v20 = v5;
      v9 = 0LL;
      v19 = 24;
      v15 = 256;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v9, (struct XDCOBJ *)v8, 0) )
        v6 = ExtTextOutRect((struct XDCOBJ *)v8, a2, (const struct RFONTOBJ::Tag *)&v19);
      else
        v6 = XDCOBJ::bFullScreen((XDCOBJ *)v8);
      v3 = v6;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v9);
      if ( v12 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v12);
      v4 = v8[0];
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v3;
}
