/*
 * XREFs of HalpIrtInitializeDeviceApertures @ 0x140865F2C
 * Callers:
 *     HalpInitializeInterruptRemappingBspLate @ 0x140865780 (HalpInitializeInterruptRemappingBspLate.c)
 * Callees:
 *     HalpIrtAllocateDeviceAperture @ 0x140865880 (HalpIrtAllocateDeviceAperture.c)
 */

__int64 HalpIrtInitializeDeviceApertures()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  qword_140C49938 = (__int64)&HalpIrtAllocatedDeviceAperturesHead;
  HalpIrtAllocatedDeviceAperturesHead = (__int64)&HalpIrtAllocatedDeviceAperturesHead;
  qword_140C49B58 = (__int64)&HalpIrtFreeDeviceAperturesHead;
  HalpIrtFreeDeviceAperturesHead = (__int64)&HalpIrtFreeDeviceAperturesHead;
  result = HalpIrtAllocateDeviceAperture(-1, -1, 1, 0, &v1);
  if ( (int)result >= 0 )
    HalpIrtDefaultDeviceAperture = HalpIrtAllocatedDeviceAperturesHead;
  return result;
}
