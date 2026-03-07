__int64 __fastcall ACPIDevicePowerProcessPhase0SystemSubPhase1(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  const char *v4; // rcx
  const char *v5; // r8

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v3 = v1[1];
    v4 = (const char *)&unk_1C00622D0;
    v5 = (const char *)&unk_1C00622D0;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x36u,
        (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
        a1,
        (char)v1,
        v4,
        v5);
  }
  *(_DWORD *)(a1 + 212) = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    AMLIResumeInterpreter();
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
