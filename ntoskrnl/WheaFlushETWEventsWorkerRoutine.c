/*
 * XREFs of WheaFlushETWEventsWorkerRoutine @ 0x140610C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheaFlushETWEventsWorkerRoutine(__int64 a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 96);
    if ( (int)result <= 0 )
      break;
    (*(void (**)(void))(a1 + 104))();
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 96));
  }
  return result;
}
