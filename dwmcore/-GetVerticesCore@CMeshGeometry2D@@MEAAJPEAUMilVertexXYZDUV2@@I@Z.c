__int64 __fastcall CMeshGeometry2D::GetVerticesCore(
        CMeshGeometry2D *this,
        struct MilVertexXYZDUV2 *a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // r9
  float *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  double v13; // xmm0_8
  double v14; // xmm1_8

  v4 = 0;
  v5 = (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 2);
  if ( v6 >= v5 )
    v6 = (unsigned int)v5;
  if ( a3 >= (unsigned int)v6 )
  {
    if ( (_DWORD)v6 )
    {
      v7 = 0LL;
      v8 = (unsigned int)v6;
      v9 = 0LL;
      v10 = (float *)((char *)a2 + 16);
      do
      {
        v11 = *((_QWORD *)this + 11);
        v12 = *(_QWORD *)(v11 + v9);
        v9 += 12LL;
        *((_QWORD *)v10 - 2) = v12;
        *(v10 - 2) = *(float *)(v11 + v9 - 4);
        *((_DWORD *)v10 - 1) = (unsigned __int8)*((_DWORD *)this + 20) | (((unsigned __int8)*((_DWORD *)this + 20) | (((unsigned __int8)*((_DWORD *)this + 20) | (*((_DWORD *)this + 20) << 8)) << 8)) << 8);
        v13 = *(double *)(*((_QWORD *)this + 14) + v7);
        v7 += 16LL;
        *v10 = v13;
        v10 += 8;
        v14 = *(double *)(*((_QWORD *)this + 14) + v7 - 8);
        *(v10 - 6) = 0.0;
        *(v10 - 5) = 0.0;
        *(v10 - 7) = v14;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0xD2u, 0LL);
  }
  return v4;
}
