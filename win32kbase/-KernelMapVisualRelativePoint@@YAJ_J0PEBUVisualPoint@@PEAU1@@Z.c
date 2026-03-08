/*
 * XREFs of ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C01585A4
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1C0158F60 (NtMapVisualRelativePoints.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01581B8 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0158220 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?MapVisualRelativePoint@InputSink@InputTraceLogging@@SAXPEAX0AEBUtagINPUT_TRANSFORM@@1UVisualPoint@@2@Z @ 0x1C0158BCC (-MapVisualRelativePoint@InputSink@InputTraceLogging@@SAXPEAX0AEBUtagINPUT_TRANSFORM@@1UVisualPoi.c)
 *     ?TransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0158EE0 (-TransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall KernelMapVisualRelativePoint(
        char *a1,
        char *a2,
        const struct VisualPoint *a3,
        struct VisualPoint *a4)
{
  int TransformFromInputSink; // ebx
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-61h] BYREF
  float v14[16]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v15[64]; // [rsp+80h] [rbp-19h] BYREF

  *(_QWORD *)a4 = *(_QWORD *)a3;
  TransformFromInputSink = 0;
  memset(v15, 0, sizeof(v15));
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    TransformFromInputSink = GetTransformFromInputSink(a1, (struct tagINPUT_TRANSFORM *)v15, v9);
    if ( TransformFromInputSink < 0 )
      return (unsigned int)TransformFromInputSink;
    v12 = _mm_unpacklo_ps((__m128)*(unsigned int *)a4, (__m128)*((unsigned int *)a4 + 1)).m128_u64[0];
    *(_QWORD *)a4 = *(_QWORD *)TransformPoint(v13, &v12, v15);
  }
  memset(v14, 0, sizeof(v14));
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_7:
    InputTraceLogging::InputSink::MapVisualRelativePoint(a1, a2, v15, v14, *(_QWORD *)a3, *(_QWORD *)a4);
    return (unsigned int)TransformFromInputSink;
  }
  TransformFromInputSink = GetTransformFromInputSink(a2, (struct tagINPUT_TRANSFORM *)v14, v10);
  if ( TransformFromInputSink >= 0 )
  {
    v12 = _mm_unpacklo_ps((__m128)*(unsigned int *)a4, (__m128)*((unsigned int *)a4 + 1)).m128_u64[0];
    *(_QWORD *)a4 = *(_QWORD *)InverseTransformPoint((__int64)v13, (float *)&v12, v14);
    goto LABEL_7;
  }
  return (unsigned int)TransformFromInputSink;
}
