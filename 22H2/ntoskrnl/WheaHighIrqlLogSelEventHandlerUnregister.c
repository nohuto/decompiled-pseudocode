/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x1405BD310
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1405BD450 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r9

  if ( (_DWORD)WheapHighIrqlLogSelHandler )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    *((_QWORD *)&WheapHighIrqlLogSelHandler + 1) = v2;
    qword_140C14F70 = v2;
    LODWORD(WheapHighIrqlLogSelHandler) = v2;
    _InterlockedExchange((_DWORD *)&WheapHighIrqlLogSelHandler + 1, v2);
  }
  return result;
}
