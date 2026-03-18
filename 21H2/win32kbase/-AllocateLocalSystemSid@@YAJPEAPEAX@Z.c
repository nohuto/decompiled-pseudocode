/*
 * XREFs of ?AllocateLocalSystemSid@@YAJPEAPEAX@Z @ 0x1C0058FF4
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0058980 (UserAllocDefaultCompositionSecurityDescriptor.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall AllocateLocalSystemSid(void **a1)
{
  ULONG v2; // eax
  PVOID v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 Pool2; // rbx
  NTSTATUS v6; // edi
  __int64 v8; // rax
  char v9; // si
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp-18h] BYREF

  *a1 = 0LL;
  v2 = RtlLengthRequiredSid(1u);
  v3 = gpLeakTrackingAllocator;
  v4 = v2;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65737355) != 0x65737355
    || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(261LL, v4);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1702064981 )
  {
    if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  v9 = 0;
  if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
  {
    v9 = 1;
    v4 += 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v4);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v3,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
LABEL_3:
      if ( Pool2 )
        goto LABEL_4;
      return (unsigned int)-1073741801;
    }
LABEL_21:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           BackTrace) )
    goto LABEL_21;
LABEL_4:
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v6 = RtlInitializeSid((PSID)Pool2, &IdentifierAuthority, 1u);
  if ( v6 < 0 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
  }
  else
  {
    *RtlSubAuthoritySid((PSID)Pool2, 0) = 18;
    *a1 = (void *)Pool2;
  }
  return (unsigned int)v6;
}
