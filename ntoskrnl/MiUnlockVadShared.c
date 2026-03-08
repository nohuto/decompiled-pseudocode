/*
 * XREFs of MiUnlockVadShared @ 0x1402A5B30
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiReferenceCfgVad @ 0x140727250 (MiReferenceCfgVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchProcess @ 0x140A34804 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x140A39978 (MmIsFileMapped.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  *(_BYTE *)(a1 + 1385) &= ~0x40u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 40));
  LODWORD(v4) = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LODWORD(v4) = KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return (int)v4;
}
