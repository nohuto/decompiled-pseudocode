/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01C35F4
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D82D4 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01BE43C (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D3598 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CreateAndReferenceMsgData(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6)
{
  int v7; // r13d
  unsigned __int16 v8; // r15
  int v10; // edi
  struct CInputPointerNode *NodeById; // r14
  PVOID v12; // rsi
  __int64 v13; // rcx
  __int64 Pool2; // rbx
  __int64 *v15; // rax
  __int64 v16; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v7 = a3;
  v8 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v10 = 0;
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v8, 0, 0);
  if ( !NodeById )
    return 0LL;
  v12 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64707355) != 0x64707355
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(260LL, 64LL);
LABEL_9:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_10;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1685091157 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_8;
  }
  Pool2 = ExAllocatePool2(260LL, 80LL);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v12,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_15;
    Pool2 += 16LL;
    goto LABEL_9;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v12,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
LABEL_10:
  *(_WORD *)(Pool2 + 16) = v8;
  *(_DWORD *)(Pool2 + 28) = v7;
  *(_DWORD *)(Pool2 + 32) = a4;
  LOBYTE(v10) = (a5 & 0x40004) == 0;
  *(_DWORD *)(Pool2 + 36) = *(_DWORD *)(Pool2 + 36) & 0xFFFFFFE0 | (8 * (a6 & 1)) | v10 & 0xFFFFFFE1 | ((a5 & 0x2000 | ((a5 & 0x10000 | (a5 >> 1) & 0x20000) >> 6)) >> 9);
  CTouchProcessor::AssignPointerCaptureData(this, NodeById, (struct CPointerMsgData *)Pool2);
  v15 = (__int64 *)((char *)NodeById + 256);
  v16 = *((_QWORD *)NodeById + 32);
  if ( *(struct CInputPointerNode **)(v16 + 8) != (struct CInputPointerNode *)((char *)NodeById + 256) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v16;
  *(_QWORD *)(Pool2 + 8) = v15;
  *(_QWORD *)(v16 + 8) = Pool2;
  *v15 = Pool2;
  CTouchProcessor::ReferenceMsgData(this, Pool2, 1LL);
  return Pool2;
}
