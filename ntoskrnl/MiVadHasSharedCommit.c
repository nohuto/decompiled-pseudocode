/*
 * XREFs of MiVadHasSharedCommit @ 0x140A41134
 * Callers:
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x14034C990 (MiIncludeSharedCommit.c)
 */

__int64 __fastcall MiVadHasSharedCommit(__int64 a1)
{
  int v1; // edx
  __int64 *v2; // rcx
  unsigned int v3; // r8d

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x70) == 0x20 )
    return 1LL;
  if ( (v1 & 0x200000) != 0 )
    return 0LL;
  if ( *(__int64 *)(a1 + 120) < 0 )
    return 0LL;
  v2 = *(__int64 **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = (unsigned int)MiIncludeSharedCommit(*v2) != 0;
  return v3;
}
