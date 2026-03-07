__int64 __fastcall HUBDSM_SettingConfigurationInformationInClientRequest(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  unsigned __int16 *v3; // rbp
  _QWORD *v4; // r12
  _QWORD *i; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  int v8; // eax
  int v9; // edi
  _QWORD *v10; // rsi
  __int64 v12; // [rsp+30h] [rbp-78h]
  __int64 *v13; // [rsp+38h] [rbp-70h]
  _QWORD *v14; // [rsp+40h] [rbp-68h]
  _OWORD v15[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v16; // [rsp+68h] [rbp-40h]

  v13 = *(__int64 **)(a1 + 960);
  memset(v15, 0, sizeof(v15));
  v1 = *v13;
  v2 = v13[57];
  v16 = 0LL;
  LOWORD(v15[0]) = 40;
  v12 = v1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v15);
  v3 = (unsigned __int16 *)(*((_QWORD *)&v15[0] + 1) + 40LL);
  v4 = (_QWORD *)(v13[6] + 16);
  v14 = v4;
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v10[1] )
  {
    v10 = i - 1;
    if ( v4 == i )
      break;
    v6 = 0LL;
    if ( *((_DWORD *)v10 + 6) )
    {
      do
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 472))(v10[9 * v6 + 5]);
        if ( !v7 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(v13[1] + 1432),
            2u,
            5u,
            0x2Cu,
            (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
        v8 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 480))(v10[9 * v6 + 5]);
        v10[9 * v6 + 7] = v7;
        v9 = v8;
        *(_QWORD *)&v3[12 * v6 + 16] = v7;
        (*(void (__fastcall **)(_QWORD))(v12 + 464))(v10[9 * v6 + 5]);
        *(_DWORD *)&v3[12 * v6 + 20] = v9;
        v6 = (unsigned int)(v6 + 1);
        v1 = v12;
      }
      while ( (unsigned int)v6 < *((_DWORD *)v10 + 6) );
      v4 = v14;
    }
    v3 = (unsigned __int16 *)((char *)v3 + *v3);
  }
  return 4077LL;
}
