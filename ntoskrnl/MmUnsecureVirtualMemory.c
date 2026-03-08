/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1407D48C0
 * Callers:
 *     RtlFileMapFree @ 0x140303F60 (RtlFileMapFree.c)
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x1405E58E0 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     AlpcpRestoreWriteAccess @ 0x1406A29BC (AlpcpRestoreWriteAccess.c)
 *     AlpcpPrepareViewForDelivery @ 0x140715128 (AlpcpPrepareViewForDelivery.c)
 *     WbFreeMemoryBlock @ 0x140754DEC (WbFreeMemoryBlock.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409764EC (AlpcpForceUnlinkSecureView.c)
 *     VmUnsecureBackingMemory @ 0x1409D9F30 (VmUnsecureBackingMemory.c)
 *     VmpLockMemoryForPin @ 0x1409DA418 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA9F0 (VmpUnlockMemoryForPin.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A42EFC (MmStoreAllocateVirtualMemory.c)
 *     AslpFilePartialViewFree @ 0x140A570D4 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedSecureVad @ 0x14034C5AC (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x14034D404 (MiRemoveSecureEntry.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  __int64 **v2; // rax
  __int64 **v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140C656C0 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v4);
  v3 = v2;
  if ( v2 )
  {
    MiRemoveSecureEntry((ULONG_PTR)v2, v1);
    MiUnlockAndDereferenceVad(v3);
  }
}
