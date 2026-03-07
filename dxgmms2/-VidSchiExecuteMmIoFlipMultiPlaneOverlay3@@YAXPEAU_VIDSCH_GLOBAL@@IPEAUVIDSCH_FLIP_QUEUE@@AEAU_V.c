// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        LARGE_INTEGER *a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        unsigned int a6)
{
  enum _VIDSCH_FLIP_STATUS *v7; // r13
  __int64 v9; // r15
  LARGE_INTEGER *v10; // rbx
  LARGE_INTEGER *v11; // rdi
  LARGE_INTEGER v12; // rax
  char v13; // r14
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // r8d
  DWORD v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // r11d
  bool v22; // zf
  int v23; // ecx
  int v24; // r12d
  unsigned int v25; // r14d
  unsigned int v26; // r13d
  __int64 v27; // r14
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  int v33; // ecx
  DWORD LowPart; // eax
  __int64 v35; // rdi
  int v36; // edx
  __int64 HighPart; // rcx
  __int64 v38; // rdx
  int v39; // eax
  char v40; // dl
  int v41; // ecx
  int v42; // eax
  LARGE_INTEGER *v43; // r10
  char v44[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+44h] [rbp-BCh]
  unsigned int v46; // [rsp+48h] [rbp-B8h]
  struct _VIDSCH_GLOBAL *v47; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-A8h]
  unsigned int v49; // [rsp+5Ch] [rbp-A4h]
  struct VIDSCH_FLIP_QUEUE *v50; // [rsp+60h] [rbp-A0h]
  char v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+69h] [rbp-97h]
  __int16 v53; // [rsp+6Dh] [rbp-93h]
  char v54; // [rsp+6Fh] [rbp-91h]
  struct _VIDSCH_CALL_EXECUTE_FLIP *v55; // [rsp+70h] [rbp-90h]
  enum _VIDSCH_FLIP_STATUS *v56; // [rsp+78h] [rbp-88h]
  __int64 v57[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v58[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+B0h] [rbp-50h]
  __int64 v61[10]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = a5;
  v9 = a2;
  v55 = a4;
  v10 = &a3[173 * a6];
  v45 = a2;
  v11 = (LARGE_INTEGER *)a4;
  v56 = a5;
  v46 = a6;
  memset(v61, 0, sizeof(v61));
  v60 = 0LL;
  v12 = v10[148];
  *(_OWORD *)v57 = 0LL;
  *(_OWORD *)v58 = 0LL;
  v59 = 0LL;
  if ( v12.QuadPart && v12.QuadPart < (unsigned __int64)a3[12].QuadPart )
  {
    HighPart = a3[10].HighPart;
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 36864LL, v9, HighPart, a6);
    __debugbreak();
    goto LABEL_45;
  }
  a3[12] = v12;
  v13 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(a1, v13, (__int64)v61, (__int64)v57, (__int64)v58);
  if ( !v11[2].HighPart )
  {
LABEL_45:
    v9 = 0LL;
    v11[265].LowPart = 0;
    v27 = v45;
    WdLogSingleEntry2(4LL, v45, (*(_DWORD *)v10[162].QuadPart >> 10) & 0x3FF);
    goto LABEL_24;
  }
  if ( (v10[157].LowPart & 0x1000) != 0 )
  {
    v9 = 0LL;
    v11[265].LowPart = 0;
    WdLogSingleEntry0(4LL);
    v27 = v45;
    goto LABEL_24;
  }
  v14 = *((unsigned int *)a1 + 8);
  v15 = *((_QWORD *)a1 + 3);
  v44[0] = 0;
  v16 = DpSynchronizeExecution(v15, VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, v11, v14, v44);
  if ( v16 < 0 )
  {
    v38 = *((_QWORD *)a1 + 2);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, v16, v11, v38);
    __debugbreak();
LABEL_48:
    v39 = v9;
    LOBYTE(v39) = *((_BYTE *)a1 + 59) != (unsigned __int8)v9;
    v11[2].LowPart = v39 + 1;
LABEL_38:
    LowPart = v11[2].LowPart;
    if ( (LowPart & 2) == 0 )
    {
      if ( (LowPart & 1) != 0 )
      {
        v35 = v45;
        v49 = v45;
        v52 = v9;
        v53 = v9;
        v54 = v9;
        v47 = a1;
        v50 = (struct VIDSCH_FLIP_QUEUE *)a3;
        v48 = v46;
        v51 = v13;
        VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v47);
        if ( (v10[157].LowPart & 0x10) != 0 )
          v36 = ((unsigned __int16)*(_DWORD *)v10[162].QuadPart | (unsigned __int16)(*(_DWORD *)v10[162].QuadPart >> 10)) & 0x3FF;
        else
          v36 = (1 << *((_DWORD *)a1 + 38)) - 1;
        *(_DWORD *)(*((_QWORD *)a1 + v35 + 400) + 3092LL) |= v36;
        return;
      }
      goto LABEL_8;
    }
