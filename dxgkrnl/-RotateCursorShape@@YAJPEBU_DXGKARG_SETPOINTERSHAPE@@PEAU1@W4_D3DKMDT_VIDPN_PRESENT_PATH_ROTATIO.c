__int64 __fastcall RotateCursorShape(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGK_DRIVERCAPS *a4)
{
  __int64 v4; // rsi
  UINT YHot; // eax
  __int64 v10; // r14
  UINT Width; // r8d
  UINT Pitch; // edx
  UINT Value; // r9d
  UINT Height; // ecx
  int v15; // r9d
  char *pPixels; // r11
  UINT v17; // eax
  UINT v18; // ecx
  UINT v19; // edx
  UINT v20; // eax
  UINT v21; // ecx
  UINT v22; // [rsp+58h] [rbp-9h] BYREF
  UINT v23; // [rsp+5Ch] [rbp-5h]
  UINT v24; // [rsp+60h] [rbp-1h]
  UINT v25; // [rsp+64h] [rbp+3h]
  UINT v26; // [rsp+68h] [rbp+7h]
  UINT v27; // [rsp+6Ch] [rbp+Bh]
  char *v28; // [rsp+70h] [rbp+Fh]
  int v29; // [rsp+78h] [rbp+17h]
  int v30; // [rsp+7Ch] [rbp+1Bh]
  UINT v31; // [rsp+80h] [rbp+1Fh] BYREF
  UINT v32; // [rsp+84h] [rbp+23h]
  UINT v33; // [rsp+88h] [rbp+27h]
  UINT v34; // [rsp+8Ch] [rbp+2Bh]
  UINT v35; // [rsp+90h] [rbp+2Fh]
  UINT v36; // [rsp+94h] [rbp+33h]
  char *v37; // [rsp+98h] [rbp+37h]
  int v38; // [rsp+A0h] [rbp+3Fh]
  int v39; // [rsp+A4h] [rbp+43h]

  v4 = a3;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v23 = 0;
  v25 = 0;
  if ( a3 == D3DKMDT_VPPR_IDENTITY )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, a1->Height * a1->Pitch * ((a1->Flags.Value & 1) + 1));
LABEL_3:
    a2->XHot = a1->XHot;
    YHot = a1->YHot;
LABEL_4:
    a2->YHot = YHot;
    return 0LL;
  }
  v10 = 2LL;
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, a1->Height * a1->Pitch * ((a1->Flags.Value & 1) + 1));
    a2->XHot = a1->XHot;
    a2->YHot = a1->YHot;
    goto LABEL_8;
  }
  Width = a1->Width;
  Pitch = a1->Pitch;
  Value = a1->Flags.Value;
  Height = a1->Height;
  v15 = Value & 1;
  pPixels = (char *)a2->pPixels;
  v37 = (char *)a1->pPixels;
  v39 = v15;
  v30 = v15;
  v34 = Height;
  v33 = Height;
  v24 = Height;
  v32 = Width;
  v31 = Width;
  v22 = Width;
  v36 = Pitch;
  v35 = Pitch;
  v26 = Pitch;
  v28 = pPixels;
  v29 = v4;
  v38 = 1;
  if ( (((_DWORD)v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    v17 = Width;
    v23 = Width;
  }
  else
  {
    v23 = Height;
    v17 = Height;
    if ( v15 )
      Pitch = (Height + 7) >> 3;
    else
      Pitch = 4 * Height;
    Height = Width;
  }
  v27 = Pitch;
  v25 = Height;
  if ( v17 <= a4->MaxPointerWidth && Height <= a4->MaxPointerHeight )
  {
    if ( v15 )
    {
      memset(pPixels, 255, Height * Pitch);
      do
      {
        RotateCursorShapeWorker((struct CURSOR_INFO *)&v22, (const struct CURSOR_INFO *)&v31);
        v18 = v27;
        v19 = v25;
        v28 += v25 * v27;
        v37 += v33 * v35;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      RotateCursorShapeWorker((struct CURSOR_INFO *)&v22, (const struct CURSOR_INFO *)&v31);
      v18 = v27;
      v19 = v25;
    }
    v20 = v23;
    a2->Pitch = v18;
    a2->Height = v19;
    a2->Width = v20;
    a2->Flags.Value = a1->Flags.Value;
    switch ( (_DWORD)v4 )
    {
      case 1:
        goto LABEL_3;
      case 2:
        a2->XHot = a1->YHot;
        v21 = a1->Width - a1->XHot;
        break;
      case 3:
        a2->XHot = a1->Width - a1->XHot;
        v21 = a1->Height - a1->YHot;
        break;
      case 4:
        a2->XHot = a1->Height - a1->YHot;
        YHot = a1->XHot;
        goto LABEL_4;
      default:
LABEL_8:
        WdLogSingleEntry1(1LL, v4);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid rotation (0x%I64x) specified",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
        return 0LL;
    }
    a2->YHot = v21;
    return 0LL;
  }
  return 3221225659LL;
}
