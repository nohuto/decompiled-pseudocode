__int64 __fastcall Controller_RetrieveAcpiData(__int64 a1, int a2, char *a3)
{
  __int64 v5; // r15
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _UNKNOWN **v8; // rdx
  int v9; // ebx
  __int64 Pool2; // rax
  unsigned __int16 *v11; // rdi
  _UNKNOWN **v12; // rdx
  int v13; // eax
  _UNKNOWN **v14; // rdx
  int v16; // [rsp+50h] [rbp-9h] BYREF
  int v17; // [rsp+54h] [rbp-5h]
  _OWORD *v18; // [rsp+58h] [rbp-1h]
  int v19; // [rsp+60h] [rbp+7h]
  int v20; // [rsp+64h] [rbp+Bh]
  _OWORD v21[2]; // [rsp+68h] [rbp+Fh] BYREF

  v17 = 0;
  memset(v21, 0, sizeof(v21));
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
  v17 = 0;
  v20 = 0;
  v18 = v21;
  v16 = 1;
  v19 = 32;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, int *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
         WdfDriverGlobals,
         v5,
         0LL,
         3325992LL,
         0LL,
         &v16,
         0LL,
         0LL);
  v7 = v6;
  if ( v6 == -2147483643 )
  {
    v9 = WORD2(v21[0]);
    Pool2 = ExAllocatePool2(64LL, WORD2(v21[0]), 1229146200LL);
    v11 = (unsigned __int16 *)Pool2;
    if ( Pool2 )
    {
      v17 = 0;
      v20 = 0;
      v16 = 1;
      v18 = (_OWORD *)Pool2;
      v19 = v9;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, int *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
              WdfDriverGlobals,
              v5,
              0LL,
              3325992LL,
              0LL,
              &v16,
              0LL,
              0LL);
      v7 = v13;
      if ( v13 >= 0 )
      {
        Controller_PopulateAcpiDeviceInformation(v11, a3);
      }
      else
      {
        v14 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(a2, (_DWORD)v14, 4, 144, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v13);
        }
      }
      if ( v11 != (unsigned __int16 *)v21 )
        ExFreePoolWithTag(v11, 0x49434858u);
    }
    else
    {
      v12 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_D(a2, (_DWORD)v12, 4, 143, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v9);
      }
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v8 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(a2, (_DWORD)v8, 4, 142, (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids, v6);
    }
  }
  return v7;
}
