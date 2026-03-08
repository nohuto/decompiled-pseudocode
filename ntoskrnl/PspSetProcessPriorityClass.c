/*
 * XREFs of PspSetProcessPriorityClass @ 0x14079488C
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1409ADCE8 (PspApplyIFEOPerfOptions.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4
    && *(_BYTE *)(a1 + 1463) != 4
    && !(a3
       ? SeCheckPrivilegedObject(SeIncreaseBasePriorityPrivilege, a3, 512, a4)
       : SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a4)) )
  {
    return 3221225569LL;
  }
  v6 = *(_QWORD *)(a1 + 1296);
  CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 56), 1u);
    if ( (*(_DWORD *)(v6 + 1040) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 1084);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  *(_BYTE *)(a1 + 1463) = v4;
  return 0LL;
}
