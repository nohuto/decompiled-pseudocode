_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  ULONG ulPrimaryOrder; // r9d
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  int v12; // r12d
  int v13; // edx
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  LONG v17; // r15d
  struct tagPALETTEENTRY *v18; // rax
  struct tagPALETTEENTRY *v19; // rdi
  ULONG v20; // r8d
  __int64 i; // rdx
  char v22; // cl
  __int64 j; // rdx
  char v24; // cl
  __int64 k; // rdx
  char v26; // cl
  __int64 m; // rax
  _OWORD v28[2]; // [rsp+50h] [rbp-30h] BYREF

  if ( (unsigned int)(a2 - 5) <= 2 )
  {
    ulPrimaryOrder = a3->ulPrimaryOrder;
    v6 = 31;
    v7 = 992;
    if ( a2 != 5 )
    {
      v6 = 255;
      v7 = 65280;
    }
    v8 = 31744;
    if ( a2 != 5 )
      v8 = 16711680;
    v9 = v7;
    if ( (ulPrimaryOrder & 1) != 0 )
    {
      v9 = v6;
      v6 = v7;
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      v10 = v9;
      v9 = v8;
    }
    else
    {
      v10 = v8;
      if ( (ulPrimaryOrder & 4) != 0 )
      {
        v10 = v6;
        v6 = v8;
      }
    }
    return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v10, v9, v6, 0x100200u, 1) != 0;
  }
  v12 = 0;
  if ( a2 )
  {
    v13 = a2 - 2;
    if ( !v13 )
      goto LABEL_24;
    v14 = v13 - 1;
    if ( !v14 )
    {
      v17 = 16;
      v19 = (struct tagPALETTEENTRY *)&unk_1C032AD00;
      goto LABEL_40;
    }
    if ( v14 == 1 )
    {
      v17 = HT_Get8BPPMaskPalette(
              0LL,
              a3->flHTFlags & 8,
              HIBYTE(a3->flHTFlags),
              a3->ciDevice.RedGamma,
              a3->ciDevice.GreenGamma,
              a3->ciDevice.BlueGamma);
      if ( !(4 * v17) )
        return 0LL;
      v18 = (struct tagPALETTEENTRY *)Win32AllocPool((unsigned int)(4 * v17), 1818316871LL, v15, v16);
      v19 = v18;
      if ( !v18 )
        return 0LL;
      if ( (a3->flHTFlags & 0x400) != 0 )
        *v18 = (struct tagPALETTEENTRY)809650002;
      else
        *v18 = 0;
      HT_Get8BPPMaskPalette(
        v18,
        a3->flHTFlags & 8,
        HIBYTE(a3->flHTFlags),
        a3->ciDevice.RedGamma,
        a3->ciDevice.GreenGamma,
        a3->ciDevice.BlueGamma);
      v12 = 1;
    }
    else
    {
LABEL_24:
      v20 = a3->ulPrimaryOrder;
      v17 = 8;
      v19 = (struct tagPALETTEENTRY *)v28;
      v28[0] = xmmword_1C032ACD0;
      v28[1] = xmmword_1C032ACE0;
      if ( (v20 & 1) != 0 )
      {
        for ( i = 1LL; i < 7; ++i )
        {
          v22 = *((_BYTE *)v28 + 4 * i + 1);
          *((_BYTE *)v28 + 4 * i + 1) = *((_BYTE *)v28 + 4 * i + 2);
          *((_BYTE *)v28 + 4 * i + 2) = v22;
        }
      }
      if ( (v20 & 2) != 0 )
      {
        for ( j = 1LL; j < 7; ++j )
        {
          v24 = *((_BYTE *)v28 + 4 * j);
          *((_BYTE *)v28 + 4 * j) = *((_BYTE *)v28 + 4 * j + 1);
          *((_BYTE *)v28 + 4 * j + 1) = v24;
        }
      }
      else if ( (v20 & 4) != 0 )
      {
        for ( k = 1LL; k < 7; ++k )
        {
          v26 = *((_BYTE *)v28 + 4 * k);
          *((_BYTE *)v28 + 4 * k) = *((_BYTE *)v28 + 4 * k + 2);
          *((_BYTE *)v28 + 4 * k + 2) = v26;
        }
      }
      if ( (a3->flHTFlags & 0x100) != 0 )
      {
        for ( m = 0LL; m < 2; ++m )
          v28[m] = _mm_xor_si128(_mm_load_si128((const __m128i *)&_xmm), _mm_loadu_si128((const __m128i *)&v28[m]));
      }
    }
  }
  else
  {
    v19 = (struct tagPALETTEENTRY *)&unk_1C032ACF0;
    v17 = 2;
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      v19 = (struct tagPALETTEENTRY *)v28;
      *(_QWORD *)&v28[0] = 0xFFFFFFLL;
    }
  }
LABEL_40:
  if ( !PALMEMOBJ::bCreatePalette(this, 1u, v17, (const unsigned int *)&v19->peRed, 0, 0, 0, 0x100400u, 1) )
  {
    if ( v12 )
      Win32FreePool(v19);
    return 0LL;
  }
  if ( v12 )
    Win32FreePool(v19);
  return 1LL;
}
