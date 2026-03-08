/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C0168D48
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C017A690 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0085E78 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

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
