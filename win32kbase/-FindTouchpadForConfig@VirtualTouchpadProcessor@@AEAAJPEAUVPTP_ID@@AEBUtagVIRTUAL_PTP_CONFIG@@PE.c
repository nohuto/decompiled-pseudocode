/*
 * XREFs of ?FindTouchpadForConfig@VirtualTouchpadProcessor@@AEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@PEAPEAVVPTPTouchpad@@@Z @ 0x1C022497C
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C02241A8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ??0VPTPTouchpad@@QEAA@PEAU_LIST_ENTRY@@@Z @ 0x1C0223C1C (--0VPTPTouchpad@@QEAA@PEAU_LIST_ENTRY@@@Z.c)
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
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v15; // r10
  int Flink; // ecx
  __int64 v18; // [rsp+20h] [rbp-89h] BYREF
  __int64 v19; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned __int64 v23; // [rsp+128h] [rbp+7Fh] BYREF

  v5 = 0LL;
  v6 = *(_DWORD *)a2;
  v9 = -1073741811;
  if ( !*(_DWORD *)a2 )
  {
    if ( !*(_DWORD *)a3 )
      goto LABEL_26;
    v11 = gpLeakTrackingAllocator;
    v18 = 260LL;
    v22 = 1886680661;
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    v19 = 216LL;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        if ( v12 != 2 )
          goto LABEL_24;
        v23 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886680661, &v23) )
        {
          v20[0] = &v18;
          v20[1] = &v22;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v11,
                                                                                             (__int64)v20,
                                                                                             &v19);
          goto LABEL_29;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v15,
                                                                                           232LL,
                                                                                           1886680661LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_24;
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v23,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_29;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v23,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_30;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_24;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70747655u) )
        goto LABEL_24;
      Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 232LL, v22);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
            *Pool2 = 1886680661LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v11 + 1),
          0x70747655uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         216LL,
                                                                                         1886680661LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    }
LABEL_29:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_30:
      v5 = VPTPTouchpad::VPTPTouchpad(
             (VPTPTouchpad *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
             this);
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
        goto LABEL_26;
      }
LABEL_25:
      v9 = -1073741801;
      goto LABEL_26;
    }
LABEL_24:
    v5 = 0LL;
    goto LABEL_25;
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
LABEL_26:
  *a4 = v5;
  return v9;
}
