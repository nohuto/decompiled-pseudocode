__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      if ( a2 == 6 )
      {
        if ( *(float *)a4 != *(float *)(a1 + 112) )
        {
          *(_DWORD *)(a1 + 112) = *a4;
          CScenePbrMaterial::OnNormalScaleChanged((CScenePbrMaterial *)a1);
        }
      }
      else
      {
        if ( a2 != 8 )
        {
          v6 = 5518;
          goto LABEL_11;
        }
        if ( *(float *)a4 != *(float *)(a1 + 116) )
        {
          *(_DWORD *)(a1 + 116) = *a4;
          CScenePbrMaterial::OnOcclusionStrengthChanged((CScenePbrMaterial *)a1);
        }
      }
    }
    else if ( *(float *)a4 != *(float *)(a1 + 88) )
    {
      *(_DWORD *)(a1 + 88) = *a4;
      CScenePbrMaterial::OnAlphaCutoffChanged((CScenePbrMaterial *)a1);
    }
    return 0;
  }
  if ( a3 == 52 )
  {
    if ( a2 != 3 )
    {
      v6 = 5528;
      goto LABEL_11;
    }
    *(_QWORD *)(a1 + 96) = *(_QWORD *)a4;
    *(_DWORD *)(a1 + 104) = a4[2];
    CScenePbrMaterial::OnEmissiveFactorChanged((CScenePbrMaterial *)a1);
    return 0;
  }
  v6 = 5533;
LABEL_11:
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v6, 0LL);
  return v4;
}
