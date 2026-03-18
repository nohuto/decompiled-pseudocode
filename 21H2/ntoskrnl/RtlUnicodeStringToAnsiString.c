/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x140759C40
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1402D9DB4 (DbgUnicodeStringToAnsiString.c)
 *     DifRtlUnicodeStringToAnsiStringWrapper @ 0x14061BBF0 (DifRtlUnicodeStringToAnsiStringWrapper.c)
 *     EtwpBuildProcessEvent @ 0x14070B610 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140759410 (ExpConvertLdrEntryToModuleInfo.c)
 *     ExpQueryModuleInformation @ 0x140759A80 (ExpQueryModuleInformation.c)
 *     CmpQueryDowncastString @ 0x14075AF34 (CmpQueryDowncastString.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075B0E4 (AslStringUpcaseToMultiByteN.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     CmpLoadLayerVersion @ 0x140836EAC (CmpLoadLayerVersion.c)
 *     KsepGetModuleInfoByName @ 0x140964D68 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x140A00DB0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140A01700 (NtSetSystemEnvironmentValue.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     ViThunkHookExportAddress @ 0x140A94030 (ViThunkHookExportAddress.c)
 *     HdlspProcessDumpCommand @ 0x140AA9C94 (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140B2BC5C (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToMultiByteSize @ 0x140759DB0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x140759E60 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r12
  NTSTATUS v7; // ebx
  ULONG v8; // esi
  char *StringRoutine; // rax
  ULONG MaximumLength; // eax
  ULONG BytesInUnicodeString; // r14d
  wchar_t *UnicodeString; // r15
  int v14; // esi
  char *Buffer; // r13
  struct _CPTABLEINFO *v16; // rax
  unsigned __int16 v17; // dx
  signed __int32 v18[8]; // [rsp+0h] [rbp-78h] BYREF
  int v19; // [rsp+30h] [rbp-48h]
  ULONG v20; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v21; // [rsp+90h] [rbp+18h]
  ULONG BytesInCustomCPString; // [rsp+98h] [rbp+20h] BYREF

  v21 = AllocateDestinationString;
  v6 = 0;
  v7 = 0;
  v20 = 0;
  RtlUnicodeToMultiByteSize(&v20, SourceString->Buffer, SourceString->Length);
  v8 = v20 + 1;
  BytesInCustomCPString = v20 + 1;
  if ( v20 + 1 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)ExpAllocateStringRoutine(v8);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v8;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v19 = 0;
  BytesInUnicodeString = SourceString->Length;
  UnicodeString = SourceString->Buffer;
  v14 = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    v16 = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v18, 0);
    v16 = (struct _CPTABLEINFO *)((char *)PsGetCurrentServerSiloGlobals() + 1064);
  }
  RtlUnicodeToCustomCPN(v16, Buffer, v14 - 1, &BytesInCustomCPString, UnicodeString, BytesInUnicodeString);
  v19 = 0;
  v17 = BytesInCustomCPString;
  DestinationString->Buffer[BytesInCustomCPString] = 0;
  DestinationString->Length = v17;
  if ( v6 )
    return -2147483643;
  return v7;
}
