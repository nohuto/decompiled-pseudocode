/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1406EB244
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406EAEDC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140870EA0 (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     CmpReferenceHive @ 0x1405EC2A8 (CmpReferenceHive.c)
 *     CmpGetNextActiveHive @ 0x1406EB310 (CmpGetNextActiveHive.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  void *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( a1 == NextActiveHive || a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[9], 0LL);
      if ( (struct _EX_RUNDOWN_REF *)a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection(v10 + 204);
        break;
      }
    }
  }
  if ( (!a1 || v3) && (!a2 || v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
    KeAbPostRelease(a1 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = (void *)a1;
  }
  else
  {
    if ( v4 != 1 )
      return 3221225524LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 72));
    KeAbPostRelease(a2 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4272), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = (void *)a2;
  }
  CmpDeleteHive(v12);
  return 3221225524LL;
}
