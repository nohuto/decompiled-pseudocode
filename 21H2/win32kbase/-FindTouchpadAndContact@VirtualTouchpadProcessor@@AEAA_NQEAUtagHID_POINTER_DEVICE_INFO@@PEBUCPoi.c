/*
 * XREFs of ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x1C01F3508
 * Callers:
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F3EA8 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z @ 0x1C01F2AB8 (--0VPTPContact@@QEAA@UVPTP_ID@@PEAU_LIST_ENTRY@@@Z.c)
 *     _lambda_d5bddfc2fe24e4274cd124852b066150_::operator() @ 0x1C01F2C80 (_lambda_d5bddfc2fe24e4274cd124852b066150_--operator().c)
 *     ?CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F2D70 (-CaptureContact@VirtualTouchpad@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@UVPTP_ID@@AEBUtagVIR.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall VirtualTouchpadProcessor::FindTouchpadAndContact(
        VirtualTouchpadProcessor **this,
        struct tagHID_POINTER_DEVICE_INFO *const a2,
        const struct CPointerInfoNode *a3,
        struct VPTPTouchpad **a4,
        struct VPTPContact **a5)
{
  VirtualTouchpadProcessor *v5; // rdi
  char *v6; // r15
  char v7; // si
  VirtualTouchpadProcessor **v10; // r14
  struct VPTPContact **v11; // r12
  PVOID v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 Pool2; // rbx
  __int64 v16; // rbx
  __int64 *v17; // rbx
  __int64 *v18; // rax
  _DWORD *v19; // r8
  PVOID BackTrace[27]; // [rsp+30h] [rbp-D8h] BYREF
  char v22; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v23; // [rsp+118h] [rbp+10h]

  v23 = a2;
  v5 = *this;
  v6 = (char *)a3 + 168;
  v7 = 0;
  v10 = this;
  if ( *this == (VirtualTouchpadProcessor *)this )
    goto LABEL_28;
  v11 = a5;
  while ( 1 )
  {
    if ( (*((_DWORD *)v6 + 3) & 0x10000) == 0 )
    {
      v17 = (__int64 *)*((_QWORD *)v5 + 2);
      if ( v17 != (__int64 *)((char *)v5 + 16) )
      {
        this = (VirtualTouchpadProcessor **)*((unsigned __int16 *)a3 + 80);
        while ( *((_WORD *)v17 + 8) != (_WORD)this )
        {
          v17 = (__int64 *)*v17;
          if ( v17 == (__int64 *)((char *)v5 + 16) )
            goto LABEL_20;
        }
        if ( *((_DWORD *)a3 + 119) != *((_DWORD *)v5 + 52) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
        v18 = (__int64 *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                           (__int64)this,
                           (__int64)&v22,
                           v23,
                           (__int64)v6,
                           (float *)v5 + 15);
        *a4 = v5;
        v7 = 1;
        *v11 = (struct VPTPContact *)v17;
        *(__int64 *)((char *)v17 + 20) = *v18;
      }
      goto LABEL_20;
    }
    if ( *((_DWORD *)a3 + 119) == *((_DWORD *)v5 + 52) )
      break;
LABEL_20:
    v5 = *(VirtualTouchpadProcessor **)v5;
    if ( v5 == (VirtualTouchpadProcessor *)v10 )
      goto LABEL_28;
  }
  v12 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70747655) != 0x70747655
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, 40LL);
    goto LABEL_10;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1886680661 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_9;
  }
  Pool2 = ExAllocatePool2(260LL, 56LL);
  if ( !Pool2 )
  {
LABEL_26:
    v16 = 0LL;
    goto LABEL_27;
  }
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v12,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
LABEL_10:
      if ( Pool2 )
        goto LABEL_11;
      goto LABEL_26;
    }
LABEL_25:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_26;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v12,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_25;
LABEL_11:
  v16 = VPTPContact::VPTPContact(Pool2, *((_DWORD *)v5 + 52), (__int64 *)v5 + 2);
LABEL_27:
  v19 = v23;
  *(_WORD *)(v16 + 16) = *((_WORD *)a3 + 80);
  *(_QWORD *)(v16 + 20) = *(_QWORD *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                                       v14,
                                       (__int64)&v22,
                                       v19,
                                       (__int64)v6,
                                       (float *)v5 + 15);
  InputTraceLogging::VirtualTouchpad::CaptureContact();
  *a4 = v5;
  v7 = 1;
  *v11 = (struct VPTPContact *)v16;
LABEL_28:
  LOBYTE(this) = *((_DWORD *)a3 + 119) != 0;
  if ( v7 != (_BYTE)this )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  return v7;
}
