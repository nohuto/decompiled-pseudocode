void __fastcall VmpUnlockMemoryForPin(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // rdx

  MmUnlockPhysicalPagesByVa(a3 << 12, a4 << 12, a3, a7 != 0);
  if ( a4 == a6 )
  {
    MmUnsecureVirtualMemory(a2);
    ExReleaseRundownProtection_0(a1 + 12);
  }
  else
  {
    v11 = a5 + a4;
    if ( a3 != a5 )
      v11 = a5;
    if ( (int)MmAdjustSecuredVirtualMemorySize(a2, v11 << 12, (a6 - a4) << 12) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
}
