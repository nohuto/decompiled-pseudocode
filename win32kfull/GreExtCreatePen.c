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
  int v12; // r14d
  int v13; // r15d
  int v14; // r12d
  unsigned int v16; // ebx
  int v17; // esi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  unsigned __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebp
  int v24; // esi
  _BOOL8 v25; // r9
  HBRUSH SolidBrushInternal; // rax
  HBRUSH v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned int v30; // eax
  bool v32; // zf
  int v33; // eax
  ULONG v34; // ecx
  __int64 v35; // rax
  _DWORD *v36; // rdx
  unsigned __int64 v37; // r11
  int v38; // r10d
  int v39; // r8d
  int v40; // ecx
  int v41; // ecx
  int v42; // r8d
  int v43; // r10d
  int v44; // eax
  char v45; // [rsp+30h] [rbp-58h]
  int v46; // [rsp+34h] [rbp-54h]
  int v47; // [rsp+38h] [rbp-50h]
  _QWORD v48[9]; // [rsp+40h] [rbp-48h] BYREF

  v11 = 0LL;
  v46 = 0;
  v12 = 0;
  v13 = a1 & 0xF0000;
  v14 = a1 & 0xF;
  v16 = abs32(a2);
  v47 = v16;
  v17 = v16 >> 31;
  if ( (a1 & 0xFFF000F0) != 0 )
    v17 = 1;
  v18 = Gre::Base::Globals((Gre::Base *)1);
  v48[0] = v18;
  if ( v14 == 5 )
    return *(_QWORD *)(*((_QWORD *)v18 + 396) + 64LL);
  v19 = 0x10000LL;
  if ( v13 )
  {
    if ( v13 == 0x10000 )
      goto LABEL_6;
    goto LABEL_45;
  }
  if ( a3 && (a3 != 2 || ((a6 - 8) & 0xFFFFFFFFFFFFFFFDuLL) != 0) )
LABEL_45:
    v17 = 1;
LABEL_6:
  if ( v16 != 1 && !v13 && !a10 )
    v17 = 1;
  v20 = a1 & 0xF000;
  if ( (a1 & 0xF000) == 0 )
    goto LABEL_8;
  if ( v20 == 4096 )
  {
    v45 = 1;
  }
  else
  {
    if ( v20 != 0x2000 )
    {
      v17 = 1;
LABEL_8:
      v45 = 0;
      goto LABEL_9;
    }
    v45 = 2;
  }
LABEL_9:
  v21 = a1 & 0xF00;
  if ( (a1 & 0xF00) != 0 )
  {
    if ( v21 == 256 )
    {
      v46 = 1;
    }
    else if ( v21 == 512 )
    {
      v46 = 2;
    }
    else
    {
      v17 = 1;
    }
  }
  else
  {
    v46 = 0;
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
        a8 = (int *)&unk_1C032AC18;
        goto LABEL_16;
      case 2:
        v22 = 2;
        a8 = (int *)&unk_1C032AC00;
        goto LABEL_16;
      case 3:
        v22 = 4;
        a8 = (int *)&unk_1C032AC08;
        goto LABEL_16;
      case 4:
        v22 = 6;
        a8 = (int *)&unk_1C032ABD0;
        goto LABEL_16;
    }
    v33 = v14 - 6;
    v32 = v14 == 6;
    goto LABEL_74;
  }
  switch ( v14 )
  {
    case 0:
      goto LABEL_16;
    case 1:
      v22 = 2;
      v11 = &unk_1C032ABF8;
      goto LABEL_83;
    case 2:
      v22 = 8;
      v11 = &unk_1C032ABB0;
      goto LABEL_83;
    case 3:
      v22 = 4;
      v11 = &unk_1C032ABE8;
      goto LABEL_83;
    case 4:
      v22 = 6;
      v11 = &unk_1C032AB98;
LABEL_83:
      v12 = 1;
      goto LABEL_16;
    case 6:
      if ( !a10 )
        v17 = 1;
      goto LABEL_16;
  }
  v33 = v14 - 7;
  v32 = v14 == 7;
LABEL_74:
  if ( !v32 && v33 != 1 )
    goto LABEL_85;
