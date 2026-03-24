/*
 * XREFs of GreExtCreatePen @ 0x1C00262A0
 * Callers:
 *     GreCreatePen @ 0x1C0026218 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C015B6C0 (NtGdiExtCreatePen.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0026620 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00266AC (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     GreCreateDIBBrush @ 0x1C015D448 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B6F9C (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 */

void *__fastcall GreExtCreatePen(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // rbx
  int v13; // r13d
  int v14; // r14d
  unsigned int v15; // r10d
  int v17; // r12d
  unsigned int v18; // r8d
  void *v19; // rsi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r15d
  __int64 v24; // r9
  __int64 v26; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v28; // r14
  __int64 v29; // rdi
  bool v31; // zf
  int v32; // eax
  ULONG v33; // ecx
  __int64 v34; // rax
  float *v35; // rdx
  unsigned __int64 v36; // r11
  int v37; // r8d
  int v38; // ecx
  int v39; // r8d
  int v40; // ecx
  int v41; // r10d
  int v42; // eax
  char v43; // [rsp+30h] [rbp-50h]
  int v44; // [rsp+34h] [rbp-4Ch]
  int v45; // [rsp+38h] [rbp-48h]
  int v46; // [rsp+3Ch] [rbp-44h]
  int v47; // [rsp+40h] [rbp-40h]
  _QWORD v48[7]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v44 = 0;
  v13 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v47 = a1 & 0xF0000;
  v46 = (unsigned __int8)v14;
  v15 = a4;
  v17 = 0;
  v18 = abs32(a2);
  v19 = 0LL;
  v45 = v18;
  v20 = v18 >> 31;
  if ( (a1 & 0xFFF000F0) != 0 )
    v20 = 1;
  if ( v14 == 5 )
    return gahStockObjects[8];
  if ( v13 )
  {
    if ( v13 != 0x10000 )
LABEL_66:
      v20 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_66;
  }
  if ( v18 != 1 && !v13 && !a10 )
    v20 = 1;
  v21 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v21 == 4096 )
  {
    v43 = 1;
  }
  else
  {
    if ( v21 != 0x2000 )
    {
      v20 = 1;
LABEL_8:
      v43 = 0;
      goto LABEL_9;
    }
    v43 = 2;
  }
LABEL_9:
  v22 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v22 == 512 )
    {
      v44 = 2;
    }
    else if ( v22 == 256 )
    {
      v44 = 1;
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v44 = 0;
  }
  v23 = a7;
  if ( v14 == 7 )
  {
    if ( a7 )
    {
LABEL_13:
      if ( a7 <= 0x10 )
        goto LABEL_14;
    }
  }
  else if ( !a7 )
  {
    goto LABEL_13;
  }
  v20 = 1;
LABEL_14:
  v24 = 6LL;
  if ( v13 == 0x10000 )
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v23 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v23 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v23 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v32 = v14 - 6;
    v31 = v14 == 6;
  }
  else
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v23 = 2;
        v19 = &galeCosmeticDash;
        goto LABEL_54;
      case 2:
        v23 = 8;
        v19 = &galeCosmeticDot;
