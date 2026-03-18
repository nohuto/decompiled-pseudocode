/*
 * XREFs of SeSecurityAttributePresent @ 0x140300420
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1403763A8 (SepVerifyDesktopAppxPackageName.c)
 *     PsQueryProcessAttributesByToken @ 0x14070BA70 (PsQueryProcessAttributesByToken.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1403008B0 (AuthzBasepFindSecurityAttribute.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  __int16 v8; // cx
  bool v9; // si
  __int64 CurrentIrql; // rcx
  struct _KTHREAD *v12; // rdx
  void *OwnerEntryForLegacyShim; // rbp

  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = *(_QWORD *)(a1 + 48);
    v8 = *(_WORD *)(v7 + 26);
    if ( (v8 & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v7, 0LL, 0LL);
    if ( (v8 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v12 = KeGetCurrentThread();
      if ( (unsigned __int8)CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
      if ( (v12->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !(_BYTE)CurrentIrql && (v12->MiscFlags & 0x400) == 0 && !v12->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(CurrentIrql, v12, a3);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v7, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v7, 1);
    }
    v5 = 1;
  }
  v9 = AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a2) != 0;
  if ( v5 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v9;
}
