__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  char v2; // bl
  _QWORD *v3; // rdi
  int v5; // esi
  int i; // eax
  int v7; // r14d
  const char *v8; // rax
  const char *v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+80h] [rbp-18h]
  int v16; // [rsp+84h] [rbp-14h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  v5 = 0;
  v13 = 0LL;
  v16 = 0;
  if ( (v1 & 4) != 0 )
  {
    v12[1] = 0LL;
    v12[0] = v3 + 100;
    v14 = 816LL;
    v12[2] = &AcpiDeviceTreeLock;
    v15 = 2;
    for ( i = ACPIExtListStartEnum(v12); ; i = ACPIExtListEnumNext(v12) )
    {
      v7 = i;
      if ( !(unsigned __int8)ACPIExtListTestElement(v12, v5 >= 0) )
        break;
      v5 = ACPIBuildRunMethodRequest(v7, 0, 0, *(_DWORD *)(a1 + 80), *(_DWORD *)(a1 + 84), 0);
    }
  }
  v8 = (const char *)&unk_1C00622D0;
  v9 = (const char *)&unk_1C00622D0;
  if ( v3 )
  {
    v10 = v3[1];
    v2 = (char)v3;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)v3[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = (const char *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x41u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v5,
      v2,
      v8,
      v9);
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
