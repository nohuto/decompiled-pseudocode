/*
 * XREFs of CmpDoFlushAll @ 0x14037D80C
 * Callers:
 *     NtFlushKey @ 0x140696C00 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x1408725F0 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x140876D00 (CmpForceFlushWorker.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpGetLastHive @ 0x140699A30 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1406E9BF4 (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x14071BA9C (CmpDereferenceHive.c)
 *     CmpQuitNextHive @ 0x14076D260 (CmpQuitNextHive.c)
 */

void CmpDoFlushAll()
{
  __int64 LastHive; // rdi
  void *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  ULONG_PTR v3; // rbx

  if ( !BYTE1(NlsMbCodePageTag) )
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
        if ( ExAcquireRundownProtection(NextHive + 204) )
        {
          if ( (*(_DWORD *)(v3 + 160) & 2) == 0 )
            CmpFlushHive(v3);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v3 + 1632));
        }
        if ( v3 == LastHive )
          break;
      }
      CmpQuitNextHive(v3);
      CmpDereferenceHive(LastHive);
    }
  }
}
