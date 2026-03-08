/*
 * XREFs of HalMcFinishMicrocode @ 0x1403ABA24
 * Callers:
 *     HalpProcInitSystem @ 0x140A878D0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpMcUpdateFindDataTableEntry @ 0x1403719E0 (HalpMcUpdateFindDataTableEntry.c)
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 *     HalpMcExportAndChargeNeededData @ 0x14085CB10 (HalpMcExportAndChargeNeededData.c)
 */

char __fastcall HalMcFinishMicrocode(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *DataTableEntry)(_QWORD); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(_QWORD); // rbx
  UNICODE_STRING SystemRoutineName; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&SystemRoutineName.Length = 2621478LL;
  SystemRoutineName.Buffer = L"MmUnloadSystemImage";
  LOBYTE(DataTableEntry) = HalpMcExportAndChargeNeededData(a1, a2);
  if ( a1 )
  {
    LOBYTE(DataTableEntry) = HalpIsPartitionCpuManager(v5, v4);
    if ( !(_BYTE)DataTableEntry )
    {
      DataTableEntry = (__int64 (__fastcall *)(_QWORD))HalpMcUpdateFindDataTableEntry((_QWORD *)(a1 + 16));
      v6 = DataTableEntry;
      if ( DataTableEntry )
      {
        DataTableEntry = (__int64 (__fastcall *)(_QWORD))MmGetSystemRoutineAddress(&SystemRoutineName);
        if ( DataTableEntry )
          LOBYTE(DataTableEntry) = DataTableEntry(v6);
      }
    }
  }
  return (char)DataTableEntry;
}
