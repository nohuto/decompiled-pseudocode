__int64 __fastcall HUBDSM_SettingInterfaceInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // r15
  _QWORD *v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 i; // rdi
  __int64 v10; // r14
  _OWORD v12[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]

  v1 = *(__int64 **)(a1 + 960);
  memset(v12, 0, sizeof(v12));
  v2 = v1[57];
  v3 = *v1;
  v13 = 0LL;
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v12);
  v4 = 32LL;
  if ( *(_WORD *)(*((_QWORD *)&v12[0] + 1) + 2LL) != 1 )
    v4 = 48LL;
  v5 = (_QWORD *)(v1[6] + 16);
  v6 = *((_QWORD *)&v12[0] + 1) + v4;
  v7 = *v5 - 8LL;
  if ( v5 != (_QWORD *)*v5 )
  {
    while ( *(_BYTE *)(*(_QWORD *)(v7 + 32) + 2LL) != *(_BYTE *)(v6 + 2) )
    {
      v8 = *(_QWORD **)(v7 + 8);
      v7 = (__int64)(v8 - 1);
      if ( v5 == v8 )
        return 4077LL;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 24); i = (unsigned int)(i + 1) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 472))(*(_QWORD *)(v7 + 72 * i + 40));
      if ( !v10 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(v1[1] + 1432),
          2u,
          5u,
          0x2Du,
          (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
      *(_QWORD *)(v7 + 72 * i + 56) = v10;
      *(_QWORD *)(v6 + 24 * i + 32) = v10;
      (*(void (__fastcall **)(_QWORD))(v3 + 464))(*(_QWORD *)(v7 + 72 * i + 40));
    }
  }
  return 4077LL;
}
