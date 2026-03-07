__int64 __fastcall CmQueryFeatureConfigurationSections(
        __int128 *a1,
        int a2,
        _OWORD *a3,
        int a4,
        _DWORD *a5,
        KPROCESSOR_MODE PreviousMode)
{
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // ebx
  HANDLE *v13; // rdi
  __int64 v14; // rsi
  __int128 v16; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-90h]
  _OWORD v18[5]; // [rsp+50h] [rbp-88h] BYREF

  memset(v18, 0, sizeof(v18));
  v16 = 0LL;
  v17 = 0LL;
  if ( a2 == 24 )
  {
    v16 = *a1;
    v17 = *((_QWORD *)a1 + 2);
    if ( a4 == 80 )
    {
      LOBYTE(v11) = PreviousMode;
      v12 = CmFcManagerQueryFeatureConfigurationSectionInformation(v10, &v16, v18, v11);
      if ( v12 >= 0 )
      {
        *a3 = v18[0];
        a3[1] = v18[1];
        a3[2] = v18[2];
        a3[3] = v18[3];
        a3[4] = v18[4];
        *a5 = 80;
        memset(v18, 0, sizeof(v18));
        v12 = 0;
      }
    }
    else
    {
      v12 = -1073741820;
      *a5 = 80;
    }
  }
  else
  {
    v12 = -1073741820;
  }
  v13 = (HANDLE *)&v18[1];
  v14 = 3LL;
  do
  {
    if ( *v13 )
      ObCloseHandle(*v13, PreviousMode);
    v13 += 3;
    --v14;
  }
  while ( v14 );
  return (unsigned int)v12;
}
