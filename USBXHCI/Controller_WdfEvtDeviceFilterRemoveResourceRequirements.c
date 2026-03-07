__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  char v3; // di
  int v4; // edx
  __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rcx
  unsigned int v10[6]; // [rsp+40h] [rbp-18h] BYREF
  char v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a1;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00633D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(v5 + 72),
      v4,
      4,
      212,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      v3,
      a2);
  }
  v6 = *(_QWORD *)(v5 + 128);
  v7 = 0;
  v11 = 0;
  v10[0] = 0;
  v12 = 0;
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 336LL) & 0x200LL) != 0 )
  {
    Interrupter_SetSecondaryInterrupterCount(v6, 0);
    return (unsigned int)Interrupter_FilterAllMSIResources(v9, a2);
  }
  else
  {
    Interrupter_IoResList_GetMessageCountAndType(a2, v10, &v12, &v11);
    if ( v11 )
      Interrupter_DetermineSecondaryInterrupterCount(v6, v12);
    else
      Interrupter_SetSecondaryInterrupterCount(v6, 0);
    Interrupter_FilterMessageDescriptors(v6, a2, v10[0], (unsigned int)(*(_DWORD *)(v6 + 20) + 1));
  }
  return v7;
}
