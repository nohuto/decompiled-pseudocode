/*
 * XREFs of AllocAce @ 0x1C0058D40
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0058980 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C02E36BC (InitSecurity.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall AllocAce(void *a1, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  ULONG v7; // r13d
  size_t v8; // r14
  PVOID v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 Pool2; // rbx
  __int64 v12; // rdx
  PVOID v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  char v17; // r15
  __int64 v18; // rax
  char v19; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-188h] BYREF
  PVOID v21[29]; // [rsp+C0h] [rbp-E8h] BYREF
  ULONG DestinationSidLength; // [rsp+1B0h] [rbp+8h]

  DestinationSidLength = RtlLengthSid(Sid);
  v7 = DestinationSidLength + 8;
  if ( !a1 )
  {
    v14 = gpLeakTrackingAllocator;
    LODWORD(v8) = 0;
    v15 = v7;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65737355) == 0x65737355
      && (v16 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1702064981 )
      {
        if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_9;
      }
      v17 = 0;
      if ( v7 < 0x1000uLL || (v7 & 0xFFF) != 0 )
      {
        v17 = 1;
        v15 = v7 + 16LL;
      }
      Pool2 = ExAllocatePool2(261LL, v15);
      if ( !Pool2 )
        return 0LL;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( !v17 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v14,
                                Pool2,
                                BackTrace) )
          goto LABEL_7;
        goto LABEL_39;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v14,
                               Pool2,
                               BackTrace) )
      {
LABEL_39:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return 0LL;
      }
      Pool2 += 16LL;
    }
    else
    {
LABEL_9:
      Pool2 = ExAllocatePool2(261LL, v7);
    }
    if ( Pool2 )
      goto LABEL_7;
    return 0LL;
  }
  v8 = (unsigned int)*a6;
  if ( (unsigned int)v8 + v7 < (unsigned int)v8 )
    return 0LL;
  v9 = gpLeakTrackingAllocator;
  v10 = (unsigned int)v8 + v7;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65737355) != 0x65737355
    || (v18 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(261LL, v10);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v18) != 1702064981 )
  {
    if ( ++v18 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  v19 = 0;
  if ( v10 < 0x1000 || (((_WORD)v8 + (_WORD)v7) & 0xFFF) != 0 )
  {
    v19 = 1;
    v10 += 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v10);
  if ( !Pool2 )
    return 0LL;
  memset(v21, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, v21, 0LL);
  if ( !v19 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v9, Pool2, v21) )
      goto LABEL_6;
    goto LABEL_39;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v9, Pool2, v21) )
    goto LABEL_39;
  Pool2 += 16LL;
LABEL_5:
  if ( Pool2 )
  {
LABEL_6:
    memmove((void *)Pool2, a1, v8);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a1);
LABEL_7:
    v12 = Pool2 + (unsigned int)v8;
    *a6 = v8 + v7;
    *(_BYTE *)v12 = a2;
    *(_BYTE *)(v12 + 1) = a3;
    *(_DWORD *)(v12 + 4) = a4;
    *(_WORD *)(v12 + 2) = v7;
    RtlCopySid(DestinationSidLength, (PSID)(v12 + 8), Sid);
    return Pool2;
  }
  return 0LL;
}
