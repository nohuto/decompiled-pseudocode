void __fastcall VerifierExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  ULONG v4; // edx
  void *v5; // rcx

  if ( (unsigned int)MmKernelVerifierEnabled() )
  {
    ExFreePoolWithTag(v5, v4);
  }
  else
  {
    if ( (MmVerifierData & 1) != 0 )
      ExFreePoolSanityChecks((ULONG_PTR)v5);
    ((void (__fastcall *)(__int64, _QWORD))pXdvExFreePoolWithTag)(a1, a2);
  }
}
