/*
 * XREFs of RtlpCheckForSameCurdir @ 0x18005E6D0
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x18005E530 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E870 (RtlpReferenceCurrentDirectory.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

bool __fastcall RtlpCheckForSameCurdir(PUNICODE_STRING String2, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rax
  HANDLE *v6; // rbx
  _UNICODE_STRING DosPath; // xmm0
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = RtlpReferenceCurrentDirectory(0LL, a2, a3);
  v6 = (HANDLE *)v5;
  if ( v5 )
    DosPath = *(_UNICODE_STRING *)(v5 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  String1 = DosPath;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != String2->Length )
      goto LABEL_7;
    String1.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == String2->Length )
LABEL_6:
    v4 = RtlEqualUnicodeString(&String1, String2, 1u) != 0;
LABEL_7:
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    {
      NtClose(v6[1]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
  }
  else
  {
    RtlLeaveCriticalSection(&FastPebLock);
  }
  return v4;
}
