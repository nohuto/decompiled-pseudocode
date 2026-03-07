__int64 __fastcall CScaleTransform3DGeneratedT<CScaleTransform3D,CTransform3D>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    if ( !a2 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 160) )
      {
        v9 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 160) = *a4;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v9 + 72))(a1, 0LL, 0LL);
      }
      return 0;
    }
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 != 1 )
            {
              v11 = 7552;
              goto LABEL_10;
            }
            if ( *(float *)a4 == *(float *)(a1 + 180) )
              return 0;
            *(_DWORD *)(a1 + 180) = *a4;
          }
          else
          {
            if ( *(float *)a4 == *(float *)(a1 + 176) )
              return 0;
            *(_DWORD *)(a1 + 176) = *a4;
          }
        }
        else
        {
          if ( *(float *)a4 == *(float *)(a1 + 172) )
            return 0;
          *(_DWORD *)(a1 + 172) = *a4;
        }
      }
      else
      {
        if ( *(float *)a4 == *(float *)(a1 + 168) )
          return 0;
        *(_DWORD *)(a1 + 168) = *a4;
      }
    }
    else
    {
      if ( *(float *)a4 == *(float *)(a1 + 164) )
        return 0;
      *(_DWORD *)(a1 + 164) = *a4;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, 0LL, 0LL);
    return 0;
  }
  v11 = 7557;
LABEL_10:
  v8 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, v11, 0LL);
  return v8;
}
