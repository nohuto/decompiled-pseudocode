__int64 __fastcall VfAllocateCrashDumpRegistersEx(__int64 a1)
{
  if ( KeGetCurrentIrql() == 15 )
    VfDisableHalVerifier();
  return ((__int64 (__fastcall *)(__int64))pXdvHalDmaAllocateCrashDumpRegistersEx)(a1);
}
