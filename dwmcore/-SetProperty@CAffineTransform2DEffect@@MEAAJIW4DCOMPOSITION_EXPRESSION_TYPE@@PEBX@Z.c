__int64 __fastcall CAffineTransform2DEffect::SetProperty(__int64 *a1, int a2, int a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  float *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // ebx

  if ( a3 != 18 )
    goto LABEL_18;
  v4 = *a4;
  v5 = a2 - 4;
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
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 1 )
            {
LABEL_18:
              v13 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0x46u, 0LL);
              return v13;
            }
            v10 = 204LL;
          }
          else
          {
            v10 = 200LL;
          }
        }
        else
        {
          v10 = 196LL;
        }
      }
      else
      {
        v10 = 192LL;
      }
    }
    else
    {
      v10 = 188LL;
    }
  }
  else
  {
    v10 = 184LL;
  }
  v11 = (float *)((char *)a1 + v10);
  if ( !(__int64 *)((char *)a1 + v10) )
    goto LABEL_18;
  if ( *v11 != v4 )
  {
    v12 = *a1;
    *v11 = v4;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v12 + 72))(a1, 0LL, 0LL);
  }
  return v11 == 0LL ? 0x80070057 : 0;
}
