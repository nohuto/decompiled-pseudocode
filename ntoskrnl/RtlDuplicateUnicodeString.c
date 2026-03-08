/*
 * XREFs of RtlDuplicateUnicodeString @ 0x140761970
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x1405E90E0 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     PipAddBindingId @ 0x1408389BC (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x140838B5C (PipAddRequestToEdge.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140865AB0 (DrvDbGetObjectDatabaseNode.c)
 *     PiGetServiceNameInfo @ 0x140870010 (PiGetServiceNameInfo.c)
 *     EtwpCovSampModuleGetName @ 0x1409EF918 (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A034B4 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A03B6C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x140A0420C (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x140A0429C (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140A04414 (ExpCovResetInformation.c)
 *     MiFindHotPatchRecord @ 0x140A33EBC (MiFindHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A342EC (MiGetAllRegisteredPatches.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B64140 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x1402D8DC0 (RtlValidateUnicodeString.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  wchar_t *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 v9; // bx
  wchar_t *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  return -1073741801;
}
