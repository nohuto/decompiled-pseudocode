__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckBridge(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v6; // rdx
  const char *v7; // rax
  const char *v8; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0;
  if ( (v3 & 1) != 0 && (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
LABEL_11:
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
    return v4;
  }
  *(_DWORD *)(a1 + 32) = 7;
  if ( (v3 & 0x40) == 0 )
    goto LABEL_11;
  *(_DWORD *)(a1 + 128) = 0;
  v5 = IsPciBusAsync(*(_QWORD *)(v1 + 760), ACPIBuildCompleteMustSucceed, a1);
  v6 = *(_QWORD *)(v1 + 8);
  v4 = v5;
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v7 = *(const char **)(v1 + 608);
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x3Au,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v4,
      v1,
      v7,
      v8);
  result = 259LL;
  if ( v4 != 259 )
    goto LABEL_11;
  return result;
}
