/*
 * XREFs of ACPICMButtonStart @ 0x1C0082104
 * Callers:
 *     ACPICMExperienceButtonStart @ 0x1C0082190 (ACPICMExperienceButtonStart.c)
 *     ACPICMLidStart @ 0x1C00822D0 (ACPICMLidStart.c)
 *     ACPICMPowerButtonStart @ 0x1C00822F0 (ACPICMPowerButtonStart.c)
 *     ACPICMSleepButtonStart @ 0x1C0082310 (ACPICMSleepButtonStart.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1C002DA4C (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPICMButtonStart(ULONG_PTR a1, __int64 a2, int a3)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 184));
  *(_DWORD *)(DeviceExtension + 200) = a3;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(__int64, __int64, __int64))ACPICMButtonStartCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
