/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000C59C
 * Callers:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C000BA78 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C000C540 (-SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00DD120 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C000D1BC (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(void *a1, __int64 a2, struct DirectComposition::CEvent **a3)
{
  PVOID v3; // rdi
  __int64 Pool2; // rbx
  unsigned int v7; // edx
  int v8; // edi
  __int64 v10; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76654344) == 0x76654344
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1986347844 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(261LL, 32LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v3,
                               Pool2,
                               BackTrace) )
        goto LABEL_15;
      Pool2 += 16LL;
    }
    else if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v3,
                                  Pool2,
                                  BackTrace) )
    {
LABEL_15:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return (unsigned int)-1073741801;
    }
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(261LL, 16LL);
  }
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  v8 = DirectComposition::CEvent::Initialize((DirectComposition::CEvent *)Pool2, a1, 0);
  if ( v8 < 0 )
    DirectComposition::CEvent::`scalar deleting destructor'((DirectComposition::CEvent *)Pool2, v7);
  else
    *a3 = (struct DirectComposition::CEvent *)Pool2;
  return (unsigned int)v8;
}
