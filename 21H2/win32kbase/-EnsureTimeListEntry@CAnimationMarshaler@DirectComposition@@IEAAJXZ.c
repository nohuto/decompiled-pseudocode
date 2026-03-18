/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C00AFD04
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C00AFB60 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AFB90 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  PVOID v5; // rbp
  __int64 Pool2; // rdi
  __int64 v7; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( !v1 )
  {
LABEL_6:
    v5 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6C614344) == 0x6C614344
      && (v7 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1818313540 )
      {
        if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_7;
      }
      Pool2 = ExAllocatePool2(261LL, 72LL);
      if ( !Pool2 )
        goto LABEL_20;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v5,
                                 Pool2,
                                 BackTrace) )
        {
LABEL_19:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_20;
        }
LABEL_9:
        *(_DWORD *)(Pool2 + 48) = 1;
        *(_QWORD *)Pool2 = this;
        *((_QWORD *)this + 11) = Pool2;
        if ( v1 )
          *(_QWORD *)(v1 + 16) = Pool2;
        goto LABEL_3;
      }
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v5,
                               Pool2,
                               BackTrace) )
        goto LABEL_19;
      Pool2 += 16LL;
    }
    else
    {
LABEL_7:
      Pool2 = ExAllocatePool2(261LL, 56LL);
    }
    if ( !Pool2 )
    {
LABEL_20:
      *((_QWORD *)this + 11) = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(v1 + 24) & 2) != 0 )
  {
    *((_QWORD *)this + 11) = 0LL;
    goto LABEL_6;
  }
LABEL_3:
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = *((_QWORD *)this + 11);
  return v2;
}
