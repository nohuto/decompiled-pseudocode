__int64 __fastcall HUBACPI_ExecuteDSM(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  unsigned int v6; // edi
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+28h] [rbp-79h]
  _QWORD v17[3]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v18[3]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v19; // [rsp+98h] [rbp-9h] BYREF
  int v20; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v21; // [rsp+A4h] [rbp+3h]

  v4 = *(_QWORD *)(a1 + 16);
  HIDWORD(v18[0]) = 0;
  HIDWORD(v17[0]) = 0;
  v6 = 0;
  v19 = 0LL;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, 60LL, 1882409045LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *((_DWORD *)Pool2 + 2) = 60;
    *(_DWORD *)Pool2 = 1130980673;
    *((_DWORD *)Pool2 + 1) = 1297302623;
    *((_DWORD *)Pool2 + 3) = 4;
    *((_DWORD *)Pool2 + 4) = 1048578;
    memcpy_s(Pool2 + 10, 0x10uLL, &GUID_DSM_SDM845_HS_RH_PORT_RESET_WORKAROUND, 0x10uLL);
    v10 = v9[9];
    if ( (unsigned __int16)v10 < 4u )
      v10 = 4LL;
    *(_DWORD *)((char *)v9 + v10 + 20) = 0x40000;
    *(_DWORD *)((char *)v9 + v10 + 24) = 1;
    *(_DWORD *)((char *)v9 + v10 + 28) = 0x40000;
    *(_DWORD *)((char *)v9 + v10 + 32) = a4;
    *(_DWORD *)((char *)v9 + v10 + 36) = 2;
    memcpy_s((char *)v9 + v10 + 40, 0LL, 0LL, 0LL);
    v17[1] = &v20;
    v18[0] = 1LL;
    v18[2] = 60LL;
    v18[1] = v9;
    v21 = 0LL;
    v20 = 1114596673;
    v17[0] = 1LL;
    v17[2] = 20LL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v4);
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v11,
           0LL,
           3325956LL,
           v18,
           v17,
           0LL,
           &v19) >= 0 )
    {
      if ( v20 == 1114596673 )
      {
        if ( DWORD1(v21) && WORD5(v21) )
        {
          v12 = (unsigned int)WORD5(v21) - 1;
          if ( (unsigned __int64)WORD5(v21) - 1 > 3 )
            v12 = 3LL;
          v6 = HIDWORD(v21) & ((256 << (8 * v12)) - 1);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q_guid_LLLLL(*(_QWORD *)(a1 + 2520), v12, WORD5(v21), DWORD1(v21), v16);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q_guid_L(*(_QWORD *)(a1 + 2520), v12, v13, v14, v16);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q_guid_Ld(*(_QWORD *)(a1 + 2520), v12, v13, v14, v16);
    }
    ExFreePoolWithTag(v9, 0x70334855u);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid_d(*(_QWORD *)(a1 + 2520));
  }
  return v6;
}
