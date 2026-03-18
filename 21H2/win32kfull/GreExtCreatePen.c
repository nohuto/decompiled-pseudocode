/*
 * XREFs of GreExtCreatePen @ 0x1C00F2B80
 * Callers:
 *     GreCreatePen @ 0x1C00F2AF8 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C014C760 (NtGdiExtCreatePen.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F2EEC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F2F78 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreCreateDIBBrush @ 0x1C014E4E8 (GreCreateDIBBrush.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02B5CDC (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
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
        int a9,
        int a10,
        __int64 a11)
{
  void *v11; // rdi
  int v13; // r15d
  int v14; // r12d
  int v15; // r13d
  unsigned int v16; // r10d
  unsigned int v18; // r8d
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r14d
  unsigned __int64 v23; // r9
  _BOOL8 v25; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v27; // rsi
  __int64 v28; // rbx
  bool v30; // zf
  int v31; // eax
  ULONG v32; // ecx
  __int64 v33; // rax
  _DWORD *v34; // rdx
  unsigned __int64 v35; // r11
  int v36; // r10d
  int v37; // r8d
  int v38; // ecx
  int v39; // r10d
  int v40; // ecx
  int v41; // r8d
  int v42; // eax
  char v43; // [rsp+30h] [rbp-40h]
  int v44; // [rsp+34h] [rbp-3Ch]
  int v45; // [rsp+38h] [rbp-38h]
  _QWORD v46[6]; // [rsp+40h] [rbp-30h] BYREF

  v11 = 0LL;
  v44 = 0;
  v13 = 0;
  v14 = a1 & 0xF0000;
  v15 = a1 & 0xF;
  v16 = a4;
  v18 = abs32(a2);
  v45 = v18;
  v19 = v18 >> 31;
  if ( (a1 & 0xFFF000F0) != 0 )
    v19 = 1;
  if ( v15 == 5 )
    return gahStockObjects[8];
  if ( v14 )
  {
    if ( v14 != 0x10000 )
LABEL_66:
      v19 = 1;
  }
  else if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
  {
    goto LABEL_66;
  }
  if ( v18 != 1 && !v14 && !a10 )
    v19 = 1;
  v20 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v20 == 4096 )
  {
    v43 = 1;
  }
  else
  {
    if ( v20 != 0x2000 )
    {
      v19 = 1;
LABEL_8:
      v43 = 0;
      goto LABEL_9;
    }
    v43 = 2;
  }
LABEL_9:
  v21 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v21 == 512 )
    {
      v44 = 2;
    }
    else if ( v21 == 256 )
    {
      v44 = 1;
    }
    else
    {
      v19 = 1;
    }
  }
  else
  {
    v44 = 0;
  }
  v22 = a7;
  if ( v15 == 7 )
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
  v19 = 1;
LABEL_14:
  v23 = 6LL;
  if ( v14 == 0x10000 )
  {
    switch ( v15 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v22 = 2;
        a8 = (int *)&gaulGeometricDash;
        goto LABEL_16;
      case 2:
        v22 = 2;
        a8 = (int *)&gaulGeometricDot;
        goto LABEL_16;
      case 3:
        v22 = 4;
        a8 = (int *)&gaulGeometricDashDot;
        goto LABEL_16;
      case 4:
        v22 = 6;
        a8 = (int *)&gaulGeometricDashDotDot;
        goto LABEL_16;
    }
    v31 = v15 - 6;
    v30 = v15 == 6;
  }
  else
  {
    switch ( v15 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v22 = 2;
        v11 = &galeCosmeticDash;
        goto LABEL_52;
      case 2:
        v22 = 8;
        v11 = &galeCosmeticDot;
LABEL_52:
        v13 = 1;
        goto LABEL_16;
      case 3:
        v22 = 4;
        v11 = &galeCosmeticDashDot;
        goto LABEL_52;
      case 4:
        v22 = 6;
        v11 = &galeCosmeticDashDotDot;
        goto LABEL_52;
      case 6:
        if ( !a10 )
          v19 = 1;
        goto LABEL_16;
    }
    v31 = v15 - 7;
    v30 = v15 == 7;
  }
  if ( !v30 && v31 != 1 )
    goto LABEL_93;
LABEL_16:
  if ( v19 )
    goto LABEL_93;
  if ( v22 && !v11 )
  {
    if ( !(4 * v22) || (v33 = Win32AllocPool(4 * v22, 2037674823LL), (v34 = (_DWORD *)v33) == 0LL) )
    {
      v32 = 8;
      goto LABEL_95;
    }
    v23 = v33;
    v35 = v33 + 4LL * v22;
    if ( !v14 || a10 )
    {
      v39 = 0;
      v40 = 1;
      v23 = 1LL;
      v11 = (void *)v33;
      if ( a8 )
      {
        while ( 1 )
        {
          v41 = v23;
          if ( (unsigned __int64)v34 >= v35 )
            break;
          v42 = *a8;
          v23 = (unsigned int)*a8;
          *v34 = *a8;
          if ( v41 < v42 )
            v23 = (unsigned int)v41;
          if ( v40 <= v42 )
            v40 = v42;
          v39 += v42;
          ++v34;
          if ( !++a8 )
            goto LABEL_92;
        }
        if ( (int)v23 > 0 && v40 <= 0x3FFF && v39 <= 0x3FFF )
        {
          v18 = v45;
          goto LABEL_126;
        }
      }
    }
    else
    {
      v36 = 0;
      v37 = 0;
      v11 = (void *)v33;
      if ( a8 )
      {
        while ( v23 < v35 )
        {
          v38 = *a8;
          if ( v15 != 7 )
          {
            if ( v44 != 2 )
              v38 += (((_BYTE)v23 - (_BYTE)v33) & 4) != 0 ? 1 : -1;
            v38 *= v45;
          }
          if ( v37 >= v38 )
            v37 = v38;
          v36 += v38;
          *(float *)v23 = (float)v38;
          v23 += 4LL;
          if ( !++a8 )
            goto LABEL_92;
        }
        if ( v37 >= 0 && v36 > 0 )
        {
          v18 = v45;
LABEL_126:
          v16 = a4;
          goto LABEL_18;
        }
      }
    }
LABEL_92:
    Win32FreePool(v11);
LABEL_93:
    v32 = 87;
LABEL_95:
    EngSetLastError(v32);
    return 0LL;
  }
LABEL_18:
  switch ( a3 )
  {
    case 0:
      v25 = !v18 && !v15;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(v16, 1LL, a11, v25);
      break;
    case 1:
      if ( v11 && !v13 )
        Win32FreePool(v11);
      return gahStockObjects[8];
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, v16, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v23);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, v16, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_133;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_133:
    if ( v11 && !v13 )
      Win32FreePool(v11);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v46, SolidBrushInternal);
  if ( v46[0] )
  {
    *(_DWORD *)(v46[0] + 40LL) |= 0x400u;
    *(_DWORD *)(v46[0] + 176LL) = a1;
    *(_BYTE *)(v46[0] + 185LL) = v44;
    *(_BYTE *)(v46[0] + 184LL) = v43;
    *(_QWORD *)(v46[0] + 152LL) = v11;
    *(_DWORD *)(v46[0] + 180LL) = v22;
    *(_DWORD *)(v46[0] + 168LL) = v45;
    if ( v13 )
      *(_DWORD *)(v46[0] + 40LL) |= 0x4000u;
    *(_DWORD *)(v46[0] + 188LL) = a3;
    *(_QWORD *)(v46[0] + 160LL) = a5;
    if ( a10 || v14 == 0x10000 )
      *(float *)(v46[0] + 172LL) = (float)v45;
    v28 = (unsigned __int64)v27 | 0x500000;
    if ( a10 )
    {
      *(_DWORD *)(v46[0] + 40LL) |= 0xC00u;
      *(_DWORD *)(v46[0] + 40LL) &= ~4u;
      if ( v15 == 6 )
      {
        *(_DWORD *)(v46[0] + 40LL) |= 4u;
        *(_DWORD *)(v46[0] + 40LL) |= 0x10000u;
      }
      v28 = (unsigned __int64)v27 | 0x300000;
    }
    else if ( v14 )
    {
      if ( v15 == 6 )
        *(_DWORD *)(v46[0] + 40LL) |= 0x10000u;
    }
    else
    {
      *(_DWORD *)(v46[0] + 40LL) &= ~4u;
    }
    HmgModifyHandleType(v28, 0x10000LL);
  }
  else
  {
    if ( v11 && !v13 )
      Win32FreePool(v11);
    v28 = 0LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v46);
  return (void *)v28;
}
