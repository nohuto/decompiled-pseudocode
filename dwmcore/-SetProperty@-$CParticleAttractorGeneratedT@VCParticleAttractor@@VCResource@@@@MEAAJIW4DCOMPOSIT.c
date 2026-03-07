__int64 __fastcall CParticleAttractorGeneratedT<CParticleAttractor,CResource>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v4 = a2 - 1;
    if ( !v4 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 76) )
      {
        v6 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 76) = *a4;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v6 + 72))(a1, 0LL, 0LL);
      }
      return 0;
    }
    if ( v4 != 1 )
    {
      v8 = 2096;
      goto LABEL_11;
    }
    if ( *(float *)a4 == *(float *)(a1 + 80) )
      return 0;
    *(_DWORD *)(a1 + 80) = *a4;
LABEL_7:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    return 0;
  }
  if ( a3 == 52 )
  {
    if ( a2 )
    {
      v8 = 2106;
      goto LABEL_11;
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 72) = a4[2];
    goto LABEL_7;
  }
  v8 = 2111;
LABEL_11:
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v8, 0LL);
  return v5;
}
