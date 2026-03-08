/*
 * XREFs of ACPIFanEvent @ 0x1C0026EA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIFanLoop @ 0x1C002759C (ACPIFanLoop.c)
 */

_UNKNOWN **__fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  const char *v5; // rdx
  __int64 v6; // rbx
  const char *v7; // r8
  __int64 v8; // rax
  _UNKNOWN **result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v4) = 0;
  v5 = (const char *)&unk_1C00622D0;
  v6 = DeviceExtension;
  v7 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 608);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v4 + 616);
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_dqss(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            4u,
                            0x10u,
                            0xEu,
                            (__int64)&WPP_851d451e9c8635d57712462b586962d1_Traceguids,
                            a2,
                            v4,
                            v5,
                            v7);
  if ( a2 == 128 )
    return (_UNKNOWN **)ACPIFanLoop(v6, 1LL, 0LL);
  return result;
}
