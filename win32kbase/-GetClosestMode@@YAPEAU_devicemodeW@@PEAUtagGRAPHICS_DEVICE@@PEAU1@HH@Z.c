/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00CBCDC
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C002B828 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // edi
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  unsigned int v12; // r9d
  unsigned int v13; // r12d
  DWORD dmFields; // eax
  int v15; // ebx
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // rdx
  DWORD dmPelsWidth; // ebx
  DWORD dmPelsHeight; // r9d
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  DWORD v30; // edx
  unsigned int v31; // eax
  int v32; // ebp
  DWORD dmDisplayFixedOutput; // esi
  unsigned int v34; // r9d
  bool v35; // cf
  unsigned int v36; // ecx
  DWORD v37; // edx
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // edx
  DWORD dmBitsPerPel; // edx
  unsigned int v44; // ecx
  unsigned int v45; // esi
  unsigned int v46; // ecx
  DWORD dmDisplayFrequency; // edx
  unsigned int v48; // ecx
  unsigned int v49; // esi
  bool v50; // cc
  int v51; // [rsp+0h] [rbp-158h]
  int v52; // [rsp+4h] [rbp-154h]
  unsigned int v53; // [rsp+8h] [rbp-150h]
  __int64 v54; // [rsp+10h] [rbp-148h]
  unsigned int v55; // [rsp+18h] [rbp-140h]
  _DWORD *v56; // [rsp+20h] [rbp-138h]
  unsigned int v58; // [rsp+168h] [rbp+10h]

  v4 = -1;
  v6 = 0LL;
  v51 = -1;
  v7 = 0LL;
  v56 = 0LL;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v15 = dmFields & 0x80;
  v52 = v15;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  v16 = 0;
  v53 = 0;
  do
  {
    if ( v6 && !v12 )
    {
      v17 = v6[43];
      v18 = v6[44];
      if ( v17 < v18 )
      {
        if ( v17 >= 0x1E0 && v18 >= 0x280 )
          goto LABEL_17;
      }
      else if ( v17 >= 0x280 && v18 >= 0x1E0 )
      {
LABEL_17:
        if ( v6[46] >= 0x3Cu )
          return (struct _devicemodeW *)v6;
      }
    }
    v55 = 0;
    v58 = *((_DWORD *)v8 + 47);
    if ( !v58 )
      goto LABEL_52;
    v21 = 0LL;
    v22 = *((_DWORD *)v8 + 47);
    v54 = 0LL;
    while ( 1 )
    {
      if ( a3 && *(_DWORD *)(v21 + *((_QWORD *)v8 + 24)) )
        goto LABEL_86;
      v23 = *(_QWORD *)(v21 + *((_QWORD *)v8 + 24) + 8);
      if ( !a4 || ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v23 + 180)) & 2) == 0 )
      {
        if ( !v15 )
          goto LABEL_28;
        v24 = a2->dmDisplayOrientation + 4LL * *(unsigned int *)(v23 + 84);
        if ( v12 >= dword_1C028BA50[v24] )
          break;
      }
LABEL_85:
      v8 = a1;
      v22 = v58;
LABEL_86:
      v21 += 16LL;
      v16 = v53;
      ++v55;
      v54 = v21;
      if ( v55 >= v22 )
        goto LABEL_51;
    }
    if ( v12 > dword_1C028BA50[v24] )
      v7 = (_DWORD *)v23;
LABEL_28:
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v7 != (_DWORD *)v23 )
    {
      v39 = *(_DWORD *)(v23 + 172);
      v40 = dmPelsWidth - v39;
      if ( dmPelsWidth < v39 )
        v40 = *(_DWORD *)(v23 + 172) - dmPelsWidth;
      if ( v9 < v40 )
        goto LABEL_84;
      if ( v9 > v40 )
        v7 = (_DWORD *)v23;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v7 == (_DWORD *)v23 )
        goto LABEL_32;
      v41 = *(_DWORD *)(v23 + 176);
      v42 = dmPelsHeight - v41;
      if ( dmPelsHeight < v41 )
        v42 = *(_DWORD *)(v23 + 176) - dmPelsHeight;
      if ( v10 < v42 )
        goto LABEL_83;
      if ( v10 > v42 )
      {
        v7 = (_DWORD *)v23;
        goto LABEL_32;
      }
    }
    if ( v7 != (_DWORD *)v23 )
    {
      dmBitsPerPel = a2->dmBitsPerPel;
      v44 = *(_DWORD *)(v23 + 168);
      v45 = dmBitsPerPel - v44;
      if ( dmBitsPerPel < v44 )
        v45 = *(_DWORD *)(v23 + 168) - dmBitsPerPel;
      if ( v4 < v45 )
        goto LABEL_54;
      if ( v4 > v45 )
        goto LABEL_88;
      v46 = a2->dmDisplayFixedOutput != *(_DWORD *)(v23 + 88);
      if ( v13 < v46 )
        goto LABEL_54;
      if ( v13 > v46 )
      {
LABEL_88:
        v21 = v54;
      }
      else
      {
        dmDisplayFrequency = a2->dmDisplayFrequency;
        v48 = *(_DWORD *)(v23 + 184);
        v49 = dmDisplayFrequency - v48;
        if ( dmDisplayFrequency < v48 )
          v49 = *(_DWORD *)(v23 + 184) - dmDisplayFrequency;
        v50 = v11 <= v49;
        if ( v11 < v49 )
          goto LABEL_54;
        v21 = v54;
        if ( v50 )
          goto LABEL_83;
      }
      v7 = (_DWORD *)v23;
    }
    v16 = v53;
LABEL_32:
    if ( !v7
      || !v16
      && (v7[43] > dmPelsWidth && dmPelsWidth || v7[44] > dmPelsHeight && dmPelsHeight
                                              || v7[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_83;
    }
    v56 = v7;
    v51 = dword_1C028BA50[4 * *(unsigned int *)(v23 + 84) + a2->dmDisplayOrientation];
    v27 = *(_DWORD *)(v23 + 172);
    if ( dmPelsWidth < v27 )
      v9 = v27 - dmPelsWidth;
    else
      v9 = dmPelsWidth - v27;
    v28 = *(_DWORD *)(v23 + 176);
    if ( dmPelsHeight < v28 )
      v10 = v28 - dmPelsHeight;
    else
      v10 = dmPelsHeight - v28;
    v29 = *(_DWORD *)(v23 + 168);
    v30 = a2->dmBitsPerPel;
    v31 = v29 - v30;
    v32 = *(_DWORD *)(v23 + 88);
    dmDisplayFixedOutput = a2->dmDisplayFixedOutput;
    v34 = v30 - v29;
    v35 = v30 < v29;
    v36 = *(_DWORD *)(v23 + 184);
    v37 = a2->dmDisplayFrequency;
    if ( v35 )
      v34 = v31;
    v4 = v34;
    v38 = a2->dmDisplayFrequency - v36;
    v13 = dmDisplayFixedOutput != v32;
    if ( v37 < v36 )
      v38 = v36 - v37;
    v11 = v38;
    if ( v51 || v34 || v9 || v10 || dmDisplayFixedOutput != v32 || v38 )
    {
LABEL_54:
      v21 = v54;
LABEL_83:
      v12 = v51;
LABEL_84:
      v15 = v52;
      goto LABEL_85;
    }
LABEL_51:
    v6 = v56;
    v16 = v53;
    v12 = v51;
    v15 = v52;
    v8 = a1;
LABEL_52:
    v53 = ++v16;
  }
  while ( v16 < 2 );
  return (struct _devicemodeW *)v6;
}
