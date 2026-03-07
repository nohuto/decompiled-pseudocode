__int64 __fastcall Mesh::CalcEdgeDirections(__int64 a1, unsigned __int64 a2, __int64 *a3, float a4)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  float v10; // xmm9_4
  float v11; // xmm6_4
  float v12; // xmm0_4
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx

  if ( a2 )
  {
    v7 = 0;
    do
    {
      v8 = (v7 + 1) % a2;
      v9 = v7 + 1;
      v10 = *(float *)(a1 + 8 * v8) - *(float *)(a1 + 8LL * v7);
      v11 = *(float *)(a1 + 8 * v8 + 4) - *(float *)(a1 + 8LL * v7 + 4);
      if ( a4 <= COERCE_FLOAT(LODWORD(v10) & _xmm) || a4 <= COERCE_FLOAT(LODWORD(v11) & _xmm) )
      {
        v12 = sqrtf_0((float)(v10 * v10) + (float)(v11 * v11));
        result = *a3;
        v14 = (int)(*((_DWORD *)a3 + 2) * v7);
        *(float *)(v14 + result) = (float)(1.0 / v12) * v10;
        *(float *)(v14 + result + 4) = (float)(1.0 / v12) * v11;
      }
      else
      {
        result = *a3;
        v15 = (int)(*((_DWORD *)a3 + 2) * v7);
        *(_DWORD *)(v15 + result) = 0;
        *(_DWORD *)(v15 + result + 4) = 0;
      }
      ++v7;
    }
    while ( v9 < a2 );
  }
  return result;
}
