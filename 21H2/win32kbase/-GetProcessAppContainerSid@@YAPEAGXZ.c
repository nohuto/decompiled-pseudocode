/*
 * XREFs of ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C0152AA4
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0164A30 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C004F810 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall GetProcessAppContainerSid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  int v5; // r14d
  struct _KPROCESS *CurrentProcess; // rax
  PACCESS_TOKEN v7; // r15
  PVOID v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 Pool2; // rbx
  char v13; // si
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-69h] BYREF
  PVOID TokenInformation; // [rsp+100h] [rbp+67h] BYREF

  TokenInformation = 0LL;
  UnicodeString = 0LL;
  v4 = 0LL;
  v5 = 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  v7 = PsReferencePrimaryToken(CurrentProcess);
  if ( SeQueryInformationToken(v7, TokenAppContainerSid, &TokenInformation) < 0
    || RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)TokenInformation, 1u) < 0 )
  {
    goto LABEL_11;
  }
  v8 = gpLeakTrackingAllocator;
  v9 = UnicodeString.Length + 2LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79747355) != 0x79747355
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_7:
    Pool2 = ExAllocatePool2(261LL, v9);
    goto LABEL_8;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 2037674837 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_7;
  }
  v13 = 0;
  if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
  {
    v13 = 1;
    v9 = UnicodeString.Length + 18LL;
  }
  Pool2 = ExAllocatePool2(261LL, v9);
  if ( !Pool2 )
    goto LABEL_21;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v8,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
LABEL_8:
      v4 = (char *)Pool2;
      if ( !Pool2 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_28:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_21:
    v4 = 0LL;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v8,
                           Pool2,
                           BackTrace) )
    goto LABEL_28;
  v4 = (char *)Pool2;
LABEL_9:
  if ( (int)RtlStringCchCopyNW(
              (char *)Pool2,
              UnicodeString.Length + 1LL,
              (char *)UnicodeString.Buffer,
              (unsigned __int64)UnicodeString.Length >> 1) >= 0 )
    v5 = 1;
LABEL_11:
  PsDereferenceImpersonationToken(v7);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v5 != 1 && v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
    v4 = 0LL;
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v4;
}
