/*
 * XREFs of EtwpFreeGuidEntry @ 0x14078B2C4
 * Callers:
 *     EtwpAddGuidEntry @ 0x140690A30 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeGuidEntry(char *P)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char **v4; // rdx
  PVOID *v5; // rax

  if ( *((_QWORD *)P + 50) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = KeGetCurrentThread();
    v4 = (char **)*((_QWORD *)P + 2);
    if ( v4[1] != P + 16 || (v5 = (PVOID *)*((_QWORD *)P + 3), *v5 != P + 16) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = 0LL;
    ExReleasePushLockEx((__int64 *)(*((_QWORD *)P + 50) + 408LL), 0LL);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(*((__int64 **)P + 50));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1u);
  v2 = (void *)*((_QWORD *)P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)P + 49) + 4120LL), 0xFFFFFFFF);
  ExFreePoolWithTag(P, 0);
}
