/*
 * XREFs of ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1C005A258
 * Callers:
 *     ?SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C005A860 (-SetBufferProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005B1EC (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CRectangleClipMarshaler::SetRectangleHelper(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const __m128i *a3,
        bool *a4)
{
  bool v4; // di
  float v8; // xmm1_4
  char v9; // r10
  float v10; // xmm1_4
  char v11; // r9
  float v12; // xmm1_4
  char v13; // r8
  float v14; // xmm2_4
  char v15; // dl
  char v16; // cl
  __m128 v17; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v17 = (__m128)_mm_loadu_si128(a3);
  v8 = fminf(2097152.0, fmaxf(_mm_shuffle_ps(v17, v17, 85).m128_f32[0], -2097152.0));
  if ( *((float *)this + 25) == v8 )
  {
    v9 = 0;
  }
  else
  {
    *((float *)this + 25) = v8;
    v9 = 1;
  }
  v10 = fminf(2097152.0, fmaxf(v17.m128_f32[0], -2097152.0));
  if ( *((float *)this + 24) == v10 )
  {
    v11 = 0;
  }
  else
  {
    *((float *)this + 24) = v10;
    v11 = 1;
  }
  v12 = fminf(2097152.0, fmaxf(v17.m128_f32[3], -2097152.0));
  if ( *((float *)this + 27) == v12 )
  {
    v13 = 0;
  }
  else
  {
    *((float *)this + 27) = v12;
    v13 = 1;
  }
  v14 = fminf(2097152.0, fmaxf(v17.m128_f32[2], -2097152.0));
  if ( *((float *)this + 26) == v14 )
  {
    v15 = 0;
  }
  else
  {
    *((float *)this + 26) = v14;
    v15 = 1;
  }
  if ( *((float *)this + 28) == 0.0 )
  {
    if ( *((float *)this + 29) == 0.0 )
    {
      if ( *((float *)this + 30) == 0.0 )
      {
        if ( *((float *)this + 31) == 0.0 )
        {
          if ( *((float *)this + 32) == 0.0 )
          {
            if ( *((float *)this + 33) == 0.0 )
            {
              if ( *((float *)this + 34) == 0.0 )
              {
                if ( *((float *)this + 35) == 0.0 )
                {
                  v16 = 0;
                  goto LABEL_18;
                }
                *((_DWORD *)this + 35) = 0;
              }
              else
              {
                *((_DWORD *)this + 34) = 0;
              }
            }
            else
            {
              *((_DWORD *)this + 33) = 0;
            }
          }
          else
          {
            *((_DWORD *)this + 32) = 0;
          }
        }
        else
        {
          *((_DWORD *)this + 31) = 0;
        }
      }
      else
      {
        *((_DWORD *)this + 30) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 29) = 0;
    }
  }
  else
  {
    *((_DWORD *)this + 28) = 0;
  }
  v16 = 1;
LABEL_18:
  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v16 = 1;
    v9 = 1;
    v11 = 1;
    v13 = 1;
    v15 = 1;
  }
  else if ( !v9 )
  {
    goto LABEL_21;
  }
  *((_DWORD *)this + 4) &= ~0x2000u;
LABEL_21:
  if ( v11 )
    *((_DWORD *)this + 4) &= ~0x1000u;
  if ( v13 )
    *((_DWORD *)this + 4) &= ~0x8000u;
  if ( v15 )
    *((_DWORD *)this + 4) &= ~0x4000u;
  if ( v16 )
    *((_DWORD *)this + 4) &= ~0x800u;
  if ( *a4 || v9 || v11 || v13 || v15 || v16 )
    v4 = 1;
  *a4 = v4;
}
