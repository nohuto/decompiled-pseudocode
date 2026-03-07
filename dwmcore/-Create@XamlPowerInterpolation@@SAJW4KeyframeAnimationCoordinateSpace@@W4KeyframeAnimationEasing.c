__int64 __fastcall XamlPowerInterpolation::Create(int a1, unsigned int a2, float a3, float **a4)
{
  float v4; // xmm6_4
  char *v8; // rax
  float *v9; // rbx
  __int64 result; // rax

  v4 = a3;
  if ( !_finite(a3) )
    v4 = 0.0;
  v8 = (char *)KeyframeInterpolation::operator new(0x28uLL);
  v9 = (float *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_QWORD *)(v8 + 28) = 0LL;
    *((_DWORD *)v8 + 9) = 0;
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &XamlPowerInterpolation::`vftable';
    ((void (__fastcall *)(char *))XamlPowerInterpolation::`vftable')(v8);
  }
  else
  {
    v9 = 0LL;
  }
  v9[8] = v4;
  if ( a2 > 2 )
    a2 = 0;
  *((_DWORD *)v9 + 4) = a1;
  result = 0LL;
  *((_DWORD *)v9 + 6) = a2;
  *a4 = v9;
  return result;
}
