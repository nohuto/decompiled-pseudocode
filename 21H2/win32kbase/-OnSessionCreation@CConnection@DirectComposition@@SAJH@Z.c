/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C005ACC4
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C005AAB0 (DCompositionSessionInitialize.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C005ADDC (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C005AEE0 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  PVOID v5; // rdi
  __int64 Pool2; // rbx
  DirectComposition::CConnection *v7; // rcx
  __int64 v9; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  v2 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              1935885124);
  v3 = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
    return (unsigned int)v4;
  }
  DirectComposition::CConnection::s_pSessionConnectionLock = v3;
  KeQueryPerformanceCounter(&DirectComposition::CConnection::s_qpcFrequency);
  if ( !a1 && !(unsigned int)PsGetCurrentProcessSessionId() )
    return (unsigned int)v4;
  v5 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63634344) == 0x63634344
    && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1667449668 )
    {
      if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_6;
    }
    Pool2 = ExAllocatePool2(260LL, 139600LL);
    if ( !Pool2 )
      goto LABEL_21;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v5,
                               Pool2,
                               BackTrace) )
      {
LABEL_20:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_21;
      }
      goto LABEL_8;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v5,
                             Pool2,
                             BackTrace) )
      goto LABEL_20;
    Pool2 += 16LL;
  }
  else
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 139584LL);
  }
  if ( !Pool2 )
  {
LABEL_21:
    DirectComposition::CConnection::s_pSessionConnection = 0LL;
    return (unsigned int)-1073741801;
  }
LABEL_8:
  DirectComposition::CConnection::s_pSessionConnection = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection((DirectComposition::CConnection *)Pool2);
  if ( !DirectComposition::CConnection::s_pSessionConnection )
    return (unsigned int)-1073741801;
  return (unsigned int)DirectComposition::CConnection::Initialize(v7);
}
