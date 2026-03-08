/*
 * XREFs of ObpSetObjectAuditInfo @ 0x1408A0C62
 * Callers:
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, PSECURITY_DESCRIPTOR *a2, char a3)
{
  __int64 v7; // rax
  _QWORD *v8; // rbx
  PSECURITY_DESCRIPTOR v9; // rdi
  size_t v10; // r14
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v13; // rcx

  if ( !RtlValidSecurityDescriptor(*a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
  {
    v7 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F];
    v8 = (_QWORD *)(a1 - v7);
    if ( a1 != v7 && !*v8 )
    {
      v9 = *a2;
      if ( a3 )
      {
        *a2 = 0LL;
      }
      else
      {
        v10 = RtlLengthSecurityDescriptor(*a2);
        Pool2 = (void *)ExAllocatePool2(256LL, v10, 1229021775LL);
        v9 = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        memmove(Pool2, *a2, v10);
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
      v13 = (__int64 *)(a1 + 16);
      if ( *v8 )
      {
        ExReleasePushLockEx(v13, 0LL);
        KeLeaveCriticalRegion();
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        *v8 = v9;
        ExReleasePushLockEx(v13, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  return 0LL;
}
