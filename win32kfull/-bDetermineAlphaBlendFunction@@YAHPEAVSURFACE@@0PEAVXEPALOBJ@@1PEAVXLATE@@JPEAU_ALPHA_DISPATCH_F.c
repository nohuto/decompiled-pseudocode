__int64 __fastcall bDetermineAlphaBlendFunction(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct XEPALOBJ *a3,
        struct XEPALOBJ *a4,
        struct XLATE *a5,
        int a6,
        struct _ALPHA_DISPATCH_FORMAT *a7)
{
  unsigned int v7; // ebp
  __int64 (__fastcall *v10)(); // rax
  void (__fastcall *v11)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r9
  void (__fastcall *v12)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rdi
  void (__fastcall *v13)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r11
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // edx
  void *v20; // rax
  void (__fastcall *v21)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  int v22; // ecx
  _DWORD *v24; // rax
  void (__fastcall *v25)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  _DWORD *v26; // rax
  int v27; // eax
  _DWORD *v28; // rax
  void *v29; // rax
  void (__fastcall *v30)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rcx
  _DWORD *v31; // rcx
  void *v32; // rax
  void (__fastcall *v33)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  void *v34; // rax
  int v35; // eax
  _DWORD *v36; // rax
  _DWORD *v37; // rcx
  __int64 (__fastcall *v38)(); // rax

  v7 = 1;
  *((_DWORD *)a7 + 11) = 0;
  if ( (*((_BYTE *)a7 + 43) & 1) != 0 )
  {
    v10 = (__int64 (__fastcall *)())vAlphaPerPixelAndConst;
    if ( *((_BYTE *)a7 + 42) == 0xFF )
      v10 = (__int64 (__fastcall *)())vAlphaPerPixelOnly;
  }
  else
  {
    v10 = vAlphaConstOnly;
  }
  *((_QWORD *)a7 + 4) = v10;
  v11 = vLoadAndConvert32BitfieldsToBGRA;
  v12 = vLoadAndConvertBGR24ToBGRA;
  v13 = vLoadAndConvert16BitfieldsToBGRA;
  v14 = *((_DWORD *)a1 + 24) - 1;
  if ( !v14 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert1ToBGRA;
    v34 = &vConvertAndSaveBGRATo1;
    *(_DWORD *)a7 = 1;
    goto LABEL_70;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
    v34 = &vConvertAndSaveBGRATo4;
    *(_DWORD *)a7 = 4;
LABEL_70:
    *((_QWORD *)a7 + 3) = v34;
    goto LABEL_13;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    *(_DWORD *)a7 = 8;
    *((_QWORD *)a7 + 2) = vLoadAndConvert8ToBGRA;
    *((_QWORD *)a7 + 3) = &vConvertAndSaveBGRATo8;
    goto LABEL_13;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v31 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
    if ( *v31 == 63488 )
    {
      if ( v31[1] == 2016 && v31[2] == 31 )
      {
        v32 = &vConvertAndSaveBGRAToRGB16_565;
        v33 = vLoadAndConvertRGB16_565ToBGRA;
LABEL_66:
        *((_QWORD *)a7 + 2) = v33;
        *((_QWORD *)a7 + 3) = v32;
        *(_DWORD *)a7 = 16;
        goto LABEL_13;
      }
    }
    else if ( *v31 == 31744 && v31[1] == 992 && v31[2] == 31 )
    {
      v32 = &vConvertAndSaveBGRAToRGB16_555;
      v33 = vLoadAndConvertRGB16_555ToBGRA;
      goto LABEL_66;
    }
    v32 = &vConvertAndSaveBGRAToRGB16Bitfields;
    v33 = vLoadAndConvert16BitfieldsToBGRA;
    goto LABEL_66;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v27 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v27 & 8) != 0 )
      goto LABEL_55;
    if ( (v27 & 2) != 0 )
    {
      v28 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *v28 != 16711680 )
      {
LABEL_51:
        if ( *v28 || v28[1] || v28[2] )
          goto LABEL_54;
LABEL_55:
        v29 = &vConvertAndSaveBGRAToBGR24;
        v30 = vLoadAndConvertBGR24ToBGRA;
        goto LABEL_56;
      }
      if ( v28[1] == 65280 )
      {
        if ( v28[2] == 255 )
          goto LABEL_55;
        goto LABEL_51;
      }
    }
LABEL_54:
    v29 = &vConvertAndSaveBGRAToRGB24;
    v30 = vLoadAndConvertRGB24ToBGRA;
