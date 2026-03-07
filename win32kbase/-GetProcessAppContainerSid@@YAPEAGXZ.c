char *__fastcall GetProcessAppContainerSid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbx
  BOOL v5; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v7; // rsi
  unsigned __int64 v8; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  char *QuotaZInit; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  UnicodeString = 0LL;
  v4 = 0LL;
  v5 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v7 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v7, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v9,
                           v8,
                           UnicodeString.Length + 2LL,
                           0x79747355u);
    v4 = QuotaZInit;
    if ( QuotaZInit )
      v5 = (int)RtlStringCchCopyNW(
                  QuotaZInit,
                  UnicodeString.Length + 1LL,
                  (char *)UnicodeString.Buffer,
                  (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v7);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v5 && v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    v4 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v4;
}
