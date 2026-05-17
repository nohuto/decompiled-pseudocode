/*
 * XREFs of RtlpHpLargeAllocationProtect @ 0x18010E780
 * Callers:
 *     RtlpHpHeapProtect @ 0x18010E2C4 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009DEE0 (ZwProtectVirtualMemory.c)
 */

__int64 RtlpHpLargeAllocationProtect()
{
  __int64 result; // rax

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
    return ZwProtectVirtualMemory();
  return result;
}
