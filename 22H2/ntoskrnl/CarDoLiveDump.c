/*
 * XREFs of CarDoLiveDump @ 0x1405D5A60
 * Callers:
 *     CarWriteLivedump @ 0x1405D5D30 (CarWriteLivedump.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     DifiDbgPrint @ 0x1405D56D4 (DifiDbgPrint.c)
 *     CarLiveDump @ 0x1405D5B20 (CarLiveDump.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall CarDoLiveDump(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  struct _WORK_QUEUE_ITEM *Pool2; // rax

  v5 = 0;
  if ( !a1 )
    return 3221225485LL;
  qword_140C34EE8 = a2;
  qword_140C34F00 = a5;
  CarLiveDumpData = a1;
  qword_140C34EF0 = a3;
  qword_140C34EF8 = a4;
  v7 = *(const char **)(a1 + 1112);
  if ( v7 )
    DifiDbgPrint("Driver Verifier: Livedump scheduled with Error Code: 0x%X Error Message: '%s'\n", a2, v7);
  if ( KeGetCurrentIrql() )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1316118851LL);
    if ( Pool2 )
    {
      Pool2->Parameter = Pool2;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))CarLiveDump;
      Pool2->List.Flink = 0LL;
      ExQueueWorkItem(Pool2, SuperCriticalWorkQueue);
      return 259;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    CarLiveDump(0LL);
  }
  return v5;
}
