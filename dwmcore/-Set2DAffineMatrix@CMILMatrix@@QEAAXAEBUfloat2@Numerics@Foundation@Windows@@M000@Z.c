void __fastcall CMILMatrix::Set2DAffineMatrix(
        CMILMatrix *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::float2 *a4,
        const struct Windows::Foundation::Numerics::float2 *a5,
        const struct Windows::Foundation::Numerics::float2 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // xmm0_8
  __int128 *v10; // rax
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // [rsp+28h] [rbp-E0h] BYREF
  int v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+34h] [rbp-D4h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh]
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v18; // [rsp+4Ch] [rbp-BCh]
  int v19; // [rsp+5Ch] [rbp-ACh]
  __int128 v20; // [rsp+60h] [rbp-A8h]
  int v21; // [rsp+70h] [rbp-98h]
  int v22; // [rsp+74h] [rbp-94h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  int v24; // [rsp+80h] [rbp-88h]
  int v25; // [rsp+84h] [rbp-84h]
  _OWORD v26[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v27[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v28[64]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v29[80]; // [rsp+148h] [rbp+40h] BYREF

  v16 = 0;
  v14 = 1065353216;
  v15 = *(_QWORD *)a5;
  v13 = *(_QWORD *)a2;
  Windows::Foundation::Numerics::make_float4x4_scale(v27, &v13, &v15, a4);
  v14 = 0;
  v13 = *(_QWORD *)a6;
  Windows::Foundation::Numerics::make_float4x4_rotation_z(v26, v8, &v13);
  v9 = *(_QWORD *)a4;
  v22 = 0;
  v24 = 0;
  v17 = 1065353216;
  v20 = 0LL;
  v19 = 1065353216;
  v18 = 0LL;
  v21 = 1065353216;
  v23 = v9;
  v25 = 1065353216;
  v10 = Windows::Foundation::Numerics::operator*((__int64)v28, v27, v26);
  v11 = Windows::Foundation::Numerics::operator*((__int64)v29, v10, &v17);
  *(_OWORD *)this = *v11;
  *((_OWORD *)this + 1) = v11[1];
  *((_OWORD *)this + 2) = v11[2];
  v12 = v11[3];
  *((_BYTE *)this + 65) &= 0xD4u;
  *((_BYTE *)this + 65) |= 0x14u;
  *((_OWORD *)this + 3) = v12;
  *((_BYTE *)this + 64) = 4;
}
