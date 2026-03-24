/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1406B3DF4
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406B3E3C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406B4510 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140727B94 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097D9F4 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x1406B91F0 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