LABEL_54:
        v17 = 1;
        goto LABEL_16;
      case 3:
        v23 = 4;
        v19 = &galeCosmeticDashDot;
        goto LABEL_54;
      case 4:
        v23 = 6;
        v19 = &galeCosmeticDashDotDot;
        goto LABEL_54;
      case 6:
        if ( !a10 )
          v20 = 1;
        goto LABEL_16;
    }
    v32 = v14 - 7;
    v31 = v14 == 7;
  }
  if ( !v31 && v32 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v20 )
    goto LABEL_93;
  if ( v23 && !v19 )
  {
    v34 = PALLOCMEM2(4 * v23);
    v19 = (void *)v34;
    if ( !v34 )
    {
      v33 = 8;
      goto LABEL_95;
    }
    v35 = (float *)v34;
    v36 = v34 + 4LL * v23;
    if ( !v13 || a10 )
    {
      v39 = 1;
      v24 = 0LL;
      v40 = 1;
      if ( a8 )
      {
        do
        {
          v41 = v40;
          if ( (unsigned __int64)v35 >= v36 )
            break;
          v40 = *a8;
          v24 = (unsigned int)(*a8 + v24);
          *(_DWORD *)v35 = *a8;
          v42 = v40;
          ++v35;
          if ( v39 > v40 )
            v42 = v39;
          v39 = v42;
          if ( v41 < v40 )
            v40 = v41;
          ++a8;
        }
        while ( a8 );
        if ( a8 && v40 > 0 && v39 <= 0x3FFF && (int)v24 <= 0x3FFF )
        {
          v18 = v45;
          goto LABEL_125;
        }
      }
    }
    else
    {
      v24 = 0LL;
      v37 = 0;
      if ( a8 )
      {
        do
        {
          if ( (unsigned __int64)v35 >= v36 )
            break;
          v38 = *a8;
          if ( v14 != 7 )
          {
            if ( v44 != 2 )
              v38 += (((_BYTE)v35 - (_BYTE)v34) & 4) != 0 ? 1 : -1;
            v38 *= v45;
          }
          v24 = (unsigned int)(v38 + v24);
          *v35++ = (float)v38;
          if ( v37 < v38 )
            v38 = v37;
          v37 = v38;
          ++a8;
        }
        while ( a8 );
        v13 = v47;
        if ( a8 )
        {
          if ( v37 >= 0 && (int)v24 > 0 )
          {
            v18 = v45;
LABEL_125:
            v15 = a4;
            goto LABEL_18;
          }
        }
      }
    }
    Win32FreePool(v19);
LABEL_93:
    v33 = 87;
LABEL_95:
    EngSetLastError(v33);
    return 0LL;
  }
LABEL_18:
  switch ( a3 )
  {
    case 0:
      if ( v18 || (v26 = 1LL, v14) )
        v26 = 0LL;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v15, 1LL, a11, v26);
      break;
    case 1:
      if ( v19 && !v17 )
        Win32FreePool(v19);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v15, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v24);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v15, a9, 0LL, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_132;
  }
  v28 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_132:
    if ( v19 && !v17 )
      Win32FreePool(v19);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v48, SolidBrushInternal);
  if ( v48[0] )
  {
    *(_DWORD *)(v48[0] + 40LL) |= 0x400u;
    *(_DWORD *)(v48[0] + 176LL) = a1;
    *(_BYTE *)(v48[0] + 185LL) = v44;
    *(_BYTE *)(v48[0] + 184LL) = v43;
    *(_QWORD *)(v48[0] + 152LL) = v19;
    *(_DWORD *)(v48[0] + 180LL) = v23;
    *(_DWORD *)(v48[0] + 168LL) = v45;
    if ( v17 )
      *(_DWORD *)(v48[0] + 40LL) |= 0x4000u;
    *(_DWORD *)(v48[0] + 188LL) = a3;
    *(_QWORD *)(v48[0] + 160LL) = a5;
    if ( a10 || v13 == 0x10000 )
      *(float *)(v48[0] + 172LL) = (float)v45;
    v29 = (unsigned __int64)v28 | 0x500000;
    if ( a10 )
    {
      *(_DWORD *)(v48[0] + 40LL) |= 0xC00u;
      *(_DWORD *)(v48[0] + 40LL) &= ~4u;
      if ( v46 == 6 )
      {
        *(_DWORD *)(v48[0] + 40LL) |= 4u;
        *(_DWORD *)(v48[0] + 40LL) |= 0x10000u;
      }
      v29 = (unsigned __int64)v28 | 0x300000;
    }
    else if ( v13 )
    {
      if ( v46 == 6 )
        *(_DWORD *)(v48[0] + 40LL) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v48[0] + 40LL) &= ~4u;
    }
    HmgModifyHandleType(v29);
    v11 = v29;
  }
  else if ( v19 && !v17 )
  {
    Win32FreePool(v19);
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v48);
  return (void *)v11;
}
