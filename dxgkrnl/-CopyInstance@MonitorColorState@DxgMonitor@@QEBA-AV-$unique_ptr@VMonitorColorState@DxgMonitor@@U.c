DxgMonitor::MonitorColorState **__fastcall DxgMonitor::MonitorColorState::CopyInstance(
        __int64 a1,
        DxgMonitor::MonitorColorState **a2,
        struct DxgMonitor::IMonitorComponentParent *a3,
        struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorColorState *v8; // rax
  DxgMonitor::MonitorColorState *v9; // rax
  DxgMonitor::MonitorColorState *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int128 v28; // xmm1
  int v29; // eax
  __int64 v30; // xmm0_8

  v8 = (DxgMonitor::MonitorColorState *)operator new[](0x1B0uLL, 0x4D677844u, 256LL);
  if ( v8 && (v9 = DxgMonitor::MonitorColorState::MonitorColorState(v8, a3, a4), (v10 = v9) != 0LL) )
  {
    v11 = *(_OWORD *)(a1 + 32);
    v12 = *(_OWORD *)(a1 + 48);
    v13 = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v9 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v9 + 2) = v11;
    *((_OWORD *)v9 + 3) = v12;
    *((_OWORD *)v9 + 4) = v13;
    v14 = *(_OWORD *)(a1 + 96);
    v15 = *(_OWORD *)(a1 + 112);
    v16 = *(_OWORD *)(a1 + 128);
    *((_OWORD *)v9 + 5) = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v9 + 6) = v14;
    *((_OWORD *)v9 + 7) = v15;
    *((_OWORD *)v9 + 8) = v16;
    v17 = *(_OWORD *)(a1 + 160);
    v18 = *(_OWORD *)(a1 + 176);
    v19 = *(_OWORD *)(a1 + 192);
    *((_OWORD *)v9 + 9) = *(_OWORD *)(a1 + 144);
    *((_OWORD *)v9 + 10) = v17;
    *((_OWORD *)v9 + 11) = v18;
    *((_OWORD *)v9 + 12) = v19;
    v20 = *(_OWORD *)(a1 + 224);
    v21 = *(_OWORD *)(a1 + 240);
    v22 = *(_OWORD *)(a1 + 256);
    *((_OWORD *)v9 + 13) = *(_OWORD *)(a1 + 208);
    *((_OWORD *)v9 + 14) = v20;
    *((_OWORD *)v9 + 15) = v21;
    *((_OWORD *)v9 + 16) = v22;
    *((_DWORD *)v9 + 68) = *(_DWORD *)(a1 + 272);
    v23 = *(_DWORD *)(a1 + 284);
    *(_QWORD *)((char *)v10 + 276) = *(_QWORD *)(a1 + 276);
    *((_DWORD *)v10 + 71) = v23;
    v24 = *(_DWORD *)(a1 + 296);
    *((_QWORD *)v10 + 36) = *(_QWORD *)(a1 + 288);
    *((_DWORD *)v10 + 74) = v24;
    v25 = *(_DWORD *)(a1 + 308);
    *(_QWORD *)((char *)v10 + 300) = *(_QWORD *)(a1 + 300);
    *((_DWORD *)v10 + 77) = v25;
    v26 = *(_DWORD *)(a1 + 320);
    *((_QWORD *)v10 + 39) = *(_QWORD *)(a1 + 312);
    *((_DWORD *)v10 + 80) = v26;
    v27 = *(_DWORD *)(a1 + 332);
    *(_QWORD *)((char *)v10 + 324) = *(_QWORD *)(a1 + 324);
    *((_DWORD *)v10 + 83) = v27;
    *((_DWORD *)v10 + 84) = *(_DWORD *)(a1 + 336);
    *((_BYTE *)v10 + 340) = *(_BYTE *)(a1 + 340);
    *((_BYTE *)v10 + 341) = *(_BYTE *)(a1 + 341);
    v28 = *(_OWORD *)(a1 + 360);
    *(_OWORD *)((char *)v10 + 344) = *(_OWORD *)(a1 + 344);
    *(_OWORD *)((char *)v10 + 360) = v28;
    *((_DWORD *)v10 + 94) = *(_DWORD *)(a1 + 376);
    *((_DWORD *)v10 + 95) = *(_DWORD *)(a1 + 380);
    *((_BYTE *)v10 + 384) = *(_BYTE *)(a1 + 384);
    *((_BYTE *)v10 + 385) = *(_BYTE *)(a1 + 385);
    *((_DWORD *)v10 + 97) = *(_DWORD *)(a1 + 388);
    *((_DWORD *)v10 + 98) = *(_DWORD *)(a1 + 392);
    *((_DWORD *)v10 + 99) = *(_DWORD *)(a1 + 396);
    v29 = *(_DWORD *)(a1 + 424);
    v30 = *(_QWORD *)(a1 + 416);
    *((_OWORD *)v10 + 25) = *(_OWORD *)(a1 + 400);
    *((_QWORD *)v10 + 52) = v30;
    *((_DWORD *)v10 + 106) = v29;
    *((_BYTE *)v10 + 428) = *(_BYTE *)(a1 + 428);
    *a2 = v10;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
