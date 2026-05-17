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

bool __fastcall RtlpCheckForSameCurdir(_WORD *a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  _UNICODE_STRING DosPath; // xmm0
  __int64 Length; // rdx
  _UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = RtlpReferenceCurrentDirectory(0LL, a2, a3);
  v7 = v5;
  if ( v5 )
    DosPath = *(_UNICODE_STRING *)(v5 + 24);
  else
    DosPath = NtCurrentPeb()->ProcessParameters->CurrentDirectory.DosPath;
  v11 = DosPath;
  Length = DosPath.Length;
  if ( DosPath.Length > 6u )
  {
    if ( DosPath.Length - 2 != (unsigned __int16)*a1 )
      goto LABEL_7;
    v11.Length = DosPath.Length - 2;
    goto LABEL_6;
  }
  if ( DosPath.Length == *a1 )
LABEL_6:
    v4 = RtlEqualUnicodeString(&v11.Length, (__int64)a1, 1) != 0;
LABEL_7:
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
    {
      NtClose(*(HANDLE *)(v7 + 8));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlLeaveCriticalSection((__int64)&FastPebLock, Length, v6);
  }
  return v4;
}
