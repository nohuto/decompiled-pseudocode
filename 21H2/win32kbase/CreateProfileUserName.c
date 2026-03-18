/*
 * XREFs of CreateProfileUserName @ 0x1C00B8930
 * Callers:
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 *     NtUserSetSysColors @ 0x1C00B8210 (NtUserSetSysColors.c)
 * Callees:
 *     ?InitPreviousUserString@@YAXXZ @ 0x1C0018F18 (-InitPreviousUserString@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct _UNICODE_STRING *__fastcall CreateProfileUserName(__int64 a1)
{
  PVOID v1; // rbx
  struct _UNICODE_STRING *Pool2; // rdi
  __int64 v5; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6E707355) != 0x6E707355
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = (struct _UNICODE_STRING *)ExAllocatePool2(261LL, 528LL);
LABEL_3:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1852863317 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = (struct _UNICODE_STRING *)ExAllocatePool2(261LL, 544LL);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_15;
    ++Pool2;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
LABEL_4:
  if ( qword_1C029BD10 )
    qword_1C029BD10(Pool2, a1, Win32FreePool);
  Pool2[32].Buffer = &Pool2->Length;
  Pool2[32].MaximumLength = 512;
  Pool2[32].Length = 0;
  InitPreviousUserString();
  RtlCopyUnicodeString(Pool2 + 32, &PreviousUserString);
  return Pool2 + 32;
}
