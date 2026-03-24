/*
 * XREFs of AddAllFlEntryWorker @ 0x1C00E730C
 * Callers:
 *     bAddAllFlEntry @ 0x1C00E6C58 (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, int a2)
{
  SharedQueryTable.Flags = 4;
  SharedQueryTable.Name = 0LL;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)BuildAndLoadLinkedFontRoutine;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C033A868 = 0LL;
  dword_1C033A870 = 0;
  qword_1C033A878 = 0LL;
  SharedQueryTable.EntryContext = (PVOID)a2;
  return RtlQueryRegistryValues(0, Path, &SharedQueryTable, 0LL, 0LL);
}
