/*
 * XREFs of WheapWorkQueueWorkerRoutine @ 0x140611660
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedRemoveHeadList @ 0x1402C3C20 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WheapWorkQueueWorkerRoutine(PLIST_ENTRY ListHead)
{
  PLIST_ENTRY v2; // rax
  __int64 result; // rax

  do
  {
    v2 = ExInterlockedRemoveHeadList(ListHead, (PKSPIN_LOCK)&ListHead[1]);
    ((void (__fastcall *)(PLIST_ENTRY, PLIST_ENTRY))ListHead[8].Flink)(ListHead, v2);
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ListHead[1].Blink, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
