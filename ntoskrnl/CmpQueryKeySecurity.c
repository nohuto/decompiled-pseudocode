/*
 * XREFs of CmpQueryKeySecurity @ 0x1407AC310
 * Callers:
 *     CmpSecurityMethod @ 0x1407AC040 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407AD8A0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpPopulateKcbStack @ 0x1407AF248 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1407AF450 (CmpStartKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpQueryKeySecurity(
        _QWORD *a1,
        ULONG *a2,
        void *a3,
        ULONG *a4,
        PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor)
{
  char v5; // si
  PSECURITY_DESCRIPTOR v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r14
  __int64 v15; // rbp
  int started; // ebx
  __int64 v17; // rcx
  __int128 v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h]

  v5 = 0;
  v9 = 0LL;
  v19 = 0LL;
  ObjectsSecurityDescriptor = 0LL;
  v20 = 0LL;
  WORD1(v19) = -1;
  v14 = CmpAcquireShutdownRundown(a1, a2, a3);
  if ( v14 )
  {
    CmpLockRegistry(v11, v10, v12, v13);
    v15 = a1[1];
    v5 = 1;
    started = CmpStartKcbStack(&v19, *(unsigned __int16 *)(v15 + 66));
    if ( started >= 0 )
    {
      CmpPopulateKcbStack(&v19, v15);
      CmpLockKcbStackShared(&v19);
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started >= 0 )
      {
        if ( !a1[7] && !a1[8]
          || (started = CmpTransSearchAddTransFromKeyBody(a1, &ObjectsSecurityDescriptor), started >= 0)
          && (v9 = ObjectsSecurityDescriptor,
              started = CmpPerformKeyBodyDeletionCheck(a1, ObjectsSecurityDescriptor),
              started >= 0) )
        {
          ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(&v19, v9, 0LL) + 32);
          started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
          if ( started >= 0 )
            started = 0;
        }
      }
      CmpUnlockKcbStack((__int64)&v19);
    }
  }
  else
  {
    started = -1073741431;
  }
  v17 = *((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v20 + 1));
  if ( v5 )
    CmpUnlockRegistry(v17, v10, v12, v13);
  if ( v14 )
    CmpReleaseShutdownRundown();
  return (unsigned int)started;
}
