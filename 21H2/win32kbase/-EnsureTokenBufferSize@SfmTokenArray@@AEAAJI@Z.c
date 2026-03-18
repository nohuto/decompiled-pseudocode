/*
 * XREFs of ?EnsureTokenBufferSize@SfmTokenArray@@AEAAJI@Z @ 0x1C00AB794
 * Callers:
 *     ?AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00AB690 (-AddNotificationTokens@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00AB710 (-AddNotificationToken@SfmTokenArray@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall SfmTokenArray::EnsureTokenBufferSize(SfmTokenArray *this, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // r14d
  PVOID v6; // rbp
  void *v7; // r15
  unsigned __int64 v8; // rdx
  __int64 Pool2; // rsi
  int v10; // eax
  __int64 v11; // rax
  char v12; // r12
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = 0;
  v4 = ((a2 + *((_DWORD *)this + 3)) & 0xFFFFFFE0) + 32;
  if ( v4 <= *((_DWORD *)this + 4) )
    return v2;
  v6 = gpLeakTrackingAllocator;
  v7 = *(void **)this;
  v8 = 40 * v4;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x624D4653) != 0x624D4653
    || (v11 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, v8);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 1649231443 )
  {
    if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  v12 = 0;
  if ( v8 < 0x1000 || ((40 * (_WORD)v4) & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v8);
  if ( !Pool2 )
  {
LABEL_21:
    *(_QWORD *)this = 0LL;
    goto LABEL_22;
  }
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v6,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
LABEL_5:
      *(_QWORD *)this = Pool2;
      if ( Pool2 )
        goto LABEL_6;
LABEL_22:
      *(_QWORD *)((char *)this + 12) = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_20;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           BackTrace) )
  {
LABEL_20:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_21;
  }
  *(_QWORD *)this = Pool2;
LABEL_6:
  v10 = *((_DWORD *)this + 4);
  if ( v10 && v7 )
  {
    memmove((void *)Pool2, v7, (unsigned int)(40 * v10));
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v7);
  }
  *((_DWORD *)this + 4) = v4;
  return v2;
}
