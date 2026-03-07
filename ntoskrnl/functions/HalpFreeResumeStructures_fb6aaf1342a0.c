__int64 __fastcall HalpFreeResumeStructures(__int64 a1)
{
  __int64 result; // rax

  if ( HalpHiberProcState )
  {
    result = HalpMmAllocCtxFree(a1, HalpHiberProcState);
    HalpHiberProcState = 0LL;
  }
  return result;
}
