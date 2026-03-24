/*
 * XREFs of VerifierExFreePool @ 0x1409D51A0
 * Callers:
 *     VerifierExFreePoolEx @ 0x1409D5210 (VerifierExFreePoolEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x1405303F8 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     VfFreePoolNotification @ 0x1409E0084 (VfFreePoolNotification.c)
 *     VfIrpDatabaseCheckExFreePool @ 0x1409E071C (VfIrpDatabaseCheckExFreePool.c)
 *     ExFreePoolSanityChecks @ 0x1409ECF60 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePool(PVOID P)
{
  __int64 v2; // rcx

  if ( (unsigned int)MmKernelVerifierEnabled()
    || (VfFreePoolNotification(v2, 0LL),
        VfIrpDatabaseCheckExFreePool((ULONG_PTR)P),
        (unsigned int)MmKernelVerifierEnabled()) )
  {
    ExFreePoolWithTag(P, 0);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)P);
    ((void (__fastcall *)(PVOID))pXdvExFreePool)(P);
  }
}
