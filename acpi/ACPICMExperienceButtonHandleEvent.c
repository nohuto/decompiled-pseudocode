__int64 __fastcall ACPICMExperienceButtonHandleEvent(_QWORD *a1, int a2)
{
  char v3; // r11
  __int64 v4; // rdx
  int v5; // eax
  __int64 result; // rax
  const char *v7; // r8
  const char *v8; // r10
  __int64 v9; // r9

  v3 = a2;
  v4 = 2LL;
  v5 = a2 - 2;
  if ( !v5 )
    return ACPISetDeviceWorker(a1, v4);
  if ( v5 == 126 )
  {
    v4 = 1LL;
    return ACPISetDeviceWorker(a1, v4);
  }
  result = 0LL;
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( a1 )
  {
    v9 = a1[1];
    result = (__int64)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)a1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             0x11u,
             0x19u,
             (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
             v3,
             result,
             v7,
             v8);
  return result;
}
