__int64 __fastcall XamlElasticInterpolation::Create(int a1, unsigned int a2, int a3, float a4, float **a5)
{
  float v5; // xmm6_4
  int v6; // esi
  char *v9; // rax
  float *v10; // rbx

  v5 = a4;
  v6 = 0;
  if ( a3 >= 0 )
    v6 = a3;
  if ( !_finite(a4) )
    v5 = 0.0;
  v9 = (char *)KeyframeInterpolation::operator new(0x28uLL);
  v10 = (float *)v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 12) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *(_QWORD *)(v9 + 28) = 0LL;
    *((_DWORD *)v9 + 9) = 0;
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &XamlElasticInterpolation::`vftable';
    ((void (__fastcall *)(char *))XamlElasticInterpolation::`vftable')(v9);
  }
  else
  {
    v10 = 0LL;
  }
  v10[9] = v5;
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v10 + 6) = a2;
  *((_DWORD *)v10 + 4) = a1;
  *((_DWORD *)v10 + 8) = v6;
  *a5 = v10;
  return 0LL;
}
