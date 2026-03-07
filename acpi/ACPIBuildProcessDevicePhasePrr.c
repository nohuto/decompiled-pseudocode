__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  ULONG_PTR v3; // rdx
  unsigned int v4; // ebp
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  const char *v9; // rax
  const char *v10; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 80;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v1[56] )
  {
    if ( v3 )
    {
      dword_1C006F938 = 0;
      pszDest = 0;
LABEL_8:
      FreeDataBuffs(v2, 1LL);
    }
  }
  else if ( v3 )
  {
    if ( *(_WORD *)(a1 + 82) == 4 )
    {
      v6 = ACPIBuildDeviceResetPowerNode(v1, v3, a1 + 80);
      dword_1C006F938 = 0;
      v4 = v6;
      pszDest = 0;
      goto LABEL_8;
    }
    ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
  }
  v7 = AMLIGetNamedChild(v1[95], 1414746719LL);
  v8 = v1[1];
  v1[62] = v7;
  v9 = (const char *)&unk_1C00622D0;
  v10 = (const char *)&unk_1C00622D0;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = (const char *)v1[76];
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = (const char *)v1[77];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Fu,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v4,
      (char)v1,
      v9,
      v10);
  ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
