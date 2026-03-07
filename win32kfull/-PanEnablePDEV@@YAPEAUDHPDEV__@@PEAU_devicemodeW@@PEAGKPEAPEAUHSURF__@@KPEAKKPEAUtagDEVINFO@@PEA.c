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
  __int64 v14; // rax
  _DWORD *v15; // rbx
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
  _OWORD v43[10]; // [rsp+80h] [rbp-138h] BYREF
  __int128 v44; // [rsp+120h] [rbp-98h]
  __int128 v45; // [rsp+130h] [rbp-88h]
  __int128 v46; // [rsp+140h] [rbp-78h]
  __int64 v47; // [rsp+150h] [rbp-68h]
  int v48; // [rsp+158h] [rbp-60h]

  memset_0(v43, 0, 0xDCuLL);
  v14 = Win32AllocPoolZInit(1640LL, 1851879495LL);
  v15 = (_DWORD *)v14;
  if ( !v14 )
    return 0LL;
  v16 = (__int64 (__fastcall **)(_OWORD *, unsigned __int16 *, _QWORD, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *))(v14 + 792);
  v17 = 6LL;
  v18 = (_OWORD *)(v14 + 792);
  v19 = (_OWORD *)(*((_QWORD *)a9 + 220) + 64LL);
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
  v44 = v34;
  v36 = *((_OWORD *)v30 + 4);
  v45 = v35;
  v46 = v36;
  v47 = v31;
  v48 = *((_DWORD *)v30 + 22);
  HIDWORD(v44) = *v15;
  LODWORD(v45) = v15[1];
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
  v38 = *((_QWORD *)a9 + 329);
  if ( v38 )
  {
    *((_QWORD *)v15 + 203) = v38;
    *((_QWORD *)a9 + 329) = PanCloseProcess;
  }
  v39 = *((_QWORD *)a9 + 328);
  if ( v39 )
  {
    *((_QWORD *)v15 + 204) = v39;
    *((_QWORD *)a9 + 328) = PanAddD3DDirtyRgn;
  }
  a6[4] = v15[2];
  a6[5] = v15[3];
  v40 = *(_DWORD *)a8 & 0x80420;
  *((_DWORD *)a8 + 76) = 192;
  *(_DWORD *)a8 = v40 | 0x10003;
  return (struct DHPDEV__ *)v15;
}
