/*
 * XREFs of RIMOnProcessDestroy @ 0x1C00468A0
 * Callers:
 *     DestroyProcessInfo @ 0x1C0045950 (DestroyProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0046914 (RIMUnregisterCurrentProcessForInput.c)
 */

__int64 __fastcall RIMOnProcessDestroy(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *i; // rax

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( i[1].Flink == a1 )
      BYTE2(i[-1].Blink) = 1;
  }
  qword_1C0255428 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return RIMUnregisterCurrentProcessForInput();
}
