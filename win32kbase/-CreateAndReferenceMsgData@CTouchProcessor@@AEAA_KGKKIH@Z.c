/*
 * XREFs of ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C01EEC60
 * Callers:
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0206D08 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01E96D8 (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0201170 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall CTouchProcessor::CreateAndReferenceMsgData(
        struct _KTHREAD **this,
        unsigned __int16 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6)
{
  int v6; // esi
  struct CInputPointerNode *NodeById; // r15
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // r9d
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // r11
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v25; // [rsp+20h] [rbp-B9h] BYREF
  __int64 v26; // [rsp+28h] [rbp-B1h] BYREF
  __int64 v27; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-99h] BYREF
  PVOID BackTrace[26]; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v30; // [rsp+130h] [rbp+57h] BYREF
  int v31; // [rsp+140h] [rbp+67h]

  v31 = a3;
  v6 = 0;
  if ( this[5] != KeGetCurrentThread() )
  {
    v30 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10059);
  }
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    return 0LL;
  v11 = gpLeakTrackingAllocator;
  v30 = 1685091157;
  v26 = 260LL;
  v27 = 64LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 64LL, 1685091157LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_19;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v25 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1685091157, &v25) )
      {
        v28[0] = &v26;
        v28[1] = &v30;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v11,
                  (__int64)v28,
                  &v27);
        goto LABEL_19;
      }
      Pool2 = ExAllocatePool2(v16, 80LL, v15);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v11,
                 Pool2,
                 v25,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_22;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v11,
                    (const void *)Pool2,
                    v25,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_19;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64707355u) )
    return 0LL;
  v14 = (_QWORD *)ExAllocatePool2(v26 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v30);
  Pool2 = (__int64)v14;
  if ( !v14
    || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
        *v14 = 1685091157LL,
        Pool2 = (__int64)(v14 + 2),
        v14 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v11 + 1),
      0x64707355uLL);
  }
LABEL_19:
  if ( !Pool2 )
    return 0LL;
LABEL_22:
  v17 = a5;
  v18 = a5;
  *(_DWORD *)(Pool2 + 28) = v31;
  v19 = *(_DWORD *)(Pool2 + 36);
  LOBYTE(v6) = (v18 & 0x40004) == 0;
  *(_WORD *)(Pool2 + 16) = a2;
  *(_DWORD *)(Pool2 + 32) = a4;
  v20 = (v19 & 0xFFFFFFFE | v6) ^ ((v19 & 0xFE | (unsigned __int8)v6) ^ (unsigned __int8)(v17 >> 15)) & 2;
  v21 = v20 ^ ((unsigned __int8)v20 ^ BYTE2(v18)) & 4 ^ ((unsigned __int8)(v20 ^ (v20 ^ BYTE2(v18)) & 4) ^ (unsigned __int8)(8 * a6)) & 8;
  *(_DWORD *)(Pool2 + 36) = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(v17 >> 9)) & 0x10;
  CTouchProcessor::AssignPointerCaptureData(this, NodeById, (struct CPointerMsgData *)Pool2);
  v22 = (__int64 *)((char *)NodeById + 256);
  v23 = *((_QWORD *)NodeById + 32);
  if ( *(struct CInputPointerNode **)(v23 + 8) != (struct CInputPointerNode *)((char *)NodeById + 256) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v23;
  *(_QWORD *)(Pool2 + 8) = v22;
  *(_QWORD *)(v23 + 8) = Pool2;
  *v22 = Pool2;
  CTouchProcessor::ReferenceMsgData(this, Pool2, 1LL);
  return Pool2;
}
