__int64 __fastcall CParticleEmitterVisual::ParticleCollection::EraseIndexList<float,std::allocator<float>>(
        __int64 a1,
        __int64 *a2,
        int **a3)
{
  int *v3; // r11
  int *v4; // r9
  _DWORD *v5; // r10
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // xmm0_4

  v3 = a3[1];
  v4 = *a3;
  if ( *a3 != v3 )
  {
    v5 = (_DWORD *)a2[1];
    do
    {
      v6 = *v4;
      --v5;
      v7 = *a2;
      ++v4;
      a2[1] = (__int64)v5;
      result = (unsigned int)*v5;
      v9 = *(_DWORD *)(v7 + 4 * v6);
      *(_DWORD *)(v7 + 4 * v6) = result;
      *v5 = v9;
    }
    while ( v4 != v3 );
  }
  return result;
}
