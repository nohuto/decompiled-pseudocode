__int64 __fastcall MapPointsByVisualIdentifierInternal(
        struct _LUID *a1,
        struct _LUID *a2,
        int a3,
        struct VisualPoint *a4,
        struct VisualPoint *a5)
{
  int Transform; // ebx
  __int64 v9; // r14
  struct VisualPoint *v10; // rbx
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  unsigned int *v13; // rax
  __int64 *v14; // rax
  int v16; // [rsp+30h] [rbp-A1h]
  __int64 v17; // [rsp+38h] [rbp-99h]
  struct VisualPoint *v18; // [rsp+40h] [rbp-91h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-81h] BYREF
  float v21[16]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v22[64]; // [rsp+A0h] [rbp-31h] BYREF

  Transform = 0;
  v18 = a4;
  v16 = 0;
  memset(v22, 0, sizeof(v22));
  if ( a1 )
  {
    Transform = InputObjectMap::GetTransform(a1, (struct tagINPUT_TRANSFORM *)v22);
    v16 = Transform;
  }
  memset(v21, 0, sizeof(v21));
  if ( Transform >= 0 )
  {
    if ( !a2 || (v16 = InputObjectMap::GetTransform(a2, (struct tagINPUT_TRANSFORM *)v21), Transform = v16, v16 >= 0) )
    {
      v9 = 0LL;
      if ( a3 )
      {
        v10 = v18;
        do
        {
          v11 = (__m128)*((unsigned int *)v10 + 2 * v9);
          v12 = (__m128)*((unsigned int *)v10 + 2 * v9 + 1);
          v17 = __PAIR64__(v12.m128_u32[0], v11.m128_u32[0]);
          *((_DWORD *)a5 + 2 * v9) = v11.m128_i32[0];
          *((_DWORD *)a5 + 2 * v9 + 1) = v12.m128_i32[0];
          if ( a1 )
          {
            v18 = (struct VisualPoint *)_mm_unpacklo_ps(v11, v12).m128_u64[0];
            v13 = (unsigned int *)TransformPoint(v19, &v18, v22);
            v11 = (__m128)*v13;
            v12 = (__m128)v13[1];
            v17 = __PAIR64__(v12.m128_u32[0], v11.m128_u32[0]);
            *((_DWORD *)a5 + 2 * v9) = v11.m128_i32[0];
            *((_DWORD *)a5 + 2 * v9 + 1) = v12.m128_i32[0];
          }
          if ( a2 )
          {
            v18 = (struct VisualPoint *)_mm_unpacklo_ps(v11, v12).m128_u64[0];
            v14 = (__int64 *)InverseTransformPoint((__int64)v20, (float *)&v18, v21);
            v17 = *v14;
            *((_QWORD *)a5 + v9) = *v14;
          }
          InputTraceLogging::InputSink::MapPointsByVisualIdentifier(
            (__int64)a1,
            (__int64)a2,
            (__int64)v22,
            (__int64)v21,
            *((_QWORD *)v10 + v9),
            v17);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (_DWORD)v9 != a3 );
        return (unsigned int)v16;
      }
    }
  }
  return (unsigned int)Transform;
}
