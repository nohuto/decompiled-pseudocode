/*
 * XREFs of GetPenHoldTime @ 0x1C02111C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0122790 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C0326038 + 22);
  result = *((unsigned int *)off_1C0326038 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0326038 + 22);
  return result;
}
