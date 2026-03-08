/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140A69CD8
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140864D40 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140865414 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140A68868 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x140A6A0FC (DrvDbSetDeviceIdMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
