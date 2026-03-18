/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C01400B8
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C014DA60 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0066FA8 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char *__fastcall GetProcessAppContainerSid(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  BOOL v4; // edi
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v6; // rsi
  unsigned __int64 v7; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  char *QuotaZInit; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  UnicodeString = 0LL;
  v3 = 0LL;
  v4 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3);
  v6 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v6, TokenAppContainerSid, &TokenInformation) >= 0
    && RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) >= 0 )
  {
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                           v8,
                           v7,
                           UnicodeString.Length + 2LL,
                           0x79747355u);
    v3 = QuotaZInit;
    if ( QuotaZInit )
      v4 = (int)RtlStringCchCopyNW(
                  QuotaZInit,
                  UnicodeString.Length + 1LL,
                  (char *)UnicodeString.Buffer,
                  (unsigned __int64)UnicodeString.Length >> 1) >= 0;
  }
  PsDereferenceImpersonationToken(v6);
  RtlFreeUnicodeString(&UnicodeString);
  if ( !v4 && v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    v3 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v3;
}
