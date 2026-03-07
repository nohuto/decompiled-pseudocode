NTSTATUS KsepDeletePatchSdb()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  char v2; // al
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwDeleteFile(&ObjectAttributes);
  if ( result < 0 )
  {
    v1 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v1 + 1] = result;
    v2 = KsepDebugFlag;
    KsepHistoryErrors[2 * v1] = 590372;
    if ( (v2 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Failed to delete patch shim database!\n");
    return KsepLogError(0LL, (__int64)"KSE: Failed to delete patch shim database!\n");
  }
  return result;
}
