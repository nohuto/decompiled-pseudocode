/*
 * XREFs of GetPenHoldTime @ 0x1C0209610
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0136CA8 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C032A038 + 22);
  result = *((unsigned int *)off_1C032A038 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C032A038 + 22);
  return result;
}
