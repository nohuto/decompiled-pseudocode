/*
 * XREFs of GreExtCreatePen @ 0x1C00AED64
 * Callers:
 *     GreCreatePen @ 0x1C00AECD8 (GreCreatePen.c)
 *     NtGdiExtCreatePen @ 0x1C015CD20 (NtGdiExtCreatePen.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00AF004 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00AF0A4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1C02D0EC8 (-hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z.c)
 *     GreCreateDIBBrush @ 0x1C02D0F20 (GreCreateDIBBrush.c)
 */

__int64 __fastcall GreExtCreatePen(
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
  int v12; // r15d
  int v13; // r12d
  int v14; // r13d
  unsigned int v16; // ebx
  int v17; // esi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  unsigned __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r14d
  int v24; // esi
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
  int v39; // ecx
  int v40; // r8d
  int v41; // r10d
  int v42; // eax
  char v43; // [rsp+30h] [rbp-50h]
  int v44; // [rsp+34h] [rbp-4Ch]
  int v45; // [rsp+38h] [rbp-48h]
  struct Gre::Base::SESSION_GLOBALS *v46; // [rsp+40h] [rbp-40h]
  _QWORD v47[7]; // [rsp+48h] [rbp-38h] BYREF

  v11 = 0LL;
  v44 = 0;
  v12 = 0;
  v13 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v16 = abs32(a2);
  v45 = v16;
  v17 = v16 >> 31;
  if ( (a1 & 0xFFF000F0) != 0 )
    v17 = 1;
  v18 = Gre::Base::Globals((Gre::Base *)1);
  v46 = v18;
  if ( v14 == 5 )
    return *(_QWORD *)(*((_QWORD *)v18 + 396) + 64LL);
  v19 = 0x10000LL;
  if ( v13 )
  {
    if ( v13 == 0x10000 )
      goto LABEL_6;
    goto LABEL_44;
  }
  if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
LABEL_44:
    v17 = 1;
LABEL_6:
  if ( v16 != 1 && !v13 && !a10 )
    v17 = 1;
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
      v17 = 1;
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
    if ( v21 == 256 )
    {
      v44 = 1;
    }
    else if ( v21 == 512 )
    {
      v44 = 2;
    }
    else
    {
      v17 = 1;
    }
  }
  else
  {
    v44 = 0;
  }
  v22 = a7;
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
  v17 = 1;
LABEL_14:
  if ( v13 == 0x10000 )
  {
    switch ( v14 )
    {
      case 0:
        goto LABEL_16;
      case 1:
        v22 = 2;
        a8 = (int *)&unk_1C03292B8;
        goto LABEL_16;
      case 2:
        v22 = 2;
        a8 = (int *)&unk_1C03292F8;
        goto LABEL_16;
      case 3:
        v22 = 4;
        a8 = (int *)&unk_1C03292A8;
        goto LABEL_16;
      case 4:
        v22 = 6;
        a8 = (int *)&unk_1C03292E0;
        goto LABEL_16;
    }
    v31 = v14 - 6;
    v30 = v14 == 6;
    goto LABEL_73;
  }
  switch ( v14 )
  {
    case 0:
      goto LABEL_16;
    case 1:
      v22 = 2;
      v11 = &unk_1C0329288;
      goto LABEL_82;
    case 2:
      v22 = 8;
      v11 = &unk_1C03292C0;
      goto LABEL_82;
    case 3:
      v22 = 4;
      v11 = &unk_1C0329278;
      goto LABEL_82;
    case 4:
      v22 = 6;
      v11 = &unk_1C0329290;
LABEL_82:
      v12 = 1;
      goto LABEL_16;
    case 6:
      if ( !a10 )
        v17 = 1;
      goto LABEL_16;
  }
  v31 = v14 - 7;
  v30 = v14 == 7;
LABEL_73:
  if ( !v30 && v31 != 1 )
    goto LABEL_84;
