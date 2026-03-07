__int64 __fastcall CMatrixTransform::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  float *v10; // rbx
  unsigned int v11; // ebx

  if ( a3 != 18 )
    goto LABEL_18;
  v4 = *a4;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 != 1 )
            {
LABEL_18:
              v11 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x61u, 0LL);
              return v11;
            }
            v9 = 180LL;
          }
          else
          {
            v9 = 176LL;
          }
        }
        else
        {
          v9 = 172LL;
        }
      }
      else
      {
        v9 = 168LL;
      }
    }
    else
    {
      v9 = 164LL;
    }
  }
  else
  {
    v9 = 160LL;
  }
  v10 = (float *)(a1 + v9);
  if ( !(a1 + v9) )
    goto LABEL_18;
  if ( *v10 != v4 )
  {
    *v10 = v4;
    CResource::NotifyOnChanged(a1, 0, 0LL);
  }
  return v10 == 0LL ? 0x80070057 : 0;
}
