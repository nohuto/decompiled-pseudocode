/*
 * XREFs of CmpBuildMachineHiveMountPoint @ 0x1408189C8
 * Callers:
 *     CmpMachineHiveListInitialize @ 0x1408187E8 (CmpMachineHiveListInitialize.c)
 *     CmpFindMachineHiveByMountPoint @ 0x140818924 (CmpFindMachineHiveByMountPoint.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 */

NTSTATUS __fastcall CmpBuildMachineHiveMountPoint(unsigned int a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  wchar_t *v5; // rdx

  v3 = a1;
  RtlAppendUnicodeToString(a2, L"\\REGISTRY\\");
  v4 = 23 * v3;
  RtlAppendUnicodeToString(a2, CmpMachineHiveList[v4 + 1]);
  v5 = CmpMachineHiveList[v4 + 2];
  if ( !v5 )
  {
    v5 = CmpMachineHiveList[v4];
    CmpMachineHiveList[v4 + 2] = v5;
  }
  return RtlAppendUnicodeToString(a2, v5);
}