LABEL_56:
    *((_QWORD *)a7 + 2) = v30;
    *((_QWORD *)a7 + 3) = v29;
    *(_DWORD *)a7 = 24;
    goto LABEL_13;
  }
  if ( v18 == 1 )
  {
    v19 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
    if ( (v19 & 8) != 0 )
    {
LABEL_11:
      v20 = 0LL;
      v21 = 0LL;
LABEL_12:
      *((_QWORD *)a7 + 2) = v21;
      *((_QWORD *)a7 + 3) = v20;
      *(_DWORD *)a7 = 32;
      goto LABEL_13;
    }
    if ( (v19 & 2) != 0 )
    {
      v26 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *v26 == 16711680 )
      {
        if ( v26[1] != 65280 )
          goto LABEL_43;
        if ( v26[2] == 255 )
          goto LABEL_11;
      }
      if ( !*v26 && !v26[1] && !v26[2] )
        goto LABEL_11;
    }
LABEL_43:
    if ( (v19 & 4) != 0 )
    {
      v20 = &vConvertAndSaveBGRAToRGB32;
      v21 = vLoadAndConvertRGB32ToBGRA;
    }
    else
    {
      v20 = &vConvertAndSaveBGRATo32Bitfields;
      v21 = vLoadAndConvert32BitfieldsToBGRA;
    }
    goto LABEL_12;
  }
  v7 = 0;
LABEL_13:
  switch ( *((_DWORD *)a2 + 24) )
  {
    case 1:
      *((_QWORD *)a7 + 1) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 1) = 1;
      goto LABEL_23;
    case 2:
      *((_DWORD *)a7 + 1) = 4;
      *((_QWORD *)a7 + 1) = vLoadAndConvert4ToBGRA;
      goto LABEL_23;
    case 3:
      *((_QWORD *)a7 + 1) = vLoadAndConvert8ToBGRA;
      *((_DWORD *)a7 + 1) = 8;
      goto LABEL_23;
    case 4:
      v37 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
      if ( *v37 == 63488 )
      {
        if ( v37[1] == 2016 && v37[2] == 31 )
          v13 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v37 == 31744 && v37[1] == 992 && v37[2] == 31 )
      {
        v13 = vLoadAndConvertRGB16_555ToBGRA;
      }
      *((_QWORD *)a7 + 1) = v13;
      *((_DWORD *)a7 + 1) = 16;
      goto LABEL_23;
    case 5:
      v35 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v35 & 8) == 0 )
      {
        if ( (v35 & 2) == 0 )
          goto LABEL_86;
        v36 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
        if ( *v36 != 16711680 )
        {
LABEL_83:
          if ( !*v36 && !v36[1] && !v36[2] )
            goto LABEL_87;
          goto LABEL_86;
        }
        if ( v36[1] != 65280 )
        {
LABEL_86:
          v12 = vLoadAndConvertRGB24ToBGRA;
          goto LABEL_87;
        }
        if ( v36[2] != 255 )
          goto LABEL_83;
      }
LABEL_87:
      *((_QWORD *)a7 + 1) = v12;
      *((_DWORD *)a7 + 1) = 24;
      goto LABEL_23;
    case 6:
      if ( !a5 )
        goto LABEL_21;
      v22 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v22 & 8) != 0 )
        goto LABEL_21;
      if ( (v22 & 2) == 0 )
        goto LABEL_75;
      v24 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
      if ( *v24 != 16711680 )
        goto LABEL_109;
      if ( v24[1] != 65280 )
        goto LABEL_75;
      if ( v24[2] != 255 )
      {
LABEL_109:
        if ( *v24 || v24[1] || v24[2] )
        {
LABEL_75:
          if ( (v22 & 4) != 0 )
            v11 = vLoadAndConvertRGB32ToBGRA;
          goto LABEL_22;
        }
      }
LABEL_21:
      v11 = 0LL;
LABEL_22:
      *((_QWORD *)a7 + 1) = v11;
      *((_DWORD *)a7 + 1) = 32;
      goto LABEL_23;
  }
  v7 = 0;
LABEL_23:
  if ( *((__int64 (__fastcall **)())a7 + 4) != vAlphaConstOnly )
    return v7;
  v25 = (void (__fastcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_QWORD *)a7 + 1);
  if ( *(_OWORD *)((char *)a7 + 8) == __PAIR128__(vLoadAndConvertRGB16_555ToBGRA, vLoadAndConvertRGB16_555ToBGRA) )
  {
    v38 = vAlphaConstOnly16_555;
LABEL_101:
    *((_QWORD *)a7 + 4) = v38;
    *((_BYTE *)a7 + 42) = (31 * (unsigned int)*((unsigned __int8 *)a7 + 42) + 128) / 0xFF;
LABEL_106:
    *((_QWORD *)a7 + 1) = 0LL;
    *((_QWORD *)a7 + 2) = 0LL;
    *((_QWORD *)a7 + 3) = 0LL;
    return v7;
  }
  if ( v25 == vLoadAndConvertRGB16_565ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB16_565ToBGRA )
  {
    v38 = vAlphaConstOnly16_565;
    goto LABEL_101;
  }
  if ( v25 == vLoadAndConvertRGB24ToBGRA
    && *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) == vLoadAndConvertRGB24ToBGRA )
  {
    *((_QWORD *)a7 + 4) = vAlphaConstOnly24;
    goto LABEL_106;
  }
  return v7;
}
