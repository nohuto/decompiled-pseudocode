/*
 * XREFs of ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x1C005C7B8
 * Callers:
 *     CKeyboardSensor_CreateInstance @ 0x1C005B270 (CKeyboardSensor_CreateInstance.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1C005CDE8 (--0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CKeyboardSensor::CreateInstance(struct CKeyboardSensor **a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  __int64 result; // rax
  __int64 v4; // rax
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  gpKeyboardSensor = 0LL;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70694843) == 0x70694843
    && (v4 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 1885947971 )
    {
      if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 1344LL);
    if ( !Pool2 )
      return 3221225495LL;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v1,
                               Pool2,
                               BackTrace) )
      {
LABEL_13:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return 3221225495LL;
      }
LABEL_4:
      CBaseInput::CBaseInput(Pool2, 2LL, 1LL, 1LL);
      *(_QWORD *)(Pool2 + 1320) = 0LL;
      *(_QWORD *)Pool2 = &CKeyboardSensor::`vftable';
      result = 0LL;
      gpKeyboardSensor = (CHidInput *)Pool2;
      return result;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_13;
    Pool2 += 16LL;
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 1328LL);
  }
  if ( Pool2 )
    goto LABEL_4;
  return 3221225495LL;
}
