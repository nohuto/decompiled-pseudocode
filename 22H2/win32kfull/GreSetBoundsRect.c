/*
 * XREFs of GreSetBoundsRect @ 0x1C00094E4
 * Callers:
 *     NtGdiSetBoundsRect @ 0x1C0009480 (NtGdiSetBoundsRect.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00DC274 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v5; // ebx
  int v6; // r12d
  struct tagRECT *v7; // rsi
  int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // ebx
  __int128 v14; // xmm0
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // edx
  LONG v18; // r8d
  LONG v19; // eax
  LONG v20; // r9d
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // edx
  LONG v27; // r8d
  LONG v28; // ecx
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // r9d
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  _QWORD v38[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v39[2]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v40[32]; // [rsp+40h] [rbp-19h] BYREF
  struct _POINTL v41[2]; // [rsp+60h] [rbp+7h] BYREF
  LONG x; // [rsp+70h] [rbp+17h]
  LONG y; // [rsp+74h] [rbp+1Bh]
  LONG v44; // [rsp+78h] [rbp+1Fh]
  LONG v45; // [rsp+7Ch] [rbp+23h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  if ( !v39[0] )
    goto LABEL_92;
  v6 = 0;
  if ( a3 < 0 )
  {
    v7 = (struct tagRECT *)(v39[0] + 1064LL);
    v8 = 32;
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    v7 = (struct tagRECT *)(v39[0] + 1080LL);
    v8 = 64;
  }
  else
  {
    v7 = (struct tagRECT *)(v39[0] + 1096LL);
    v8 = 128;
  }
  v9 = IsRectEmptyInl(v7);
  if ( v12 )
    v13 = v9 != 0 ? 5 : 7;
  else
    v13 = v9 != 0 ? 9 : 11;
  v5 = v11 | v13;
  if ( (a3 & 1) != 0 )
  {
    v7->top = 0x7FFFFFFF;
    v7->left = 0x7FFFFFFF;
    v7->bottom = 0x80000000;
    v7->right = 0x80000000;
    v10 = v39[0];
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_86;
  if ( v11 )
    goto LABEL_84;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v39, 0x204u);
  if ( (*(_DWORD *)(v38[0] + 32LL) & 1) != 0 )
  {
    if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, a2, 2uLL) )
      goto LABEL_84;
    goto LABEL_18;
  }
  v14 = *(_OWORD *)&a2->x;
  x = a2->x;
  y = a2[1].y;
  v44 = a2[1].x;
  v45 = a2->y;
  *(_OWORD *)&v41[0].x = v14;
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, v41, 4uLL) )
  {
LABEL_18:
    v6 = 1;
    goto LABEL_84;
  }
  v15 = v41[1].x;
  v16 = v41[1].x;
  v17 = v41[0].x;
  v18 = x;
  if ( v41[0].x < v41[1].x )
    v16 = v41[0].x;
  if ( v16 >= x )
  {
    v19 = x;
  }
  else
  {
    v19 = v41[1].x;
    if ( v41[0].x < v41[1].x )
      v19 = v41[0].x;
  }
  v20 = v44;
  if ( v19 >= v44 )
  {
    v22 = v44;
  }
  else
  {
    v21 = v41[1].x;
    if ( v41[0].x < v41[1].x )
      v21 = v41[0].x;
    if ( v21 >= x )
    {
      v22 = x;
    }
    else
    {
      v22 = v41[1].x;
      if ( v41[0].x < v41[1].x )
        v22 = v41[0].x;
    }
  }
  a2->x = v22;
  v23 = v15;
  if ( v17 > v15 )
    v23 = v17;
  if ( v23 <= v18 )
  {
    v24 = v18;
  }
  else
  {
    v24 = v15;
    if ( v17 > v15 )
      v24 = v17;
  }
  if ( v24 <= v20 )
  {
    v15 = v20;
  }
  else
  {
    v25 = v15;
    if ( v17 > v15 )
      v25 = v17;
    if ( v25 <= v18 )
    {
      v15 = v18;
    }
    else if ( v17 > v15 )
    {
      v15 = v17;
    }
  }
  v26 = v41[0].y;
  v27 = y;
  a2[1].x = v15;
  v28 = v41[1].y;
  v29 = v41[1].y;
  if ( v26 < v41[1].y )
    v29 = v26;
  if ( v29 >= v27 )
  {
    v30 = v27;
  }
  else
  {
    v30 = v41[1].y;
    if ( v26 < v41[1].y )
      v30 = v26;
  }
  v31 = v45;
  if ( v30 >= v45 )
  {
    v33 = v45;
  }
  else
  {
    v32 = v41[1].y;
    if ( v26 < v41[1].y )
      v32 = v26;
    if ( v32 >= v27 )
    {
      v33 = v27;
    }
    else
    {
      v33 = v41[1].y;
      if ( v26 < v41[1].y )
        v33 = v26;
    }
  }
  a2->y = v33;
  v34 = v28;
  if ( v26 > v28 )
    v34 = v26;
  if ( v34 <= v27 )
  {
    v35 = v27;
  }
  else
  {
    v35 = v28;
    if ( v26 > v28 )
      v35 = v26;
  }
  if ( v35 <= v31 )
  {
    v28 = v31;
  }
  else
  {
    v36 = v28;
    if ( v26 > v28 )
      v36 = v26;
    if ( v36 <= v27 )
    {
      v28 = v27;
    }
    else if ( v26 > v28 )
    {
      v28 = v26;
    }
  }
  a2[1].y = v28;
LABEL_84:
  ERECTL::operator|=(v7, a2);
  v10 = v39[0];
  if ( !v6 )
  {
LABEL_86:
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)(v10 + 36) |= v8;
      v10 = v39[0];
    }
    if ( (a3 & 8) != 0 )
    {
      *(_DWORD *)(v10 + 36) &= ~v8;
      v10 = v39[0];
    }
    goto LABEL_90;
  }
  v5 = 0;
LABEL_90:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v39);
LABEL_92:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v40);
  return v5;
}
