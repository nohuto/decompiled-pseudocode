char __fastcall CTouchProcessor::TransformPointerCoordinates(
        const struct tagINPUT_TRANSFORM *a1,
        struct tagRIMPOINTERINFONODE *a2)
{
  __m128i v3; // xmm1
  __m128 v5; // xmm2
  float *v6; // rax
  float *v7; // rax
  int v8; // edx
  int v9; // r8d
  bool v10; // zf
  tagRECT v12; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+20h]

  v3 = _mm_cvtsi32_si128(*((_DWORD *)a2 + 13));
  v5 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 12));
  v14 = *((_QWORD *)a2 + 6);
  v13 = _mm_unpacklo_ps(v5, _mm_cvtepi32_ps(v3)).m128_u64[0];
  v6 = (float *)InverseTransformPoint((__int64)&v12, (float *)&v13, (float *)a1);
  v13 = __PAIR64__((int)v6[1], (int)*v6);
  *((_QWORD *)a2 + 6) = v13;
  v13 = _mm_unpacklo_ps(
          (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 16)),
          (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 17))).m128_u64[0];
  v7 = (float *)InverseTransformPoint((__int64)&v12, (float *)&v13, (float *)a1);
  v10 = *((_DWORD *)a2 + 4) == 2;
  v13 = __PAIR64__((int)v7[1], (int)*v7);
  *((_QWORD *)a2 + 8) = v13;
  if ( v10 )
  {
    *(struct tagRECT *)((char *)a2 + 120) = *InverseTransformRect(&v12, (const struct tagRECT *)((char *)a2 + 120), a1);
    *(struct tagRECT *)((char *)a2 + 136) = *InverseTransformRect(&v12, (const struct tagRECT *)((char *)a2 + 136), a1);
  }
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (unsigned int)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return 1;
}
