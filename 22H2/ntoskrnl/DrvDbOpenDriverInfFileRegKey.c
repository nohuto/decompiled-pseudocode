/*
 * XREFs of DrvDbOpenDriverInfFileRegKey @ 0x1408764A8
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x140876380 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbDispatchDriverInfFile @ 0x1408764F0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140A6BDA0 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140A6D0F0 (DrvDbSetDriverInfFileMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140877088 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverInfFileRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 3, a2, a3, a4, a5, a6, 0LL);
}
