/*
 * XREFs of ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800C40C0
 * Callers:
 *     ?GetProperty@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1802424B0 (-GetProperty@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAAJIPEAVC.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18001B368 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x180039DEC (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::GetProperty(CVisual *this, int a2, struct CExpressionValue *a3)
{
  struct CExpressionValue *v3; // r11
  char v4; // cl
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // xmm0_4
  FLOAT x; // xmm0_4
  FLOAT y; // xmm1_4
  FLOAT z; // xmm2_4
  int v11; // edx
  int *v12; // rcx
  __int64 v13; // r11
  struct D2D_VECTOR_3F v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  if ( a2 == 37 )
  {
    v4 = *((_BYTE *)this + 103) & 1;
    *((_DWORD *)a3 + 18) = 17;
    *(_BYTE *)a3 = v4;
    *((_BYTE *)a3 + 76) = 1;
    return 0LL;
  }
  else
  {
    switch ( a2 )
    {
      case 25:
        v6 = *((_QWORD *)this + 28);
        if ( (*(_DWORD *)(v6 + 4) & 0x8000000) != 0 )
        {
          v11 = *(_DWORD *)(v6 + 12);
          v12 = (int *)(v6 + 12);
          if ( (v11 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v12 = (int *)((char *)v12 + (v11 & 0xFFFFFF) + 4);
              v11 = *v12;
            }
            while ( (*v12 & 0x7F000000) != 0x5000000 );
          }
          v7 = v12[1];
        }
        else
        {
          v7 = (int)FLOAT_1_0;
        }
        *(_DWORD *)a3 = v7;
        result = 0LL;
        *((_DWORD *)a3 + 18) = 18;
        *((_BYTE *)a3 + 76) = 1;
        return result;
      case 26:
        *(_BYTE *)a3 = *((_BYTE *)this + 101) >> 7;
        *((_DWORD *)a3 + 18) = 17;
        *((_BYTE *)a3 + 76) = 1;
        return 0LL;
      case 27:
        x = *((float *)this + 28);
        y = *((float *)this + 29);
        z = *((float *)this + 30);
        goto LABEL_9;
      case 28:
        result = 0LL;
        *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 33), (__m128)*((unsigned int *)this + 34)).m128_u64[0];
        *((_DWORD *)a3 + 18) = 35;
        *((_BYTE *)a3 + 76) = 1;
        return result;
      case 29:
        CVisual::GetRelativeOffsetInternal(this, &v14);
        y = v14.y;
        z = v14.z;
        x = v14.x;
LABEL_9:
        *((_DWORD *)v3 + 18) = 52;
        result = 0LL;
        *(FLOAT *)v3 = x;
        *((FLOAT *)v3 + 1) = y;
        *((FLOAT *)v3 + 2) = z;
        *((_BYTE *)v3 + 76) = 1;
        break;
      case 30:
        CVisual::GetRelativeLayoutSizeInternal(this, &v15);
        *(_QWORD *)v13 = _mm_unpacklo_ps((__m128)(unsigned int)v15, (__m128)HIDWORD(v15)).m128_u64[0];
        *(_DWORD *)(v13 + 72) = 35;
        *(_BYTE *)(v13 + 76) = 1;
        return 0LL;
      default:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x1746u, 0LL);
        result = 2147942487LL;
        break;
    }
  }
  return result;
}
