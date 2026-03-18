/*
 * XREFs of RtlDuplicateUnicodeString @ 0x1406A9D20
 * Callers:
 *     DifRtlDuplicateUnicodeStringWrapper @ 0x14061B410 (DifRtlDuplicateUnicodeStringWrapper.c)
 *     NtManageHotPatch @ 0x1406C9390 (NtManageHotPatch.c)
 *     MiResolveImageReferences @ 0x140757FFC (MiResolveImageReferences.c)
 *     DrvDbGetObjectDatabaseNode @ 0x140784454 (DrvDbGetObjectDatabaseNode.c)
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     PipAddBindingId @ 0x1408442E8 (PipAddBindingId.c)
 *     PipAddRequestToEdge @ 0x140942760 (PipAddRequestToEdge.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14095D038 (PiDrvDbQuerySystemPathWin32.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiFindHotPatchRecord @ 0x1409730F0 (MiFindHotPatchRecord.c)
 *     EtwpCovSampModuleGetName @ 0x1409F18BC (EtwpCovSampModuleGetName.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x140A02E2C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryInformation @ 0x140A0350C (ExpCovQueryInformation.c)
 *     ExpCovReadFriendlyName @ 0x140A03B84 (ExpCovReadFriendlyName.c)
 *     ExpCovReadRequestBuffer @ 0x140A03C14 (ExpCovReadRequestBuffer.c)
 *     ExpCovResetInformation @ 0x140A03DA4 (ExpCovResetInformation.c)
 *     PnpEarlyLaunchImageNotificationPreProcess @ 0x140B24550 (PnpEarlyLaunchImageNotificationPreProcess.c)
 * Callees:
 *     RtlValidateUnicodeString @ 0x140232A80 (RtlValidateUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlDuplicateUnicodeString(ULONG Flags, PCUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  unsigned __int16 Length; // di
  wchar_t *v6; // r14
  ULONG v7; // esi
  ULONG v8; // r13d
  NTSTATUS result; // eax
  unsigned __int16 v10; // bx
  wchar_t *StringRoutine; // rax

  Length = 0;
  v6 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  if ( !StringOut )
    return -1073741811;
  v7 = Flags & 1;
  v8 = Flags & 2;
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( v7 && Length == 0xFFFE )
    return -1073741562;
  if ( v7 )
    v10 = Length + 2;
  else
    v10 = Length;
  if ( !v8 && !Length )
    v10 = 0;
  if ( !v10 )
    goto LABEL_20;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v10);
  v6 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( v7 )
      v6[(unsigned __int64)Length >> 1] = 0;
LABEL_20:
    StringOut->MaximumLength = v10;
    StringOut->Length = Length;
    StringOut->Buffer = v6;
    return 0;
  }
  return -1073741801;
}
