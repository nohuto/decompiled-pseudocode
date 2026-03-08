/*
 * XREFs of ACPICMButtonNotify @ 0x1C0018AC8
 * Callers:
 *     ACPICMButtonNotifyByDeviceExtension @ 0x1C0018BB0 (ACPICMButtonNotifyByDeviceExtension.c)
 *     ACPICMButtonNotifyByDeviceObject @ 0x1C0018BD0 (ACPICMButtonNotifyByDeviceObject.c)
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIButtonEvent @ 0x1C00189F0 (ACPIButtonEvent.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C001961C (ACPICMExperienceButtonHandleEvent.c)
 *     ACPISetDeviceWorker @ 0x1C00474D4 (ACPISetDeviceWorker.c)
 */

_QWORD *__fastcall ACPICMButtonNotify(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // rax
  char v4; // r10
  int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // r8d
  const char *v8; // rcx
  const char *v9; // rdx
  unsigned int v10; // edx

  result = (_QWORD *)a2;
  v4 = a3;
  v5 = *(_DWORD *)(a2 + 200);
  v6 = result[1];
  if ( (v6 & 0x2000) != 0 )
    return (_QWORD *)ACPICMExperienceButtonHandleEvent(result, a3);
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( !a1 )
      return result;
    v10 = 0x80000000;
    return (_QWORD *)ACPIButtonEvent(a1, v10);
  }
  if ( v7 != 126 )
  {
    v8 = (const char *)&unk_1C00622D0;
    v9 = (const char *)&unk_1C00622D0;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = (const char *)result[76];
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = (const char *)result[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_QWORD *)WPP_RECORDER_SF_dqss(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         2u,
                         5u,
                         0xAu,
                         (__int64)&WPP_54316db9c10838dc0a95ce458be70024_Traceguids,
                         v4,
                         (char)result,
                         v8,
                         v9);
    return result;
  }
  if ( (v5 & 4) != 0 )
    return (_QWORD *)ACPISetDeviceWorker(result, 0LL);
  if ( a1 )
  {
    v10 = v5 & 0x7FFFFFFF;
    return (_QWORD *)ACPIButtonEvent(a1, v10);
  }
  return result;
}
