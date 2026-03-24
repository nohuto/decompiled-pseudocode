/*
 * XREFs of MmUnsecureVirtualMemory @ 0x14061FB80
 * Callers:
 *     RtlFileMapFree @ 0x140371CCC (RtlFileMapFree.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     AlpcViewDestroyProcedure @ 0x14061E250 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x14061FD70 (AlpcpRestoreWriteAccess.c)
 *     WbFreeMemoryBlock @ 0x140667C48 (WbFreeMemoryBlock.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406991AC (MmStoreAllocateVirtualMemory.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406DA940 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1406DADA8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C35C0 (AlpcpForceUnlinkSecureView.c)
 *     MiDeleteHotPatchEntry @ 0x1408C99B8 (MiDeleteHotPatchEntry.c)
 *     MiPerformImageHotPatch @ 0x1408CCF14 (MiPerformImageHotPatch.c)
 *     VmUnsecureBackingMemory @ 0x14092F300 (VmUnsecureBackingMemory.c)
 *     AslpFilePartialViewFree @ 0x14096C72C (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveSecureEntry @ 0x14025AE40 (MiRemoveSecureEntry.c)
 *     MiObtainReferencedSecureVad @ 0x14025AF50 (MiObtainReferencedSecureVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  __int64 *v1; // rbx
  ULONG_PTR v2; // rax
  char *v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((unsigned __int64)SecureHandle ^ qword_140C4DE50 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
