/*
 * XREFs of ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1C00BE480
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x1C00BE440 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C00BE518 (--0CMouseAcceleration@@IEAA@I@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CMouseAcceleration::CreateInstance(struct CDeviceAcceleration **a1, unsigned int a2)
{
  PVOID v3; // rdi
  __int64 Pool2; // rbx
  struct CDeviceAcceleration *v6; // rax
  __int64 v8; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  *a1 = 0LL;
  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64416363) != 0x64416363
    || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 120LL);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1682006883 )
  {
    if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 136LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
LABEL_3:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
LABEL_4:
  v6 = CMouseAcceleration::CMouseAcceleration((CMouseAcceleration *)Pool2, a2);
  if ( v6 )
  {
    *a1 = v6;
    return 0LL;
  }
  return 3221225495LL;
}
