/*
 * XREFs of PspSetProcessPriorityClass @ 0x140613150
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x14061DEC4 (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     SeCheckPrivilegedObject @ 0x14078E020 (SeCheckPrivilegedObject.c)
 */

__int64 __fastcall PspSetProcessPriorityClass(__int64 a1, unsigned __int8 a2, __int64 a3, KPROCESSOR_MODE a4)
{
  unsigned __int8 v4; // bl
  __int64 v6; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  v4 = a2;
  if ( a2 > 6u )
    return 3221225485LL;
  if ( a2 == 4
    && *(_BYTE *)(a1 + 1463) != 4
    && !(a3
       ? ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
           SeIncreaseBasePriorityPrivilege,
           a3,
           512LL)
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
    if ( (*(_DWORD *)(v6 + 848) & 0x20) != 0 )
      v4 = *(_BYTE *)(v6 + 872);
    ExReleaseResourceLite((PERESOURCE)(v6 + 56));
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v8, v9, v10);
  }
  *(_BYTE *)(a1 + 1463) = v4;
  return 0LL;
}
