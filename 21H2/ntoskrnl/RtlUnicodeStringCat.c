/*
 * XREFs of RtlUnicodeStringCat @ 0x140208C24
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406E9124 (CmpLogTransactionAbortedWithChildName.c)
 *     PopPowerRequestStatsIdConcat @ 0x1407F0FC0 (PopPowerRequestStatsIdConcat.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140854148 (SshpGenerateDeviceFriendlyName.c)
 *     PopGenerateDeviceFriendlyName @ 0x14085475C (PopGenerateDeviceFriendlyName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140917708 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopIdleWakeGenerateDescriptionString @ 0x14099B8FC (PopIdleWakeGenerateDescriptionString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140208D18 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  NTSTATUS v9; // r10d
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  NTSTATUS v12; // eax
  __int64 v13; // r11
  wchar_t *Buffer; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // dx
  __int64 v17; // rdi
  __int64 v18; // r9

  v5 = RtlUnicodeStringValidateWorker_0(DestinationString, (const size_t)SourceString, v2);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_QWORD *)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v9;
  }
  v12 = RtlUnicodeStringValidateWorker_0(SourceString, v6, v8);
  v9 = v12;
  if ( v12 >= 0 && SourceString )
  {
    Buffer = SourceString->Buffer;
    v15 = (unsigned __int64)SourceString->Length >> 1;
  }
  else
  {
    Buffer = 0LL;
    v15 = 0LL;
    if ( v12 < 0 )
      return v9;
  }
  v16 = 0;
  v9 = 0;
  v17 = v11 - v13;
  if ( v17 )
  {
    v18 = v10 + 2 * v13 - (_QWORD)Buffer;
    while ( v15 )
    {
      --v15;
      *(wchar_t *)((char *)Buffer + v18) = *Buffer;
      ++v16;
      ++Buffer;
      if ( !--v17 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( v15 )
      v9 = -2147483643;
  }
  DestinationString->Length = 2 * (v16 + v13);
  return v9;
}
