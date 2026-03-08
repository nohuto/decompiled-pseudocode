/*
 * XREFs of GetPenHoldTime @ 0x1C01F4C50
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C00F5D4C (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenHoldTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return *((unsigned int *)off_1C0357038 + 22);
  result = *((unsigned int *)off_1C0357038 + 23);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C0357038 + 22);
  return result;
}
