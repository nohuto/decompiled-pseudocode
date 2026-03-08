/*
 * XREFs of GetJournallingQueue @ 0x1C00378D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 */

__int64 __fastcall GetJournallingQueue(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Valid; // rcx

  if ( (*(_DWORD *)(a1 + 488) & 0x80u) != 0 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 456) )
    return 0LL;
  LockRefactorStagingAssertAny(gDomainHookLock);
  Valid = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 56LL);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
      Valid = PhkNextValid(Valid);
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 432LL);
  }
  LockRefactorStagingAssertAny(gDomainHookLock);
  Valid = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 48LL);
  if ( Valid )
  {
    if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
      Valid = PhkNextValid(Valid);
    if ( Valid )
      return *(_QWORD *)(*(_QWORD *)(Valid + 16) + 432LL);
  }
  return v2;
}
