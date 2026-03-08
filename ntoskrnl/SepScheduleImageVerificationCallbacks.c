/*
 * XREFs of SepScheduleImageVerificationCallbacks @ 0x140793224
 * Callers:
 *     SeValidateImageHeader @ 0x1406A02B4 (SeValidateImageHeader.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepScheduleImageVerificationCallbacks(__int64 a1, unsigned int a2)
{
  __int64 Pool2; // rax
  unsigned int v5; // ebx

  Pool2 = ExAllocatePool2(64LL, a2 + 48LL, 1668499779LL);
  v5 = 0;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = Pool2;
    *(_QWORD *)(Pool2 + 16) = SepImageVerificationCallbackWorker;
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 32) = a1;
    *(_DWORD *)(Pool2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
