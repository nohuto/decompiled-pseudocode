__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase1(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r14
  char v4; // bp
  int v5; // eax
  const char *v6; // rcx
  int v7; // esi
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 4;
  *(_OWORD *)(a1 + 216) = 0LL;
  v4 = 0;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v5 = ACPIGet(
         (_DWORD)v1,
         1096045407,
         -1610344446,
         0,
         0,
         (__int64)ACPIDeviceCompleteGenericPhase,
         a1,
         a1 + 232,
         a1 + 240);
  v6 = (const char *)&unk_1C00622D0;
  v7 = v5;
  v8 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v9 = v1[1];
    v4 = (char)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x34u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v7,
      v4,
      v6,
      v8);
  result = 259LL;
  if ( v7 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v7, v2, a1);
    return 0LL;
  }
  return result;
}
