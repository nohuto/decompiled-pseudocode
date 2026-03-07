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
