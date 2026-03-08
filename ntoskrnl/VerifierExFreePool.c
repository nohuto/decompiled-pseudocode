/*
 * XREFs of VerifierExFreePool @ 0x140ABD100
 * Callers:
 *     VerifierExFreePoolEx @ 0x140ABD150 (VerifierExFreePoolEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x1404633F2 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140AE4DFC (ExFreePoolSanityChecks.c)
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
