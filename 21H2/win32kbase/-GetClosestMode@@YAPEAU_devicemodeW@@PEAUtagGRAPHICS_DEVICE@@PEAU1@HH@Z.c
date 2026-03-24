/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C00AFE5C
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00163F8 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  _DWORD *v5; // r11
  _DWORD *v6; // r13
  int v7; // esi
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  int v13; // ecx
  unsigned int v14; // ebp
  DWORD dmFields; // eax
  int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  bool v20; // cf
  unsigned int v22; // edx
  __int64 v23; // r9
  __int64 v24; // r8
  unsigned int v25; // eax
  DWORD dmPelsWidth; // esi
  DWORD dmPelsHeight; // edi
  unsigned int v28; // eax
  unsigned int v29; // eax
  DWORD v30; // ebx
  unsigned int v31; // eax
  DWORD v32; // r14d
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned int v36; // ecx
  unsigned int v37; // edx
  DWORD dmBitsPerPel; // edx
  unsigned int v39; // ecx
  unsigned int v40; // r9d
  _DWORD *v41; // rcx
  unsigned int v42; // edx
  _DWORD *v43; // r9
  DWORD dmDisplayFrequency; // edx
  unsigned int v45; // ecx
  unsigned int v46; // ebp
  bool v47; // cc
  unsigned int v48; // [rsp+0h] [rbp-68h]
  int v49; // [rsp+4h] [rbp-64h]
  unsigned int v50; // [rsp+8h] [rbp-60h]
  int v51; // [rsp+Ch] [rbp-5Ch]
  int v52; // [rsp+10h] [rbp-58h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  unsigned int v55; // [rsp+78h] [rbp+10h]

  v4 = -1;
  v5 = 0LL;
  v55 = -1;
  v6 = 0LL;
  v51 = -1;
  v7 = a3;
  v8 = a1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v16 = dmFields & 0x80;
  v49 = v16;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  v17 = 0;
  v50 = 0;
  do
  {
    if ( !v6 || v13 )
      goto LABEL_18;
    v18 = v6[43];
    v19 = v6[44];
    if ( v18 < v19 )
    {
      if ( v18 >= 0x1E0 )
      {
        v20 = v19 < 0x280;
        goto LABEL_15;
      }
    }
    else if ( v18 >= 0x280 )
    {
      v20 = v19 < 0x1E0;
LABEL_15:
      if ( !v20 && v6[46] >= 0x3Cu )
        return (struct _devicemodeW *)v6;
    }
    v13 = v55;
    v17 = v50;
LABEL_18:
    v52 = 0;
    v48 = *((_DWORD *)v8 + 47);
    if ( !v48 )
      goto LABEL_51;
    v22 = *((_DWORD *)v8 + 47);
    v23 = 0LL;
    v53 = 0LL;
    while ( 1 )
    {
      if ( v7 && *(_DWORD *)(v23 + *((_QWORD *)v8 + 24)) )
        goto LABEL_103;
      v24 = *(_QWORD *)(v23 + *((_QWORD *)v8 + 24) + 8);
      if ( a4 && ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v24 + 180)) & 2) != 0 )
      {
        v13 = v55;
        goto LABEL_102;
      }
      if ( !v16 )
        break;
      v13 = v55;
      v25 = dwOrientationDiffTable[4 * *(unsigned int *)(v24 + 84) + a2->dmDisplayOrientation];
      if ( v55 >= v25 )
      {
        if ( v55 > v25 )
          v5 = (_DWORD *)v24;
        break;
      }
LABEL_101:
      v22 = v48;
LABEL_102:
      v8 = a1;
