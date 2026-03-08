/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x140864A78
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140864950 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x140864AC0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A690A0 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140A6A3F0 (DrvDbSetDriverInfFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
