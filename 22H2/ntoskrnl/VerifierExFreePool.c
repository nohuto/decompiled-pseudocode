/*
 * XREFs of VerifierExFreePool @ 0x140AC1100
 * Callers:
 *     VerifierExFreePoolEx @ 0x140AC1150 (VerifierExFreePoolEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     MmKernelVerifierEnabled @ 0x14046B2F2 (MmKernelVerifierEnabled.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExFreePoolSanityChecks @ 0x140AE8DFC (ExFreePoolSanityChecks.c)
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
