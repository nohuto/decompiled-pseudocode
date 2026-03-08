/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x140AD3224
 * Callers:
 *     ViCreateProcessCallback @ 0x14045DE30 (ViCreateProcessCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     RtlUpcaseUnicodeString @ 0x1407A3D00 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407E764C (PsGetAllocatedFullProcessImageName.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViFaultsGetBaseImageName @ 0x140AD3750 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x140AD3A00 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  PEPROCESS v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+50h] [rbp+20h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 )
  {
    Process = 0LL;
    P = 0LL;
    SourceString = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      v2 = Process;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P) >= 0 )
      {
        ViFaultsGetBaseImageName(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
          _InterlockedOr((volatile signed __int32 *)&v2[1].DirectoryTableBase, 0x10000u);
        KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
            v8 = (v7 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v7;
            if ( v8 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v3);
        ExFreePoolWithTag(P, 0);
      }
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
    }
  }
}
