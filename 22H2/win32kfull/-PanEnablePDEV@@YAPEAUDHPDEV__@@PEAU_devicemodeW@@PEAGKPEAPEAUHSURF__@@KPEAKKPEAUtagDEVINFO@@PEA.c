/*
 * XREFs of ?PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0294B40
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?bCreateSemaphores@@YAHPEAU_PANDEV@@@Z @ 0x1C0296160 (-bCreateSemaphores@@YAHPEAU_PANDEV@@@Z.c)
 *     ?vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z @ 0x1C0296578 (-vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z.c)
 */

struct DHPDEV__ *__fastcall PanEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  char *v14; // rax
  DWORD *v15; // rbx
  __int64 (__fastcall **v16)(_OWORD *, unsigned __int16 *, _QWORD, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *); // r15
  __int64 v17; // rdx
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  DWORD dmPanningWidth; // eax
  DWORD dmPanningHeight; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  WCHAR *v30; // rsi
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  _OWORD v43[14]; // [rsp+80h] [rbp-138h] BYREF

  memset(v43, 0, 0xDCuLL);
  v14 = (char *)PALLOCMEM2(0x668uLL, 1851879495LL, 1);
  v15 = (DWORD *)v14;
  if ( !v14 )
    return 0LL;
  v16 = (__int64 (__fastcall **)(_OWORD *, unsigned __int16 *, _QWORD, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *))(v14 + 792);
  v17 = 6LL;
  v18 = v14 + 792;
  v19 = (_OWORD *)(*((_QWORD *)a9 + 224) + 64LL);
  do
  {
    *v18 = *v19;
    v18[1] = v19[1];
    v18[2] = v19[2];
    v18[3] = v19[3];
    v18[4] = v19[4];
    v18[5] = v19[5];
    v18[6] = v19[6];
    v18 += 8;
    v20 = v19[7];
    v19 += 8;
    *(v18 - 1) = v20;
    --v17;
  }
  while ( v17 );
  *v18 = *v19;
  v18[1] = v19[1];
  v18[2] = v19[2];
  v18[3] = v19[3];
  v15[2] = a1->dmPelsWidth;
  v15[3] = a1->dmPelsHeight;
  if ( !(unsigned int)bCreateSemaphores((struct _PANDEV *)v15) )
  {
LABEL_15:
    Win32FreePool(v15);
    return 0LL;
  }
  dmPanningWidth = a1->dmPanningWidth;
  if ( dmPanningWidth )
  {
    *v15 = dmPanningWidth;
    dmPanningHeight = a1->dmPanningHeight;
  }
  else
  {
    *v15 = a1->dmPelsWidth;
    dmPanningHeight = a1->dmPelsHeight;
  }
  v15[1] = dmPanningHeight;
  v23 = *(_OWORD *)&a1->dmDeviceName[8];
  v43[0] = *(_OWORD *)a1->dmDeviceName;
  v24 = *(_OWORD *)&a1->dmDeviceName[16];
  v43[1] = v23;
  v25 = *(_OWORD *)&a1->dmDeviceName[24];
  v43[2] = v24;
  v26 = *(_OWORD *)&a1->dmSpecVersion;
  v43[3] = v25;
  v27 = *(__int128 *)((char *)&a1->76 + 4);
  v43[4] = v26;
  v28 = *(_OWORD *)&a1->dmYResolution;
  v43[5] = v27;
  v29 = *(_OWORD *)&a1->dmFormName[5];
  v30 = &a1->dmFormName[13];
  v43[6] = v28;
  v31 = *((_QWORD *)v30 + 10);
  v32 = *(_OWORD *)v30;
  v43[7] = v29;
  v33 = *((_OWORD *)v30 + 1);
  v43[8] = v32;
  v34 = *((_OWORD *)v30 + 2);
  v43[9] = v33;
  v35 = *((_OWORD *)v30 + 3);
  v43[10] = v34;
  v36 = *((_OWORD *)v30 + 4);
  v43[11] = v35;
  v43[12] = v36;
  *(_QWORD *)&v43[13] = v31;
  DWORD2(v43[13]) = *((_DWORD *)v30 + 22);
  HIDWORD(v43[10]) = *v15;
  LODWORD(v43[11]) = v15[1];
  v37 = (*v16)(v43, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( !v37 )
  {
    vDeleteSemaphores((struct _PANDEV *)v15);
    goto LABEL_15;
  }
  v15[10] = *((_DWORD *)a8 + 71);
  *((_QWORD *)v15 + 4) = v37;
  *((_QWORD *)v15 + 6) = a9;
  v15[11] = *(_DWORD *)a8;
  v38 = *((_QWORD *)a9 + 332);
  if ( v38 )
  {
    *((_QWORD *)v15 + 203) = v38;
    *((_QWORD *)a9 + 332) = PanCloseProcess;
  }
  v39 = *((_QWORD *)a9 + 331);
  if ( v39 )
  {
    *((_QWORD *)v15 + 204) = v39;
    *((_QWORD *)a9 + 331) = PanAddD3DDirtyRgn;
  }
  a6[4] = v15[2];
  a6[5] = v15[3];
  v40 = *(_DWORD *)a8 & 0x80420;
  *((_DWORD *)a8 + 76) = 192;
  *(_DWORD *)a8 = v40 | 0x10003;
  return (struct DHPDEV__ *)v15;
}
