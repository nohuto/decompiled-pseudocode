/*
 * XREFs of ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x1C01F3788
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0VPTPTouchpad@@QEAA@PEAU_LIST_ENTRY@@@Z @ 0x1C01F2B2C (--0VPTPTouchpad@@QEAA@PEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::FindTouchpadForConfig(
        struct _LIST_ENTRY *this,
        struct VPTP_ID *a2,
        const struct tagVIRTUAL_PTP_CONFIG *a3,
        struct VPTPTouchpad **a4)
{
  VPTPTouchpad *v5; // rax
  int v6; // ecx
  unsigned int v9; // r10d
  struct _LIST_ENTRY *i; // rdx
  PVOID v11; // rdi
  __int64 v12; // rax
  __int64 Pool2; // rbx
  int Flink; // ecx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v5 = 0LL;
  v6 = *(_DWORD *)a2;
  v9 = -1073741811;
  if ( !*(_DWORD *)a2 )
  {
    if ( !*(_DWORD *)a3 )
      goto LABEL_25;
    v11 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70747655) == 0x70747655
      && (v12 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1886680661 )
      {
        if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_13;
      }
      Pool2 = ExAllocatePool2(260LL, 232LL);
      if ( !Pool2 )
        goto LABEL_23;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v11,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_22:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_23;
        }
LABEL_15:
        v5 = VPTPTouchpad::VPTPTouchpad((VPTPTouchpad *)Pool2, this);
        if ( v5 )
        {
          Flink = (int)this[1].Flink;
          v9 = 0;
          do
            ++Flink;
          while ( !Flink );
          LODWORD(this[1].Flink) = Flink;
          *((_DWORD *)v5 + 52) = Flink;
          *(_DWORD *)a2 = Flink;
          goto LABEL_25;
        }
LABEL_24:
        v9 = -1073741801;
        goto LABEL_25;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v11,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_22;
      Pool2 += 16LL;
    }
    else
    {
LABEL_13:
      Pool2 = ExAllocatePool2(260LL, 216LL);
    }
    if ( !Pool2 )
    {
LABEL_23:
      v5 = 0LL;
      goto LABEL_24;
    }
    goto LABEL_15;
  }
  for ( i = this->Flink; i != this; i = i->Flink )
  {
    if ( v6 == LODWORD(i[13].Flink) )
    {
      v9 = 0;
      v5 = (VPTPTouchpad *)i;
      break;
    }
  }
LABEL_25:
  *a4 = v5;
  return v9;
}
