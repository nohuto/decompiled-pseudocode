__int64 __fastcall CKeyframeAnimation::DetermineCoordinateSpace(int a1, int a2, int *a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // edx
  int v12; // edx
  unsigned int v13; // ebx
  int v15; // edx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v3 = a1 - 11;
  if ( !v3 )
    goto LABEL_12;
  v4 = 6;
  v5 = v3 - 6;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 17;
      if ( v7 )
      {
        v8 = v7 - 17;
        if ( v8 )
        {
          v9 = v8 - 17;
          if ( v9 )
          {
            v10 = (unsigned int)(v9 - 1);
            if ( (_DWORD)v10 )
            {
              if ( (_DWORD)v10 == 1 )
              {
                v4 = 1;
                goto LABEL_13;
              }
              v16 = 1434;
            }
            else
            {
              if ( !a2 || (v11 = a2 - 1) == 0 )
              {
                v4 = 2;
                goto LABEL_13;
              }
              v12 = v11 - 1;
              if ( !v12 )
              {
                v4 = 4;
                goto LABEL_13;
              }
              v15 = v12 - 1;
              if ( !v15 )
              {
                v4 = 5;
                goto LABEL_13;
              }
              if ( v15 == 1 )
              {
                v4 = 3;
                goto LABEL_13;
              }
              v16 = 1424;
            }
            v13 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, v16, 0LL);
            return v13;
          }
        }
      }
    }
LABEL_12:
    v4 = 0;
  }
LABEL_13:
  *a3 = v4;
  return 0;
}
