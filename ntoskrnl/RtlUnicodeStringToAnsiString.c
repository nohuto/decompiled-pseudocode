/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1407A34D0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14036C640 (DbgUnicodeStringToAnsiString.c)
 *     DifRtlUnicodeStringToAnsiStringWrapper @ 0x1405E9890 (DifRtlUnicodeStringToAnsiStringWrapper.c)
 *     EtwpBuildProcessEvent @ 0x14071DE28 (EtwpBuildProcessEvent.c)
 *     CmpQueryDowncastString @ 0x14078C9F4 (CmpQueryDowncastString.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x14079FD98 (ExpConvertLdrEntryToModuleInfo.c)
 *     ExpQueryModuleInformation @ 0x1407A3330 (ExpQueryModuleInformation.c)
 *     MmGetSystemRoutineAddress @ 0x1407EA850 (MmGetSystemRoutineAddress.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     CmpLoadLayerVersion @ 0x140814A94 (CmpLoadLayerVersion.c)
 *     KsepGetModuleInfoByName @ 0x1409745B4 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409FC7C0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1409FD130 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     ViThunkHookExportAddress @ 0x140AD8C48 (ViThunkHookExportAddress.c)
 *     HdlspProcessDumpCommand @ 0x140AE7CAC (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140B6CE8C (IopReassignSystemRoot.c)
 * Callees:
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1407A3650 (RtlUnicodeToMultiByteN.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r14
  ULONG v7; // eax
  unsigned __int16 v8; // di
  ULONG MaximumLength; // ecx
  int v10; // edi
  unsigned __int16 v11; // dx
  char *StringRoutine; // rax
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = RtlxUnicodeStringToOemSize(SourceString);
  v8 = v7;
  BytesInMultiByteString = v7;
  if ( v7 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v8;
    LOWORD(MaximumLength) = v8;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v7 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          (unsigned __int16)MaximumLength - 1,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
      DestinationString->MaximumLength = 0;
    }
  }
  else
  {
    v11 = BytesInMultiByteString;
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    DestinationString->Length = v11;
  }
  if ( v6 )
    return -2147483643;
  return v10;
}
