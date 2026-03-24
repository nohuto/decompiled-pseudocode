/*
 * XREFs of GetPenHoldTime @ 0x1C0209BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0137058 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C032B038 + 22);
  result = *((unsigned int *)off_1C032B038 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C032B038 + 22);
  return result;
}