LABEL_16:
  if ( v17 )
  {
LABEL_84:
    v32 = 87;
LABEL_86:
    EngSetLastError(v32);
    return 0LL;
  }
  if ( !v22 || v11 )
  {
    v24 = v45;
  }
  else
  {
    if ( !(4 * v22) || (v33 = Win32AllocPool(4 * v22, 2037674823LL, 2LL, 0x10000LL), (v34 = (_DWORD *)v33) == 0LL) )
    {
      v32 = 8;
      goto LABEL_86;
    }
    v19 = v33;
    v35 = v33 + 4LL * v22;
    if ( !v13 || a10 )
    {
      v19 = 0LL;
      v39 = 1;
      v40 = 1;
      v11 = (void *)v33;
      if ( !a8 )
        goto LABEL_83;
      while ( 1 )
      {
        v41 = v39;
        if ( (unsigned __int64)v34 >= v35 )
          break;
        v39 = *a8;
        v19 = (unsigned int)(*a8 + v19);
        *v34 = *a8;
        v42 = v39;
        ++v34;
        if ( v40 < v39 )
          v42 = v40;
        v40 = v42;
        if ( v41 > v39 )
          v39 = v41;
        if ( !++a8 )
          goto LABEL_83;
      }
      if ( v40 <= 0 || v39 > 0x3FFF || (int)v19 > 0x3FFF )
        goto LABEL_83;
      v24 = v45;
    }
    else
    {
      v36 = 0;
      v37 = 0;
      v11 = (void *)v33;
      if ( !a8 )
        goto LABEL_83;
      v24 = v45;
      while ( v19 < v35 )
      {
        v38 = *a8;
        if ( v14 != 7 )
        {
          if ( v44 != 2 )
            v38 += (((_BYTE)v19 - (_BYTE)v33) & 4) != 0 ? 1 : -1;
          v38 *= v45;
        }
        if ( v37 >= v38 )
          v37 = v38;
        v36 += v38;
        *(float *)v19 = (float)v38;
        v19 += 4LL;
        if ( !++a8 )
          goto LABEL_83;
      }
      if ( v37 < 0 || v36 <= 0 )
      {
LABEL_83:
        Win32FreePool(v11);
        goto LABEL_84;
      }
    }
  }
  switch ( a3 )
  {
    case 0:
      v25 = !v24 && !v14;
      SolidBrushInternal = (HBRUSH)hCreateSolidBrushInternal(a4, 1LL, a11, v25);
      break;
    case 1:
      if ( v11 && !v12 )
        Win32FreePool(v11);
      v18 = v46;
      return *(_QWORD *)(*((_QWORD *)v18 + 396) + 64LL);
    case 2:
      SolidBrushInternal = hCreateHatchBrushInternal(a6, a4, 1);
      break;
    case 3:
      SolidBrushInternal = (HBRUSH)GreCreatePatternBrushInternal(a6, 1LL, 0LL, v19);
      break;
    case 6:
      SolidBrushInternal = (HBRUSH)GreCreateDIBBrush(a6, a4, a9, 0, 1, a5);
      break;
    default:
      EngSetLastError(0x57u);
      goto LABEL_125;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_125:
    if ( v11 && !v12 )
      Win32FreePool(v11);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v47, SolidBrushInternal);
  if ( !v47[0] )
  {
    if ( v11 && !v12 )
      Win32FreePool(v11);
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v47);
    return 0LL;
  }
  *(_DWORD *)(v47[0] + 40LL) |= 0x400u;
  *(_DWORD *)(v47[0] + 176LL) = a1;
  *(_BYTE *)(v47[0] + 185LL) = v44;
  *(_BYTE *)(v47[0] + 184LL) = v43;
  *(_QWORD *)(v47[0] + 152LL) = v11;
  *(_DWORD *)(v47[0] + 180LL) = v22;
  *(_DWORD *)(v47[0] + 168LL) = v45;
  if ( v12 )
    *(_DWORD *)(v47[0] + 40LL) |= 0x4000u;
  *(_DWORD *)(v47[0] + 188LL) = a3;
  *(_QWORD *)(v47[0] + 160LL) = a5;
  if ( a10 || v13 == 0x10000 )
    *(float *)(v47[0] + 172LL) = (float)v45;
  v28 = (unsigned __int64)v27 | 0x500000;
  if ( a10 )
  {
    *(_DWORD *)(v47[0] + 40LL) |= 0xC00u;
    *(_DWORD *)(v47[0] + 40LL) &= ~4u;
    if ( v14 == 6 )
    {
      *(_DWORD *)(v47[0] + 40LL) |= 4u;
      *(_DWORD *)(v47[0] + 40LL) |= 0x10000u;
    }
    v28 = (unsigned __int64)v27 | 0x300000;
  }
  else if ( v13 )
  {
    if ( v14 == 6 )
      *(_DWORD *)(v47[0] + 40LL) |= 0x10000u;
  }
  else
  {
    *(_DWORD *)(v47[0] + 40LL) &= ~4u;
  }
  HmgModifyHandleType(v28, 0x10000LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v47);
  return v28;
}
