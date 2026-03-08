/*
 * XREFs of KiLogUserCetSetContextIpValidationFailure @ 0x140579A48
 * Callers:
 *     KeVerifyContextIpForUserCet @ 0x14036551C (KeVerifyContextIpForUserCet.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KiLogUserCetSetContextIpValidationFailure(int a1, int a2, __int64 a3, unsigned __int8 a4)
{
  int v5; // esi
  struct _EX_RUNDOWN_REF *Process; // rdi
  signed __int32 Ptr_high; // eax
  signed __int32 v10; // ett
  __int64 Pool2; // rbx

  v5 = a4;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->Process;
  _m_prefetchw((char *)&Process[314].Ptr + 4);
  Ptr_high = HIDWORD(Process[314].Ptr);
  do
  {
    v10 = Ptr_high;
    Ptr_high = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Process[314].Ptr + 1,
                 Ptr_high | 0x80000,
                 Ptr_high);
  }
  while ( v10 != Ptr_high );
  if ( (Ptr_high & 0x80000) == 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 64LL, 1668508747LL);
    if ( Pool2 )
    {
      if ( ExAcquireRundownProtection_0(Process + 139) )
      {
        ObfReferenceObjectWithTag(Process, 0x746C6644u);
        *(_QWORD *)Pool2 = 0LL;
        *(_QWORD *)(Pool2 + 16) = KiLogUserCetSetContextIpValidationFailureWorker;
        *(_QWORD *)(Pool2 + 24) = Pool2;
        *(_DWORD *)(Pool2 + 32) = a1;
        *(_QWORD *)(Pool2 + 40) = Process;
        *(_QWORD *)(Pool2 + 48) = a3;
        *(_DWORD *)(Pool2 + 56) = v5;
        *(_DWORD *)(Pool2 + 60) = a2;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
      }
      else
      {
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
  }
}
