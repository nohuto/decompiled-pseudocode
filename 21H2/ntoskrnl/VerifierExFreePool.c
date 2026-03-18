/*
 * XREFs of VerifierExFreePool @ 0x140A7F070
 * Callers:
 *     VerifierExFreePoolEx @ 0x140A7F0C0 (VerifierExFreePoolEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14045B94E (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140AA7018 (ExFreePoolSanityChecks.c)
 */

void __fastcall VerifierExFreePool(__int64 a1)
{
  void *v2; // rcx

  if ( (unsigned int)MmKernelVerifierEnabled() )
  {
    ExFreePoolWithTag(v2, 0);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)v2);
    ((void (__fastcall *)(__int64))pXdvExFreePool)(a1);
  }
}
