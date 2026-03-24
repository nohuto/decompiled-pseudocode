/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0111F38
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00191E0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C00199D0 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     EngHTBlt @ 0x1C0019E98 (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF9EC (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreCreateHalftonePalette @ 0x1C02B716C (GreCreateHalftonePalette.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C0112328 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C0112E2C (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0113080 (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  __int16 v6; // r9
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  signed __int32 v12; // ett
  __int64 v13; // rbx
  unsigned int v14; // edi
  signed __int32 v16; // ett
  __int64 v17; // rdi
  _QWORD *v18; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+30h] [rbp-D0h]
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  int Src; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v23; // [rsp+64h] [rbp-9Ch]
  __int16 v24; // [rsp+66h] [rbp-9Ah]
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+70h] [rbp-90h]
  _WORD *v27; // [rsp+80h] [rbp-80h]
  _WORD *v28; // [rsp+88h] [rbp-78h]
  __int16 v29; // [rsp+90h] [rbp-70h]
  __int16 v30; // [rsp+92h] [rbp-6Eh]
  __int16 v31; // [rsp+94h] [rbp-6Ch]
  __int16 v32; // [rsp+96h] [rbp-6Ah]
  __int128 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int16 v35; // [rsp+B0h] [rbp-50h]
  __int16 v36; // [rsp+B2h] [rbp-4Eh]
  __int16 v37; // [rsp+B4h] [rbp-4Ch]
  char v38; // [rsp+B6h] [rbp-4Ah]
  char v39; // [rsp+B7h] [rbp-49h]
  _WORD v40[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v41[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v19 = 0;
  v18 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v18,
                        *(_DWORD *)(v2 + 2376),
                        (struct _GDIINFO *)(v2 + 2136)) )
  {
LABEL_22:
    v14 = 0;
    goto LABEL_16;
  }
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v24 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v23 = *(_WORD *)(v5 + 2380);
  v38 = *(_BYTE *)(v5 + 2383);
  v39 = 0;
  if ( *(_DWORD *)(v5 + 2372) > 0x12u )
  {
    v6 = 17;
    v24 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2372);
    v24 = v6;
  }
  v29 = (*(_DWORD *)(v5 + 2332) + *(_DWORD *)(v5 + 2328) + *(_DWORD *)(v5 + 2336)) / 3;
  v35 = *(_WORD *)(v5 + 2328);
  v36 = *(_WORD *)(v5 + 2332);
  v37 = *(_WORD *)(v5 + 2336);
  v25 = 0LL;
  v26 = 0LL;
  if ( v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2408) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2412) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2416)
      && *(_QWORD *)(v5 + 2424)
      && *(_QWORD *)(v5 + 2432) )
    {
      LODWORD(v20) = 32;
      WORD2(v20) = *(_WORD *)(v5 + 2408);
      WORD3(v20) = *(_WORD *)(v5 + 2412);
      *((_QWORD *)&v20 + 1) = *(_QWORD *)(v5 + 2416);
      v21 = *(_OWORD *)(v5 + 2424);
      *(_QWORD *)&v26 = &v20;
    }
    else
    {
      v24 = 17;
    }
  }
  v41[0] = *(_WORD *)(v5 + 2244);
  v41[1] = *(_WORD *)(v5 + 2248);
  v41[2] = *(_WORD *)(v5 + 2252);
  v41[3] = *(_WORD *)(v5 + 2256);
  v41[4] = *(_WORD *)(v5 + 2260);
  v41[5] = *(_WORD *)(v5 + 2264);
  v41[6] = *(_WORD *)(v5 + 2268);
  v41[7] = *(_WORD *)(v5 + 2272);
  v41[8] = *(_WORD *)(v5 + 2276);
  v41[9] = *(_WORD *)(v5 + 2280);
  v41[10] = *(_WORD *)(v5 + 2284);
  v41[11] = *(_WORD *)(v5 + 2288);
  v41[12] = *(_WORD *)(v5 + 2292);
  v41[13] = *(_WORD *)(v5 + 2296);
  v41[14] = *(_WORD *)(v5 + 2300);
  v41[15] = *(_WORD *)(v5 + 2304);
  v41[16] = *(_WORD *)(v5 + 2308);
  v41[17] = *(_WORD *)(v5 + 2312);
  v41[18] = *(_WORD *)(v5 + 2316);
  v41[19] = *(_WORD *)(v5 + 2320);
  v41[20] = *(_WORD *)(v5 + 2324);
  v27 = v41;
  v40[0] = *(_WORD *)(v5 + 2340);
  v40[1] = *(_WORD *)(v5 + 2344);
  v40[2] = *(_WORD *)(v5 + 2348);
  v40[3] = *(_WORD *)(v5 + 2352);
  v40[4] = *(_WORD *)(v5 + 2356);
  v40[5] = *(_WORD *)(v5 + 2360);
  v28 = v40;
  v30 = *(_WORD *)(v5 + 2176);
  v31 = *(_WORD *)(v5 + 2180);
  v32 = *(_WORD *)(v5 + 2364);
  if ( a2 )
  {
    v7 = *(_OWORD *)&a2->caSize;
    v8 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v7 = DefaultCA;
    v8 = 0LL;
  }
  v34 = v8;
  v33 = v7;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v17 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v17 + 104) || *(_DWORD *)(v17 + 108)) )
      *(_QWORD *)(v17 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
    goto LABEL_22;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
  }
  v11 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v12 = *(_DWORD *)(v11 + 40);
  while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 40), v12 & 0xFFFFFDFF, v12) );
  v13 = *(_QWORD *)this;
  v14 = 1;
  if ( (*(_DWORD *)(v13 + 40) & 1) == 0 && (unsigned int)XEPALOBJ::bEqualEntries(&v18, *(_QWORD *)(v13 + 1808)) )
  {
    _m_prefetchw((const void *)(v13 + 40));
    do
      v16 = *(_DWORD *)(v13 + 40);
    while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 40), v16 | 0x200, v16) );
  }
  LOBYTE(v10) = 8;
  MEMORY[0] = *v18;
  HmgSetOwner(*v18, 0LL, v10);
  v19 = 1;
LABEL_16:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v18);
  return v14;
}
