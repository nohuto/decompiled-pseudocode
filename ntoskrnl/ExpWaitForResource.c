/*
 * XREFs of ExpWaitForResource @ 0x140342994
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402213C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14025B1B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14025DED0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403C3440 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PerfLogExecutiveResourceWait @ 0x1405FE790 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall ExpWaitForResource(_DWORD *a1, __int64 a2, unsigned int a3, void (__fastcall *a4)(_DWORD *))
{
  unsigned int v8; // edi
  unsigned int v9; // esi
  _DWORD *v10; // r15
  NTSTATUS result; // eax
  __int64 Pool2; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-48h]

  __incgsdword(0x8A68u);
  v8 = 0;
  v9 = 0;
  v10 = a1 + 17;
  v14 = a1 + 17;
  ++a1[17];
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v8;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v8);
    ++v9;
    Timeout.QuadPart = ExpTimeout;
    if ( ExResourceTimeoutCount && v9 > ExResourceTimeoutCount )
    {
      v9 = 0;
      DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
      Pool2 = ExAllocatePool2(64LL, 56LL, 1867801938LL);
      if ( Pool2 )
      {
        *(_QWORD *)(Pool2 + 16) = ExpResourceTimeoutCaptureLiveDump;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 32) = KeGetCurrentThread();
        *(_QWORD *)(Pool2 + 40) = a1;
        *(_DWORD *)(Pool2 + 48) = *v10;
        *(_DWORD *)(Pool2 + 52) = ExResourceTimeoutCount;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      __debugbreak();
    }
    if ( a4 )
      a4(a1);
  }
  return result;
}
