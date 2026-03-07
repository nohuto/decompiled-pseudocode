__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // al
  const char *v4; // rcx
  const char *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v3 = 0;
  v4 = (const char *)&unk_1C00622D0;
  v5 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v6 = v1[1];
    v3 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = (const char *)v1[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x52u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v3,
      v4,
      v5);
  *(_DWORD *)(a1 + 212) = 8;
  v7 = *(_QWORD *)(a1 + 232);
  if ( (v7 & 9) == 9 && ((v7 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    *(_OWORD *)(a1 + 216) = 0LL;
    *(_OWORD *)(a1 + 232) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), 2);
  }
  return 0LL;
}
