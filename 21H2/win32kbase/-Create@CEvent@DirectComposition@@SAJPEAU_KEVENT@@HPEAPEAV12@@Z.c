/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C02147E8
 * Callers:
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C02150C4 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(PVOID Object, __int64 a2, struct DirectComposition::CEvent **a3)
{
  PVOID v3; // rsi
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 Pool2; // rbx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  v5 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76654344) != 0x76654344
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(261LL, 16LL);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1986347844 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(261LL, 32LL);
  if ( !Pool2 )
    goto LABEL_9;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v3,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_12;
    Pool2 += 16LL;
  }
  else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v3,
               Pool2,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_12:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_9:
    Pool2 = 0LL;
  }
LABEL_6:
  *a3 = (struct DirectComposition::CEvent *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 8) = Object;
    ObfReferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
