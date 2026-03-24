/*
 * XREFs of ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0116FA4
 * Callers:
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01329F0 (NtUserMapPointsByVisualIdentifier.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C01167B0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?MapPointsByVisualIdentifier@InputSink@InputTraceLogging@@SAXPEBU_LUID@@0AEBUtagINPUT_TRANSFORM@@1UVisualPoint@@2@Z @ 0x1C0116C74 (-MapPointsByVisualIdentifier@InputSink@InputTraceLogging@@SAXPEBU_LUID@@0AEBUtagINPUT_TRANSFORM@.c)
 *     ?TransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0117470 (-TransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01FB6FC (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall MapPointsByVisualIdentifierInternal(
        struct _LUID *a1,
        struct _LUID *a2,
        int a3,
        struct VisualPoint *a4,
        struct VisualPoint *a5)
{
  int Transform; // ebx
  __int64 v10; // r14
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  unsigned int *v13; // rax
  __int64 *v14; // rax
  __int64 v16; // [rsp+30h] [rbp-A1h]
  unsigned __int64 v17; // [rsp+3Ch] [rbp-95h] BYREF
  _BYTE v18[8]; // [rsp+44h] [rbp-8Dh] BYREF
  _BYTE v19[20]; // [rsp+4Ch] [rbp-85h] BYREF
  float v20[16]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v21[64]; // [rsp+A0h] [rbp-31h] BYREF

  Transform = 0;
  memset(v21, 0, sizeof(v21));
  if ( a1 )
    Transform = InputObjectMap::GetTransform(a1, (struct tagINPUT_TRANSFORM *)v21);
  memset(v20, 0, sizeof(v20));
  if ( Transform >= 0 )
  {
    if ( a2 )
      Transform = InputObjectMap::GetTransform(a2, (struct tagINPUT_TRANSFORM *)v20);
    if ( Transform >= 0 )
    {
      v10 = 0LL;
      if ( a3 )
      {
        do
        {
          v11 = (__m128)*((unsigned int *)a4 + 2 * v10);
          v12 = (__m128)*((unsigned int *)a4 + 2 * v10 + 1);
          v16 = __PAIR64__(v12.m128_u32[0], v11.m128_u32[0]);
          *((_DWORD *)a5 + 2 * v10) = v11.m128_i32[0];
          *((_DWORD *)a5 + 2 * v10 + 1) = v12.m128_i32[0];
          if ( a1 )
          {
            v17 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
            v13 = (unsigned int *)TransformPoint(v18, &v17, v21);
            v11 = (__m128)*v13;
            v12 = (__m128)v13[1];
            v16 = __PAIR64__(v12.m128_u32[0], v11.m128_u32[0]);
            *((_DWORD *)a5 + 2 * v10) = v11.m128_i32[0];
            *((_DWORD *)a5 + 2 * v10 + 1) = v12.m128_i32[0];
          }
          if ( a2 )
          {
            v17 = _mm_unpacklo_ps(v11, v12).m128_u64[0];
            v14 = (__int64 *)InverseTransformPoint((__int64)v19, (float *)&v17, v20);
            v16 = *v14;
            *((_QWORD *)a5 + v10) = *v14;
          }
          InputTraceLogging::InputSink::MapPointsByVisualIdentifier(
            (__int64)a1,
            (__int64 *)a2,
            (__int64)v21,
            (__int64)v20,
            *((_QWORD *)a4 + v10),
            v16);
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (_DWORD)v10 != a3 );
      }
    }
  }
  return (unsigned int)Transform;
}
