/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x1406D060C
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1406D019C (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1406D071C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1406D0770 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x1406D0930 (PiDmCacheDataDecode.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v10; // r14d
  int Object; // ebx
  char v12; // si
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v18; // rdi
  ULONG_PTR v19; // rcx
  __int64 *v20; // rcx
  unsigned int v22; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v23[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v23[0] = 0LL;
  v22 = 0;
  v10 = a1;
  Object = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v23, &v22);
  if ( v22 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v23[0], v22, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !a3 )
      {
        Object = PiDmGetObject(v10, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v12 = 1;
      }
      CurrentThread = KeGetCurrentThread();
      v18 = (__int64 *)BugCheckParameter2;
      v19 = BugCheckParameter2;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v19, 0LL);
      v20 = &v18[2 * v15 + 14 + v15];
      if ( *(_DWORD *)v20 <= 1u )
        Object = -1073741802;
      else
        Object = PiDmCacheDataDecode(v20, a5, a6, a7, a8);
      ExReleasePushLockEx(v18, 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
        PiDmObjectRelease((unsigned int *)v18);
    }
  }
  return (unsigned int)Object;
}
