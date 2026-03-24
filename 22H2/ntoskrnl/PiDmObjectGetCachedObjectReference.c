/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x140695E80
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1406AF6C0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x140746ED0 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     PiDmGetObject @ 0x1406AF84C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1406AFBD0 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x1406AFD7C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1406AFDCC (PiDmGetCachedKeyIndex.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, _QWORD *a5)
{
  unsigned int v7; // r14d
  int Object; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // rbp
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v20[0] = 0LL;
  v19 = 0;
  v7 = a1;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, v20, &v19);
  if ( v19 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v20[0], v19, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(v7, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = BugCheckParameter2;
      ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
      v16 = *(_DWORD *)(v15 + 24 * v12 + 112);
      if ( v16 == 6 )
      {
        v17 = *(_QWORD *)(v15 + 24 * v12 + 128);
        *a5 = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v15 = BugCheckParameter2;
        Object = 0;
      }
      else if ( v16 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      ExReleasePushLockEx(v15, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v9 )
        PiDmObjectRelease((PVOID)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
