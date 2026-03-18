/*
 * XREFs of CmpDoFlushAll @ 0x1402F694C
 * Callers:
 *     NtFlushKey @ 0x1407ACA70 (NtFlushKey.c)
 *     CmpForceFlushWorker @ 0x140A11BB0 (CmpForceFlushWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x140A13328 (CmReconcileAndValidateAllHives.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpGetNextHive @ 0x14076A460 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x14076ADA4 (CmpDereferenceHive.c)
 *     CmpGetLastHive @ 0x1407D90F4 (CmpGetLastHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = (void *)v3 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v3 = (ULONG_PTR)NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 205) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v3 + 1640));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpDereferenceHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
