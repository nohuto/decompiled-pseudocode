/*
 * XREFs of CmOpenKeyForBugCheckRecovery @ 0x140A0A440
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     CmpLockKeyBodyIntoMemory @ 0x140A14838 (CmpLockKeyBodyIntoMemory.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmOpenKeyForBugCheckRecovery(_QWORD *a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r15
  HANDLE v11; // r14
  unsigned int v12; // edi
  bool v13; // zf
  int started; // esi
  char v15; // al
  __int64 v16; // r9
  __int64 v17; // r13
  HANDLE v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v21[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v23; // [rsp+B0h] [rbp+40h] BYREF

  memset(v21, 0, sizeof(v21));
  v20 = 0LL;
  CmpInitializeThreadInfo((__int64)&v20);
  v10 = 0LL;
  v11 = 0LL;
  LOBYTE(v12) = 0;
  v23 = 0LL;
  v13 = (*(_DWORD *)(v9 + 24) & 0x200) == 0;
  v19 = 0LL;
  if ( v13 )
  {
    started = -1073741811;
  }
  else
  {
    v15 = CmpAcquireShutdownRundown(v8, v7, v9);
    v12 = v15 & 1;
    if ( (v15 & 1) != 0 )
    {
      started = CmOpenKey(&v19, a2, a3, a4, 0LL, 0);
      if ( started < 0 )
      {
        v11 = v19;
      }
      else
      {
        v11 = v19;
        started = CmObReferenceObjectByHandle((_DWORD)v19, a2, v9, 0, (__int64)&v23, 0LL);
        if ( started < 0 )
        {
          v10 = v23;
        }
        else
        {
          CmpLockRegistry(v8, v7, v9, v16);
          v10 = v23;
          v12 |= 2u;
          v17 = v23[1];
          started = CmpStartKcbStackForTopLayerKcb((__int64)v21, v17);
          if ( started >= 0 )
          {
            CmpLockKcbStackTopExclusiveRestShared((__int64)v21);
            v12 |= 4u;
            started = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
            if ( started >= 0 )
            {
              if ( (*(_DWORD *)(v17 + 184) & 0x40000) != 0 )
              {
                started = CmpLockKeyBodyIntoMemory(v10);
                if ( started >= 0 )
                {
                  *a1 = v11;
                  v11 = 0LL;
                  started = 0;
                }
              }
              else
              {
                started = -1073741811;
              }
            }
          }
        }
      }
      if ( v12 >= 4 )
        CmpUnlockKcbStack((__int64)v21);
    }
    else
    {
      started = -1073741431;
    }
    if ( (v12 & 2) != 0 )
      CmpUnlockRegistry(v8, v7, v9, v16);
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( (v12 & 1) != 0 )
    CmpReleaseShutdownRundown(v8, v7, v9);
  CmCleanupThreadInfo((__int64 *)&v20);
  return (unsigned int)started;
}
