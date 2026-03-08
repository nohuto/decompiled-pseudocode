/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x14077D554
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D019C (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14077D414 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1406D071C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1406D0770 (PiDmGetCachedKeyIndex.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 *a5)
{
  int Object; // ebx
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // r14
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v15; // rdi
  ULONG_PTR v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h] BYREF
  DEVPROPKEY **v21; // [rsp+28h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v21 = 0LL;
  v20 = 0;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v21, &v20);
  if ( v20 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v21, v20, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v9 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      v15 = (__int64 *)BugCheckParameter2;
      v16 = BugCheckParameter2;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v16, 0LL);
      v17 = v15[3 * v12 + 14];
      if ( v17 == 6 )
      {
        v18 = v15[3 * v12 + 16];
        *a5 = v18;
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        v15 = (__int64 *)BugCheckParameter2;
        Object = 0;
      }
      else if ( v17 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      ExReleasePushLockEx(v15, 0LL);
      KeLeaveCriticalRegion();
      if ( v9 )
        PiDmObjectRelease((unsigned int *)v15);
    }
  }
  return (unsigned int)Object;
}