LABEL_103:
      v23 += 16LL;
      v53 = v23;
      if ( ++v52 >= v22 )
        goto LABEL_50;
    }
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v5 != (_DWORD *)v24 )
    {
      v34 = *(_DWORD *)(v24 + 172);
      v35 = dmPelsWidth - v34;
      if ( dmPelsWidth < v34 )
        v35 = *(_DWORD *)(v24 + 172) - dmPelsWidth;
      if ( v10 < v35 )
      {
        v13 = v55;
        goto LABEL_100;
      }
      if ( v10 > v35 )
        v5 = (_DWORD *)v24;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v5 == (_DWORD *)v24 )
        goto LABEL_31;
      v36 = *(_DWORD *)(v24 + 176);
      v37 = dmPelsHeight - v36;
      if ( dmPelsHeight < v36 )
        v37 = *(_DWORD *)(v24 + 176) - dmPelsHeight;
      if ( v11 < v37 )
        goto LABEL_98;
      if ( v11 > v37 )
        v5 = (_DWORD *)v24;
    }
    if ( v5 == (_DWORD *)v24 )
      goto LABEL_31;
    dmBitsPerPel = a2->dmBitsPerPel;
    v39 = *(_DWORD *)(v24 + 168);
    v40 = dmBitsPerPel - v39;
    if ( dmBitsPerPel < v39 )
      v40 = *(_DWORD *)(v24 + 168) - dmBitsPerPel;
    if ( v4 < v40 )
    {
LABEL_97:
      v23 = v53;
LABEL_98:
      v13 = v55;
LABEL_54:
      v16 = v49;
LABEL_100:
      v7 = a3;
      goto LABEL_101;
    }
    v41 = (_DWORD *)v24;
    if ( v4 <= v40 )
      v41 = v5;
    v5 = v41;
    if ( v41 == (_DWORD *)v24 )
      goto LABEL_89;
    v42 = a2->dmDisplayFixedOutput != *(_DWORD *)(v24 + 88);
    if ( v14 < v42 )
      goto LABEL_97;
    v43 = (_DWORD *)v24;
    if ( v14 <= v42 )
      v43 = v41;
    v5 = v43;
    if ( v43 == (_DWORD *)v24 )
    {
LABEL_89:
      v23 = v53;
    }
    else
    {
      dmDisplayFrequency = a2->dmDisplayFrequency;
      v45 = *(_DWORD *)(v24 + 184);
      v46 = dmDisplayFrequency - v45;
      if ( dmDisplayFrequency < v45 )
        v46 = *(_DWORD *)(v24 + 184) - dmDisplayFrequency;
      v20 = v12 < v46;
      v47 = v12 <= v46;
      v14 = v51;
      if ( v20 )
        goto LABEL_97;
      v5 = (_DWORD *)v24;
      if ( v47 )
        v5 = v43;
      v23 = v53;
      if ( v5 != (_DWORD *)v24 )
        goto LABEL_98;
    }
LABEL_31:
    if ( !v5
      || !v50
      && (v5[43] > dmPelsWidth && dmPelsWidth || v5[44] > dmPelsHeight && dmPelsHeight
                                              || v5[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_98;
    }
    v6 = v5;
    v13 = dwOrientationDiffTable[4 * *(unsigned int *)(v24 + 84) + a2->dmDisplayOrientation];
    v28 = *(_DWORD *)(v24 + 172);
    v55 = v13;
    if ( dmPelsWidth < v28 )
      v10 = v28 - dmPelsWidth;
    else
      v10 = dmPelsWidth - v28;
    v29 = *(_DWORD *)(v24 + 176);
    if ( dmPelsHeight < v29 )
      v11 = v29 - dmPelsHeight;
    else
      v11 = dmPelsHeight - v29;
    v30 = a2->dmBitsPerPel;
    v31 = *(_DWORD *)(v24 + 168);
    if ( v30 < v31 )
      v4 = v31 - v30;
    else
      v4 = v30 - v31;
    v32 = a2->dmDisplayFrequency;
    v33 = *(_DWORD *)(v24 + 184);
    v14 = a2->dmDisplayFixedOutput != *(_DWORD *)(v24 + 88);
    v51 = v14;
    if ( v32 < v33 )
      v12 = v33 - v32;
    else
      v12 = v32 - v33;
    if ( v13 || v4 || v10 || v11 || a2->dmDisplayFixedOutput != *(_DWORD *)(v24 + 88) || v12 )
      goto LABEL_54;
LABEL_50:
    v17 = v50;
    v16 = v49;
    v8 = a1;
    v7 = a3;
LABEL_51:
    v50 = ++v17;
  }
  while ( v17 < 2 );
  return (struct _devicemodeW *)v6;
}
