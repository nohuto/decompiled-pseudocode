/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x1409BAD78
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x1409BAD60 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(UNICODE_STRING *a1, unsigned int *a2, unsigned int *a3)
{
  wchar_t *Buffer; // rdi
  int appended; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  Destination.MaximumLength = 112;
  Source = 0LL;
  UnicodeString = 0LL;
  if ( a3 )
    Destination.MaximumLength = 190;
  Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(a3 != 0LL ? 190LL : 112LL);
  Buffer = Destination.Buffer;
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_14000AC18);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, (__int64)&Source, 1), appended < 0)
       || (appended = RtlAppendUnicodeStringToString(&Destination, &Source), appended < 0)
       || (appended = RtlAppendUnicodeToString(&Destination, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(a2, (__int64)&UnicodeString, 1), appended < 0)
      || (appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString), appended < 0) )
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
  RtlFreeUnicodeString(&Source);
  RtlFreeUnicodeString(&UnicodeString);
  if ( Buffer )
    ExFreePool(Buffer);
  return (unsigned int)appended;
}
