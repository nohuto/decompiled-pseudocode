/*
 * XREFs of GetShipAssertBuffer @ 0x1800DDC64
 * Callers:
 *     ShipAssert @ 0x1800DDDE0 (ShipAssert.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D7E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D8A0 (ZwFreeVirtualMemory.c)
 *     ZwDelayExecution @ 0x18009DB60 (ZwDelayExecution.c)
 *     SetAssertBufferPtrinPeb @ 0x1800DDD64 (SetAssertBufferPtrinPeb.c)
 */

__int64 GetShipAssertBuffer()
{
  signed __int64 v0; // rax
  __int64 v1; // rbx
  int i; // edi

  v0 = _InterlockedCompareExchange64(&qword_18016DA18, 255LL, 0LL);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 == 255 )
    {
      for ( i = 0; i < 5; ++i )
      {
        ZwDelayExecution();
        v1 = qword_18016DA18;
        if ( qword_18016DA18 != 255 )
          break;
      }
      if ( i == 5 )
      {
        v1 = 238LL;
        _InterlockedCompareExchange64(&qword_18016DA18, 238LL, 255LL);
      }
    }
  }
  else if ( (int)ZwAllocateVirtualMemory() >= 0 && (int)SetAssertBufferPtrinPeb(0LL) >= 0 )
  {
    _InterlockedExchange64(&qword_18016DA18, 0LL);
    return 0LL;
  }
  return v1;
}
