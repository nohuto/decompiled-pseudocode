/*
 * XREFs of SeSecurityAttributePresent @ 0x14024E430
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201574 (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x140601050 (PsQueryProcessAttributesByToken.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14024E560 (AuthzBasepFindSecurityAttribute.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402CC770 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038EC80 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038F46C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, __int64 CurrentIrql)
{
  __int64 v2; // rsi
  char v4; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rdi
  __int16 v7; // ax
  bool v8; // si
  struct _KTHREAD *v10; // r8
  void *OwnerEntryForLegacyShim; // rbp

  v2 = CurrentIrql;
  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_QWORD *)(a1 + 48);
    if ( (*(_WORD *)(v6 + 26) & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v6, 0LL, 0LL);
    v7 = *(_WORD *)(v6 + 26) & 1;
    if ( v7 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v10 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v10->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v7 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      LOBYTE(CurrentIrql) = 1;
      ExpAcquireResourceSharedLite(v6, CurrentIrql);
    }
    v4 = 1;
  }
  v8 = AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), v2) != 0;
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v8;
}
