/*
 * XREFs of CreateSecurityDescriptor @ 0x1C0032DE0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0058980 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C02E36BC (InitSecurity.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // esi
  PVOID v7; // rbx
  unsigned __int64 v8; // rdx
  struct _ACL *Pool2; // rdi
  NTSTATUS v10; // ebx
  __int64 v12; // rax
  char v13; // r14
  PVOID BackTrace[20]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = AceListLength + 8;
  if ( AceListLength + 8 < AceListLength || AceListLength + 48 < AceListLength + 8 )
    return 0LL;
  v7 = gpLeakTrackingAllocator;
  v8 = AceListLength + 48;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65737355) != 0x65737355
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = (struct _ACL *)ExAllocatePool2(261LL, v8);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1702064981 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  v13 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v13 = 1;
    v8 += 16LL;
  }
  Pool2 = (struct _ACL *)ExAllocatePool2(261LL, v8);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v13 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v7,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 2;
LABEL_5:
      if ( !Pool2 )
        return 0LL;
      goto LABEL_6;
    }
LABEL_24:
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v7,
                           Pool2,
                           BackTrace) )
    goto LABEL_24;
LABEL_6:
  RtlCreateSecurityDescriptor(Pool2, 1u);
  if ( RtlCreateAcl(Pool2 + 5, v3, 2u) >= 0 && RtlAddAce(Pool2 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
  {
    v10 = RtlSetDaclSecurityDescriptor(Pool2, 1u, Pool2 + 5, DaclDefaulted);
    RtlSetSaclSecurityDescriptor(Pool2, 0, 0LL, 0);
    RtlSetOwnerSecurityDescriptor(Pool2, 0LL, 0);
    RtlSetGroupSecurityDescriptor(Pool2, 0LL, 0);
    if ( v10 >= 0 )
      return Pool2;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    Pool2);
  return 0LL;
}
