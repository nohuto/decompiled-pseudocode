__int64 __fastcall CManipulationTransform::ProcessSetComponents(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *a3)
{
  int v3; // xmm1_4
  int v5; // xmm0_4
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // eax
  __int64 v13; // rcx
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // eax
  __int64 v17; // rcx
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // eax
  __int64 v21; // rcx
  int v23; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+34h] [rbp-1Ch]
  int v25; // [rsp+38h] [rbp-18h]

  v3 = *((_DWORD *)a3 + 3);
  v23 = *((_DWORD *)a3 + 2);
  v5 = *((_DWORD *)a3 + 4);
  v24 = v3;
  v25 = v5;
  v7 = CManipulationTransform::SetProperty(this, 0LL, 52LL, &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x58u, 0LL);
  }
  else
  {
    v10 = *((_DWORD *)a3 + 6);
    v23 = *((_DWORD *)a3 + 5);
    v11 = *((_DWORD *)a3 + 7);
    v24 = v10;
    v25 = v11;
    v12 = CManipulationTransform::SetProperty(this, 1LL, 52LL, &v23);
    v9 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x5Bu, 0LL);
    }
    else
    {
      v14 = *((_DWORD *)a3 + 9);
      v23 = *((_DWORD *)a3 + 8);
      v15 = *((_DWORD *)a3 + 10);
      v24 = v14;
      v25 = v15;
      v16 = CManipulationTransform::SetProperty(this, 2LL, 52LL, &v23);
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x5Eu, 0LL);
      }
      else
      {
        v18 = *((_DWORD *)a3 + 12);
        v23 = *((_DWORD *)a3 + 11);
        v19 = *((_DWORD *)a3 + 13);
        v24 = v18;
        v25 = v19;
        v20 = CManipulationTransform::SetProperty(this, 3LL, 52LL, &v23);
        v9 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x61u, 0LL);
        }
        else
        {
          if ( *((_BYTE *)this + 272) )
          {
            CManipulationTransform::CalculateMatrixFromDelta(
              (CManipulationTransform *)((char *)this + 160),
              (CManipulationTransform *)((char *)this + 184),
              (CManipulationTransform *)((char *)this + 196),
              (CManipulationTransform *)((char *)this + 208));
            *((_BYTE *)this + 272) = 0;
          }
          return 0;
        }
      }
    }
  }
  return v9;
}
