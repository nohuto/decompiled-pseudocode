__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rbp
  int v3; // r12d
  int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rdx
  const char *v8; // r8
  const char *v9; // rcx
  char v10; // r15
  __int64 v11; // rax
  KIRQL v12; // al
  _QWORD *i; // rdx
  char v14; // r8
  const char *v15; // rcx
  __int64 v16; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v8 = (const char *)&unk_1C00622D0;
  v9 = (const char *)&unk_1C00622D0;
  v10 = 1;
  if ( v1 )
  {
    v11 = v1[1];
    v6 = (__int64)v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v1[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v9 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      0xAu,
      0x4Bu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      (v3 != 1) + 4,
      v6,
      v8,
      v9);
  if ( v3 != 1 )
  {
    *(_DWORD *)(a1 + 212) = 5;
LABEL_27:
    ACPIDeviceCompleteGenericPhase(v5, v4, 0LL, a1);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  for ( i = (_QWORD *)v1[52]; i; i = (_QWORD *)*i )
  {
    if ( (*(_BYTE *)(i[1] + 16LL) & 0x10) == 0 )
    {
      v10 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v10 )
  {
    v4 = -1073741823;
    goto LABEL_27;
  }
  v5 = v1[58];
  if ( v5 )
  {
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v4 = AMLIAsyncEvalObject(v5, 0, 0, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1);
  }
  v14 = 0;
  v15 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v16 = v1[1];
    v14 = (char)v1;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[76];
      if ( (v16 & 0x400000000000LL) != 0 )
        v15 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Cu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v4,
      v14,
      v2,
      v15);
  result = 259LL;
  if ( v4 != 259 )
  {
    v4 = 0;
    goto LABEL_27;
  }
  return result;
}
