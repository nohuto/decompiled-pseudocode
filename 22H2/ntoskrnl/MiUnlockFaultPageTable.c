/*
 * XREFs of MiUnlockFaultPageTable @ 0x1402927C8
 * Callers:
 *     MiUserFault @ 0x14020D730 (MiUserFault.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MiUnlockSystemVa @ 0x14029277C (MiUnlockSystemVa.c)
 * Callees:
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029C084 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockFaultPageTable(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = a1[2];
  v2 = *a1;
  if ( v1 )
  {
    if ( *((_WORD *)a1 + 5) )
    {
      MiEmptyDeferredWorkingSetEntries(a1);
      v1 = a1[2];
    }
    result = MiUnlockPageTableInternal(v2, v1);
    *((_BYTE *)a1 + 13) |= 2u;
    a1[2] = 0LL;
  }
  return result;
}
