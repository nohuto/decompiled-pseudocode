__int64 __fastcall ACPIDeviceInternalDeviceRequest(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int64),
        __int64 a4,
        unsigned int a5)
{
  char v6; // r11
  const char *v7; // rcx
  const char *v9; // r10
  int v11; // esi
  __int64 v12; // rax
  __int64 result; // rax

  v6 = 0;
  v7 = (const char *)&unk_1C00622D0;
  v9 = (const char *)&unk_1C00622D0;
  v11 = a2;
  if ( a1 )
  {
    v12 = a1[1];
    v6 = (char)a1;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)a1[76];
      if ( (v12 & 0x400000000000LL) != 0 )
        v9 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0xAu,
      0x18u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a4,
      a2 - 1,
      v6,
      v7,
      v9);
  result = ACPIDeviceInitializePowerRequest((__int64)a1, v11, 0LL, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
