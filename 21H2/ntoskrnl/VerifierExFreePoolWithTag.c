/*
 * XREFs of VerifierExFreePoolWithTag @ 0x1409D6220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x1405306F8 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409E1074 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E170C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409EDF50 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePoolWithTag(PVOID P, ULONG Tag)
{
  VfFreePoolNotification(P, 0LL);
  VfIrpDatabaseCheckExFreePool((ULONG_PTR)P);
  if ( (unsigned int)MmKernelVerifierEnabled() )
  {
    ExFreePoolWithTag(P, Tag);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P);
    ((void (__fastcall *)(PVOID, _QWORD))pXdvExFreePoolWithTag)(P, Tag);
  }
}
