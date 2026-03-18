/*
 * XREFs of DrvDbOpenDriverFileRegKey @ 0x140A6CA20
 * Callers:
 *     DrvDbGetDriverFileMappedProperty @ 0x140A6BA60 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x140A6BBF4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140A6CFBC (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbDispatchDriverFile @ 0x140A6DED0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140877088 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverFileRegKey(__int64 *a1, __int64 a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0LL, 4u, a2, a3, a4, a5, a6, 0LL);
}
