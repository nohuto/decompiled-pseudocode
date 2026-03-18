/*
 * XREFs of PspSetProcessPriorityClass @ 0x1406D2718
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1407F7128 (PspApplyIFEOPerfOptions.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SeCheckPrivilegedObject @ 0x1406E856C (SeCheckPrivilegedObject.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
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
       ? ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
           SeIncreaseBasePriorityPrivilege,
           a3,
           512LL,
           a4)
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
      v4 = *(_BYTE *)(v6 + 1064);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  *(_BYTE *)(a1 + 1463) = v4;
  return 0LL;
}
