__int64 __fastcall HUBPDO_EvtDeviceProcessQueryInterfaceRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // r8
  unsigned int v7; // edi
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rax

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v5 = (_QWORD *)v4;
  v6 = *(__int64 **)(v4 + 24);
  if ( (v6[204] & 2) != 0 )
  {
    *(_DWORD *)a3 = 66388104;
    *(_QWORD *)(a3 + 16) = HUBFDO_GetPortStatusForDebuggingComplete;
    *(_QWORD *)(a3 + 8) = v4;
    *(_QWORD *)(a3 + 24) = HUBFDO_GetPortStatusForDebuggingComplete;
    v7 = 0;
    v8 = *(_BYTE *)(*v6 + 240) + 1;
    *(_BYTE *)(a3 + 32) = v8;
    *(_BYTE *)(a3 + 52) = BYTE1(*((_DWORD *)v6 + 408)) & 1;
    v9 = *v6;
    *(_OWORD *)(a3 + 96) = *(_OWORD *)(*v6 + 304);
    *(_OWORD *)(a3 + 112) = *(_OWORD *)(v9 + 320);
    if ( v8 == 1 )
    {
      *(_WORD *)(a3 + 112) = *(_WORD *)(v6[1] + 200);
    }
    else if ( v8 > 1u )
    {
      *(_WORD *)(a3 + 2LL * v8 + 110) = *(_WORD *)(v6[1] + 200);
    }
    *(_DWORD *)(a3 + 48) = *((_DWORD *)v6 + 43);
    *(_BYTE *)(a3 + 53) = (v6[204] & 0x1000) != 0;
    *(_QWORD *)(a3 + 40) = v6[3];
    *(_QWORD *)(a3 + 64) = HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume;
    *(_QWORD *)(a3 + 56) = HUBPDO_ParentInterfaceWasHubResetOnResume;
    *(_QWORD *)(a3 + 72) = v6[1] + 1368;
    *(_QWORD *)(a3 + 88) = HUBPDO_GetHubSymbolicLinkName;
    v10 = v6[1];
    if ( (*(_DWORD *)(v10 + 204) & 0x10) != 0 )
    {
      *(_WORD *)(a3 + 80) = *(_WORD *)(v10 + 212);
      *(_WORD *)(a3 + 82) = *(_WORD *)(v6[1] + 214);
      v11 = *(_BYTE *)(a3 + 52);
      if ( (*(_DWORD *)(v5[2] + 40LL) & 0x2000000) != 0 )
        v11 = 0;
      *(_BYTE *)(a3 + 52) = v11;
    }
    v12 = *(_QWORD *)(a3 + 128);
    v5[8] = v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(v6[1] + 1432),
        4u,
        5u,
        0x67u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v5[3],
        v12);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v6[1] + 1432),
        2u,
        5u,
        0x66u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v4);
    return (unsigned int)-1073741823;
  }
  return v7;
}
