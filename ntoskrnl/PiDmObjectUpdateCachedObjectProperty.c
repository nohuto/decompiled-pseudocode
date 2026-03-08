/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x1406D0A64
 * Callers:
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406CE9F8 (PiDmObjectUpdateCachedCmProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x1406CFC70 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     PnpGetObjectProperty @ 0x1406CEE90 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1406D071C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1406D0770 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataEncode @ 0x14077DC74 (PiDmCacheDataEncode.c)
 *     PiDmCacheDataFree @ 0x14078C870 (PiDmCacheDataFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        void *Buf2,
        unsigned int a8)
{
  bool v10; // r14
  __int64 v11; // r12
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rsi
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  const void *v18; // rsi
  unsigned int v19; // eax
  int ObjectProperty; // eax
  void *v21; // rbx
  unsigned int v22; // eax
  struct _KTHREAD *v23; // rax
  ULONG_PTR v24; // rcx
  size_t Size; // [rsp+68h] [rbp-19h] BYREF
  void *Buf1; // [rsp+70h] [rbp-11h] BYREF
  DEVPROPKEY **v27; // [rsp+78h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-1h] BYREF
  __int64 v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+D8h] [rbp+57h] BYREF
  int v31; // [rsp+DCh] [rbp+5Bh]
  unsigned int v32; // [rsp+E0h] [rbp+5Fh] BYREF

  v31 = HIDWORD(a3);
  BugCheckParameter2 = 0LL;
  v27 = 0LL;
  v10 = 0;
  v32 = 0;
  v30 = 0;
  Buf1 = 0LL;
  LODWORD(Size) = 0;
  if ( !a4 )
  {
    PiDmGetCacheKeys(a1, &v27, &v32);
    if ( v32 )
    {
      v11 = a5;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v27, v32, a5);
      v13 = CachedKeyIndex;
      if ( CachedKeyIndex < v14 && (int)PiDmGetObject(a1, a2, &BugCheckParameter2) >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v16 = (__int64 *)BugCheckParameter2;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v16, 0LL);
        v17 = 3 * v13;
        v18 = Buf2;
        v19 = v16[v17 + 14];
        v29 = (__int64)&v16[v17 + 14];
        v32 = v19;
        if ( v19 <= 1 )
        {
          PiDmCacheDataEncode(a6, Buf2, a8, LODWORD(v27[v17 + 1]), HIDWORD(v27[v17 + 1]), &v16[v17 + 14]);
          v10 = v32 == 0;
        }
        ExReleasePushLockEx(v16, 0LL);
        KeLeaveCriticalRegion();
        if ( !v10 )
          goto LABEL_9;
        ObjectProperty = PnpGetObjectProperty(
                           0x5A706E50u,
                           a8,
                           a2,
                           a1,
                           0LL,
                           0LL,
                           v11,
                           (__int64)&v30,
                           &Buf1,
                           (unsigned int *)&Size,
                           0x10000);
        if ( ObjectProperty == -1073741275 )
        {
          v21 = Buf1;
          v30 = 0;
          if ( Buf1 )
          {
            ExFreePoolWithTag(Buf1, 0x5A706E50u);
            v21 = 0LL;
            Buf1 = 0LL;
          }
          v22 = 0;
        }
        else
        {
          if ( ObjectProperty < 0 )
            goto LABEL_26;
          v21 = Buf1;
          v22 = Size;
        }
        if ( v30 != a6 || v22 != a8 )
          goto LABEL_26;
        if ( v21 )
        {
          if ( !v18 )
            goto LABEL_26;
        }
        else if ( v18 )
        {
          goto LABEL_26;
        }
        if ( !v22 )
          goto LABEL_20;
        if ( !v21 )
        {
LABEL_9:
          PiDmObjectRelease((unsigned int *)v16);
          return;
        }
        if ( !memcmp(v21, v18, v22) )
        {
LABEL_20:
          if ( v21 )
            ExFreePoolWithTag(v21, 0x5A706E50u);
          goto LABEL_9;
        }
LABEL_26:
        v23 = KeGetCurrentThread();
        v16 = (__int64 *)BugCheckParameter2;
        v24 = BugCheckParameter2;
        --v23->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v24, 0LL);
        PiDmCacheDataFree(v29);
        ExReleasePushLockEx(v16, 0LL);
        KeLeaveCriticalRegion();
        v21 = Buf1;
        goto LABEL_20;
      }
    }
  }
}
