/*
 * XREFs of CmpDoFlushAll @ 0x140243DB8
 * Callers:
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     CmpForceFlushWorker @ 0x140A0EEA0 (CmpForceFlushWorker.c)
 *     CmReconcileAndValidateAllHives @ 0x140A105DC (CmReconcileAndValidateAllHives.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     CmpDereferenceHive @ 0x1406B6634 (CmpDereferenceHive.c)
 *     CmpGetNextHive @ 0x1406BE36C (CmpGetNextHive.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpGetLastHive @ 0x14078A7EC (CmpGetLastHive.c)
 */

void __fastcall CmpDoFlushAll(unsigned int a1)
{
  __int64 LastHive; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  struct _EX_RUNDOWN_REF *NextHive; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  if ( !BYTE1(NlsMbOemCodePageTag) )
  {
    LastHive = CmpGetLastHive();
    if ( LastHive )
    {
      for ( i = 0LL; ; i = v5 )
      {
        NextHive = (struct _EX_RUNDOWN_REF *)CmpGetNextHive(i);
        v5 = NextHive;
        if ( !NextHive )
          break;
        if ( ExAcquireRundownProtection_0(NextHive + 205) )
        {
          if ( (v5[20].Count & 2) == 0 )
            CmpFlushHive(v5, a1);
          ExReleaseRundownProtection_0(v5 + 205);
        }
        if ( v5 == (struct _EX_RUNDOWN_REF *)LastHive )
          break;
      }
      CmpDereferenceHive(v5);
      CmpDereferenceHive(LastHive);
    }
  }
}
