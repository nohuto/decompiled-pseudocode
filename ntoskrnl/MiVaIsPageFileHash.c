/*
 * XREFs of MiVaIsPageFileHash @ 0x1403B7060
 * Callers:
 *     MiLockStealSystemVm @ 0x140394CFC (MiLockStealSystemVm.c)
 *     MiActivePageClaimCandidate @ 0x1403B68D8 (MiActivePageClaimCandidate.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaIsPageFileHash(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r10d
  int v3; // r9d
  __int64 i; // r8
  unsigned __int64 v6; // rdx

  v2 = *(_DWORD *)(a1 + 17048);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  for ( i = a1 + 17056; ; i += 8LL )
  {
    v6 = *(_QWORD *)(*(_QWORD *)i + 216LL);
    if ( v6 )
    {
      if ( a2 >= v6 && a2 < v6 + *(_QWORD *)(*(_QWORD *)i + 8LL) * (unsigned int)dword_140C692CC )
        break;
    }
    if ( ++v3 >= v2 )
      return 0LL;
  }
  return *(_QWORD *)i;
}