LABEL_65:
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqqtq_EtwWriteTransfer(
        v19,
        v17,
        v18,
        *((_QWORD *)a1 + 2),
        v45,
        v10[146].LowPart,
        (v11[2].LowPart & 2) != 0,
        v19);
    return;
  }
  v19 = v11[265].LowPart;
  v9 = 0LL;
  if ( v19 == -1073741267 )
  {
    if ( v11[2].LowPart )
      goto LABEL_38;
    goto LABEL_48;
  }
  if ( v19 == -2147483631 )
    goto LABEL_65;
LABEL_8:
  if ( (v10[157].LowPart & 0x1000) == 0 )
  {
    v20 = *(_DWORD *)v10[162].QuadPart & 0x3FF;
    if ( *((_BYTE *)a1 + 156) == (_BYTE)v9 )
      v21 = v9;
    else
      v21 = (*(_DWORD *)v10[162].QuadPart >> 10) & 0x3FF;
    v22 = !_BitScanForward((unsigned int *)&v23, v20);
    v24 = v9;
    if ( v22 )
      LOBYTE(v23) = -1;
    v25 = (char)v23;
    v22 = !_BitScanForward((unsigned int *)&v23, v21);
    if ( v22 )
      LOBYTE(v23) = -1;
    v26 = (char)v23;
    while ( v20 || v21 )
    {
      if ( v25 >= v26 )
        v32 = v26;
      else
        v32 = v25;
      *(_QWORD *)(*((_QWORD *)a1 + v45 + 400) + 288LL * v32 + 392) = *(_QWORD *)(v24
                                                                               * ((8
                                                                                 * *(_DWORD *)(v10[162].QuadPart + 8)
                                                                                 + 231) & 0xFFFFFFF8)
                                                                               + v10[162].QuadPart
                                                                               + 24);
      if ( v25 >= v26 )
      {
        v21 &= ~(1 << v26);
        v40 = -1;
        v22 = !_BitScanForward((unsigned int *)&v41, v21);
        if ( !v22 )
          v40 = v41;
        v26 = v40;
      }
      else
      {
        v20 &= ~(1 << v25);
        v22 = !_BitScanForward((unsigned int *)&v33, v20);
        if ( v22 )
          LOBYTE(v33) = -1;
        v25 = (char)v33;
      }
      ++v24;
    }
    v11 = (LARGE_INTEGER *)v55;
    v7 = v56;
  }
  if ( *((_BYTE *)a1 + 59) != (_BYTE)v9 )
    v10[179] = KeQueryPerformanceCounter(0LL);
  v27 = v45;
  v28 = *(_QWORD **)(v10[145].QuadPart + 40);
  v29 = v11[5].LowPart;
  v30 = *((_QWORD *)a1 + v45 + 400);
  if ( (_DWORD)v29 == -1 )
  {
    ++v28[346];
    ++*(_QWORD *)(v30 + 78736);
  }
  else if ( !(_DWORD)v29 || (_DWORD)v29 == *(_DWORD *)(v30 + 82936) )
  {
    ++v28[344];
    v28[348] += v29;
    ++*(_QWORD *)(v30 + 78720);
    *(_QWORD *)(v30 + 78752) += v29;
  }
  else if ( *(_DWORD *)(v30 + 82932) <= 1u )
  {
    ++v28[345];
    v28[349] += v29;
    ++*(_QWORD *)(v30 + 78728);
    *(_QWORD *)(v30 + 78760) += v29;
  }
  else
  {
    ++v28[347];
    v28[351] += v29;
    ++*(_QWORD *)(v30 + 78744);
    *(_QWORD *)(v30 + 78776) += v29;
  }
LABEL_24:
  *(_DWORD *)v7 = 11;
  if ( !v11[2].HighPart )
    goto LABEL_64;
  do
  {
    v31 = *(_QWORD *)(v11[3].QuadPart + 8 * v9);
    if ( (*(_DWORD *)(v31 + 16) & 4) != 0 && (*(_DWORD *)(v31 + 20) & 1) == 0 )
    {
      *(_DWORD *)v7 = 5;
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(v31 + 20) & 4) != 0 )
    {
      *(_DWORD *)v7 = 15;
      v42 = 15;
    }
    else
    {
      v42 = *(_DWORD *)v7;
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < v11[2].HighPart );
  if ( v42 == 11 )
  {
LABEL_64:
    v43 = (LARGE_INTEGER *)*((_QWORD *)a1 + v27 + 400);
    v11[266] = v43[5526];
    v11[265].HighPart = v43[5524].LowPart;
  }
LABEL_28:
  VidSchiLogMmIoFlipMultiPlaneOverlay3((__int64)a1, &v10[15], v11, *(_DWORD *)v7, v10[149].LowPart, v10[177].QuadPart);
}
