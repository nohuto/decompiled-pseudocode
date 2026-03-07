__int64 __fastcall PrepareSamplers(__int64 a1, int a2, unsigned int *a3)
{
  int v4; // r14d
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r15
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = a1;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(
                           *(_BYTE *)(a1 + 84),
                           (struct ID3D11Module **)&v17);
  v8 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, FragmentsModuleNoRef, 0x334u, 0LL);
    return v8;
  }
  v9 = 0;
  if ( *a3 )
  {
    v10 = v17;
    do
    {
      if ( *(_BYTE *)gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9)
        || *(_BYTE *)(gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9) + 2) )
      {
        v11 = gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9);
        v12 = PopulateSamplerArguments(v4, a2, v9, v11, v10);
        v8 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x33Bu, 0LL);
          return v8;
        }
        if ( *(_BYTE *)(gsl::span<SamplerPresenceEntry,-1>::operator[](a3, v9) + 1) )
        {
          v14 = PerformSample(v4, a2, v9, v9 | 0x200, v10);
          v8 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x345u, 0LL);
            return v8;
          }
        }
      }
      ++v9;
    }
    while ( v9 < *a3 );
  }
  return v8;
}
