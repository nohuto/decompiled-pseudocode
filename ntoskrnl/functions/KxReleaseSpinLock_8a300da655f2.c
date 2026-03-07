__int64 __fastcall KxReleaseSpinLock(volatile signed __int64 *a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseSpinLockInstrumented(a1, retaddr);
  _InterlockedAnd64(a1, 0LL);
  return result;
}