LABEL_16:
  if ( v17 )
  {
LABEL_85:
    v34 = 87;
LABEL_87:
    EngSetLastError(v34);
    return 0LL;
  }
  if ( !v22 || v11 )
  {
    v24 = v47;
  }
  else
  {
    if ( !(4 * v22) || (v35 = Win32AllocPool(4 * v22, 2037674823LL, 2LL, 0x10000LL), (v36 = (_DWORD *)v35) == 0LL) )
    {
      v34 = 8;
      goto LABEL_87;
    }
    v19 = v35;
    v37 = v35 + 4LL * v22;
    if ( !v13 || a10 )
    {
      v19 = 0LL;
      v41 = 1;
      v42 = 1;
      v11 = (void *)v35;
      if ( !a8 )
        goto LABEL_84;
      while ( 1 )
      {
        v43 = v41;
        if ( (unsigned __int64)v36 >= v37 )
          break;
        v41 = *a8;
        v19 = (unsigned int)(*a8 + v19);
        *v36 = *a8;
        v44 = v41;
        ++v36;
        if ( v42 < v41 )
          v44 = v42;
        v42 = v44;
        if ( v43 > v41 )
          v41 = v43;
        if ( !++a8 )
          goto LABEL_84;
      }
      if ( v42 <= 0 || v41 > 0x3FFF || (int)v19 > 0x3FFF )
        goto LABEL_84;
      v24 = v47;
    }
    else
    {
      v38 = 0;
      v39 = 0;
      v11 = (void *)v35;
      if ( !a8 )
        goto LABEL_84;
      v24 = v47;
      while ( v19 < v37 )
      {
        v40 = *a8;
        if ( v14 != 7 )
        {
          if ( v46 != 2 )
            v40 += (((_BYTE)v19 - (_BYTE)v35) & 4) != 0 ? 1 : -1;
          v40 *= v47;
        }
        if ( v39 >= v40 )
          v39 = v40;
        v38 += v40;
        *(float *)v19 = (float)v40;
        v19 += 4LL;
        if ( !++a8 )
          goto LABEL_84;
      }
      if ( v39 < 0 || v38 <= 0 )
      {
LABEL_84:
        Win32FreePool(v11);
        goto LABEL_85;
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
      v18 = (struct Gre::Base::SESSION_GLOBALS *)v48[0];
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
      goto LABEL_126;
  }
  v27 = SolidBrushInternal;
  if ( !SolidBrushInternal )
  {
LABEL_126:
    if ( v11 && !v12 )
      Win32FreePool(v11);
    return 0LL;
  }
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v48, SolidBrushInternal);
  v28 = v48[0];
  if ( !v48[0] )
  {
    if ( v11 && !v12 )
      Win32FreePool(v11);
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v48);
    return 0LL;
  }
  *(_DWORD *)(v48[0] + 40LL) |= 0x400u;
  *(_DWORD *)(v28 + 176) = a1;
  *(_BYTE *)(v28 + 185) = v46;
  *(_BYTE *)(v28 + 184) = v45;
  *(_QWORD *)(v28 + 152) = v11;
  *(_DWORD *)(v28 + 180) = v22;
  *(_DWORD *)(v28 + 168) = v47;
  if ( v12 )
    *(_DWORD *)(v28 + 40) |= 0x4000u;
  *(_DWORD *)(v28 + 188) = a3;
  *(_QWORD *)(v28 + 160) = a5;
  if ( v13 == 0x10000 || a10 )
    *(float *)(v28 + 172) = (float)v47;
  v29 = (unsigned __int64)v27 | 0x500000;
  if ( a10 )
  {
    *(_DWORD *)(v28 + 40) |= 0xC00u;
    v30 = *(_DWORD *)(v28 + 40) & 0xFFFFFFFB;
    *(_DWORD *)(v28 + 40) = v30;
    if ( v14 == 6 )
      *(_DWORD *)(v28 + 40) = v30 | 0x10004;
    v29 = (unsigned __int64)v27 | 0x300000;
  }
  else if ( v13 )
  {
    if ( v14 == 6 )
      *(_DWORD *)(v28 + 40) |= 0x10000u;
  }
  else
  {
    *(_DWORD *)(v28 + 40) &= ~4u;
  }
  HmgModifyHandleType(v29);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v48);
  return v29;
}
