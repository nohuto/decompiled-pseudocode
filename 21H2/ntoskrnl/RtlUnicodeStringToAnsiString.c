/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1405EDB00
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x140372054 (DbgUnicodeStringToAnsiString.c)
 *     ExpQueryModuleInformation @ 0x1405ED940 (ExpQueryModuleInformation.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x1406B6EC0 (MmGetSystemRoutineAddress.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075A7D0 (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x1407958F0 (ObCreateObjectTypeEx.c)
 *     CmpQueryEditionVersion @ 0x1407A8330 (CmpQueryEditionVersion.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x1407B179C (ExpConvertLdrEntryToModuleInfo.c)
 *     KsepGetModuleInfoByName @ 0x1408C0D28 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1409549F0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140955340 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1409D8D3C (ViThunkAdjustExportAddressIfHooked.c)
 *     HdlspProcessDumpCommand @ 0x1409EFC18 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140A700D8 (IopReassignSystemRoot.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1405EDC80 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1405EDEA0 (RtlUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1406A0F60 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  SIZE_T v7; // rcx
  unsigned __int16 v8; // ax
  unsigned __int16 MaximumLength; // cx
  ULONG v10; // edx
  int v11; // edi
  char *StringRoutine; // rax
  ULONG v14; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v15; // [rsp+80h] [rbp+18h]
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v15 = AllocateDestinationString;
  BytesInMultiByteString = 0;
  v6 = 0;
  v14 = 0;
  RtlUnicodeToMultiByteSize(&v14, SourceString->Buffer, SourceString->Length);
  v7 = v14 + 1;
  if ( (unsigned int)v7 > 0xFFFF )
    return -1073741584;
  v8 = v14;
  DestinationString->Length = v14;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v11 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v11 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v10);
      DestinationString->Buffer = 0LL;
    }
  }
  else
  {
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    return v6;
  }
  return v11;
}
