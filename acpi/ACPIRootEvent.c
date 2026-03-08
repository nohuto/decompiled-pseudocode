/*
 * XREFs of ACPIRootEvent @ 0x1C003D000
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C002E560 (ACPIInternalEvaluateOST.c)
 *     ACPINotifyOsShutdown @ 0x1C003CCA8 (ACPINotifyOsShutdown.c)
 */

_UNKNOWN **__fastcall ACPIRootEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  char v4; // r8
  const char *v5; // rcx
  _QWORD *v6; // rbx
  const char *v7; // rdx
  __int64 v8; // rax
  _UNKNOWN **result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (const char *)&unk_1C00622D0;
  v6 = (_QWORD *)DeviceExtension;
  v7 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v6[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v6[77];
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_dqss(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            4u,
                            6u,
                            0x21u,
                            (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
                            a2,
                            v4,
                            v5,
                            v7);
  if ( a2 == 129 )
  {
    if ( AcpiNotifyOsShutdownEnabled && AcpiShutdownNotification )
      return (_UNKNOWN **)ACPINotifyOsShutdown(v6);
    else
      return (_UNKNOWN **)ACPIInternalEvaluateOST(v6, 129, 131);
  }
  return result;
}
