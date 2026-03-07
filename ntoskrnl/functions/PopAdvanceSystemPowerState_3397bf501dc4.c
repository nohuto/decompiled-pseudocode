void __fastcall PopAdvanceSystemPowerState(int *a1, int a2, int a3, int a4)
{
  int v4; // edi
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  int v11; // eax

  if ( !a1 )
    return;
  v4 = *a1;
  if ( *a1 < 2 )
    return;
  if ( v4 >= 6 )
  {
LABEL_17:
    *a1 = 1;
    return;
  }
  if ( !a2 )
  {
    v9 = v4 - 1;
    v10 = 0;
    goto LABEL_13;
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      if ( v4 == 5 )
      {
        *a1 = 1;
        goto LABEL_14;
      }
      v9 = v4 + 1;
      v10 = 2;
LABEL_13:
      *a1 = v9;
      PopVerifySystemPowerState(a1, v10);
    }
  }
  else
  {
    *a1 = v4 - 1;
    PopVerifySystemPowerState(a1, 1u);
    if ( *a1 == v4 )
      *a1 = 1;
  }
LABEL_14:
  v11 = *a1;
  if ( *a1 != 1 && (v11 < a3 || v11 > a4) )
    goto LABEL_17;
}
