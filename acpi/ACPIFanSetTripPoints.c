__int64 __fastcall ACPIFanSetTripPoints(_QWORD *a1, int a2, int a3)
{
  __int64 Pool2; // rax
  void *v7; // rdi
  int v8; // esi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  const char *v11; // rax
  const char *v12; // r8
  __int64 v13; // rdx
  const char *v14; // rax
  const char *v15; // r8
  __int128 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 88LL, 1416651585LL);
  v7 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = 4;
    *(_DWORD *)Pool2 = 2;
    *(_DWORD *)(Pool2 + 24) = a2;
    *(_DWORD *)(Pool2 + 72) = 4;
    *(_DWORD *)(Pool2 + 64) = a3;
    *(_WORD *)(Pool2 + 10) = 1;
    *(_WORD *)(Pool2 + 50) = 1;
    v9 = (_QWORD *)a1[95];
    v17 = FAN_EXTENSIONS_DSM_UUID;
    v8 = ACPIAmliEvaluateDsm(v9, (__int64)&v17, 0, 2u, (_DWORD *)Pool2, &v18);
    ExFreePoolWithTag(v7, 0x54706341u);
    if ( v8 < 0 )
    {
      v13 = a1[1];
      v14 = byte_1C00622D0;
      v15 = byte_1C00622D0;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v14 = (const char *)a1[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v15 = (const char *)a1[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x32u,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          v8,
          (char)a1,
          v14,
          v15);
    }
    else
    {
      if ( v18 )
        AMLIFreeDataBuffs(v18);
      v10 = a1[1];
      v11 = byte_1C00622D0;
      v12 = byte_1C00622D0;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v11 = (const char *)a1[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v12 = (const char *)a1[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x10u,
          0x31u,
          (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
          a2,
          a3,
          (char)a1,
          v11,
          v12);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
