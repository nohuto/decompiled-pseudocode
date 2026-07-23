/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x1409E7620
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x14025102C (MmDeterminePoolType.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MmAreMdlPagesLocked @ 0x1409C6CD0 (MmAreMdlPagesLocked.c)
 *     VfUtilCheckRuleEnforcement @ 0x1409C75DC (VfUtilCheckRuleEnforcement.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rsi
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v3 = *(_QWORD *)(BugCheckParameter3 + 32);
    if ( (unsigned int)MmDeterminePoolType() )
    {
      if ( (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, BugCheckParameter3, v3);
    }
  }
  result = ((__int64 (__fastcall *)(ULONG_PTR))pXdvMmBuildMdlForNonPagedPool)(BugCheckParameter3);
  if ( CurrentIrql <= 2u && (MmVerifierData & 0x800) != 0 && !VerifierNewRuleWorkaround )
  {
    result = MmAreMdlPagesLocked((_DWORD *)BugCheckParameter3);
    if ( !(_DWORD)result )
    {
      result = VfUtilCheckRuleEnforcement();
      if ( (_DWORD)result == 1 )
        return VerifierBugCheckIfAppropriate(
                 0xC4u,
                 0x140uLL,
                 CurrentIrql,
                 BugCheckParameter3,
                 *(_QWORD *)(BugCheckParameter3 + 32));
    }
  }
  return result;
}
