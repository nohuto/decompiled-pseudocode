/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x140915928
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x140915910 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(UNICODE_STRING *a1, GUID *a2, GUID *a3)
{
  wchar_t *Buffer; // rdi
  NTSTATUS appended; // ebx
  ULONG v8; // edx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  Destination.MaximumLength = 112;
  GuidString = 0LL;
  Source = 0LL;
  if ( a3 )
    Destination.MaximumLength = 190;
  Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(a3 != 0LL ? 190LL : 112LL);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140009A88);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, &GuidString, 1u), appended < 0)
       || (appended = RtlAppendUnicodeStringToString(&Destination, &GuidString), appended < 0)
       || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(a2, &Source, 1u), appended < 0)
      || (appended = RtlAppendUnicodeStringToString(&Destination, &Source), appended < 0) )
    {
      Buffer = Destination.Buffer;
    }
    else
    {
      Buffer = 0LL;
      *a1 = Destination;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&Source);
  if ( Buffer )
    ExFreePoolWithTag(Buffer, v8);
  return (unsigned int)appended;
}
