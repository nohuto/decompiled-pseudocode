__int64 __fastcall ACPIDeviceIrpWaitWakeRequest(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  const char *v7; // rcx
  const char *v8; // r8
  __int64 v9; // rax
  int v10; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0LL;
  v5 = DeviceExtension;
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v4 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v4 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( (unsigned int)v6 < 7 )
      v10 = AcpiSystemStateTranslation[v6];
    else
      LOBYTE(v10) = -1;
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      0x11u,
      0x22u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v10,
      v4,
      v7,
      v8);
  }
  return ACPIDeviceInitializePowerRequest(
           v5,
           v6,
           0LL,
           (void (__fastcall *)(__int64, __int64, __int64))ACPIDeviceIrpCompleteRequest,
           a2,
           0,
           2,
           2u);
}
