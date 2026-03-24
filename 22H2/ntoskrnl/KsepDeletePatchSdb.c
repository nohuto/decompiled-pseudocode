/*
 * XREFs of KsepDeletePatchSdb @ 0x1408C0CC4
 * Callers:
 *     KseShimDatabaseOpen @ 0x14075A8D0 (KseShimDatabaseOpen.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x140372754 (KsepLogError.c)
 *     ZwDeleteFile @ 0x1403FB480 (ZwDeleteFile.c)
 *     KsepDebugPrint @ 0x140526E28 (KsepDebugPrint.c)
 */

void KsepDeletePatchSdb()
{
  NTSTATUS v0; // eax
  __int64 v1; // rcx
  char v2; // al
  UNICODE_STRING v3; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0LL;
  RtlInitUnicodeString(&v3, L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v3;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v0 = ZwDeleteFile(&ObjectAttributes);
  if ( v0 < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = v0;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 590372;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Failed to delete patch shim database!\n");
    KsepLogError(0, "KSE: Failed to delete patch shim database!\n");
  }
}
