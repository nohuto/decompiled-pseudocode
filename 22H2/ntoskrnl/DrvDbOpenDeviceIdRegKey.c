/*
 * XREFs of DrvDbOpenDeviceIdRegKey @ 0x140728850
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1406F95E0 (DrvDbDispatchDeviceId.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F9718 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSetDeviceIdMappedProperty @ 0x14072847C (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14097D320 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406B91F0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDeviceIdRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 5u, a2, a3, a4, a5, a6, 0LL);
}
