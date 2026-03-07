__int64 __fastcall ACPIDeviceInternalSynchronizeRequest(
        _QWORD *a1,
        void (__fastcall *a2)(__int64, __int64, __int64),
        __int64 a3)
{
  char v4; // r11
  const char *v5; // rcx
  const char *v7; // r10
  __int64 v9; // rax
  __int64 result; // rax

  v4 = 0;
  v5 = (const char *)&unk_1C00622D0;
  v7 = (const char *)&unk_1C00622D0;
  if ( a1 )
  {
    v9 = a1[1];
    v4 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)a1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v7 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x19u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      v4,
      v5,
      v7);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, 0, 0LL, a2, a3, 0, 4, 0x100u);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
