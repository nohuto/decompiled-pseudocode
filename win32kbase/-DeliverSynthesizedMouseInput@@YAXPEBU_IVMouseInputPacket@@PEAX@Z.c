/*
 * XREFs of ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C021D1EC
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021EEC0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C02174C8 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     ?GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z @ 0x1C021D520 (-GetMouseInputDataFromIVMouseInput@@YAXQEAU_MOUSE_INPUT_DATA@@QEAU_IVMouseInputData@@@Z.c)
 */

void __fastcall DeliverSynthesizedMouseInput(const struct _IVMouseInputPacket *a1, void *a2)
{
  __int64 v2; // r15
  NSInstrumentation::CLeakTrackingAllocator *v3; // rbx
  struct _IVMouseInputData *v4; // r13
  int v6; // eax
  unsigned __int64 v7; // rdi
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  char v9; // si
  _QWORD *Pool2; // rax
  unsigned int v11; // edx
  __int64 v12; // r10
  char v13; // r14
  _DWORD *v14; // r14
  __int64 v15; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // r14
  __int64 *v17; // rax
  int v18; // edx
  unsigned __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+150h] [rbp+50h] BYREF
  void *v23; // [rsp+158h] [rbp+58h]
  unsigned __int64 v24; // [rsp+160h] [rbp+60h] BYREF
  __int64 v25; // [rsp+168h] [rbp+68h] BYREF

  v23 = a2;
  v2 = *((unsigned int *)a1 + 8);
  v3 = gpLeakTrackingAllocator;
  v4 = (struct _IVMouseInputData *)*((_QWORD *)a1 + 3);
  v22 = 1936545353;
  v25 = 260LL;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v7 = 28 * (int)v2 + 36LL;
  v19 = v7;
  if ( v6 )
  {
    v9 = 1;
    if ( v6 != 1 )
    {
      if ( v6 != 2 )
        goto LABEL_31;
      v24 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1936545353, &v24) )
      {
        v20[0] = &v25;
        v20[1] = &v22;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v3,
                                                                                           (__int64)v20,
                                                                                           &v19);
        goto LABEL_21;
      }
      v13 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 = 28 * (int)v2 + 52LL;
        v13 = 1;
        v19 = v7;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v12, v7, v11);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_31;
      _InterlockedAdd64((volatile signed __int64 *)v3 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v13
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v3,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v24,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_21;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v3,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v24,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_24;
      }
      _InterlockedAdd64((volatile signed __int64 *)v3 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_31;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x736D5649u)
      || 28 * (int)v2 + 52LL < (unsigned __int64)(28 * (int)v2 + 36LL) )
    {
      goto LABEL_31;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v25 & 0xFFFFFFFFFFFFFFFDuLL, 28 * (int)v2 + 52LL, v22);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v3 + 14, 1uLL),
          *Pool2 = 1936545353LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        0x736D5649uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       28 * (int)v2 + 36LL,
                                                                                       1936545353LL);
    v9 = 1;
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v3 + 14, 1uLL);
  }
LABEL_21:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_31:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 49;
      LOBYTE(v18) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        49,
        (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
    }
    return;
  }
LABEL_24:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v23;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = v2;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = *((_QWORD *)a1 + 6);
  if ( (_DWORD)v2 )
  {
    v14 = (_DWORD *)((char *)v4 + 40);
    v15 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 36;
    do
    {
      GetMouseInputDataFromIVMouseInput((struct _MOUSE_INPUT_DATA *const)v15, v4);
      v4 = (struct _IVMouseInputData *)((char *)v4 + 48);
      *(_DWORD *)(v15 + 24) = *v14;
      v14 += 12;
      v15 += 28LL;
      --v2;
    }
    while ( v2 );
  }
  Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
  CPushLock::AcquireLockExclusive((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
  v17 = (__int64 *)*((_QWORD *)Instance + 1);
  if ( (struct InputVirtualization::RootSynthesizedMouseList *)*v17 != Instance )
    __fastfail(3u);
  *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Instance;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v17;
  *v17 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  *((_QWORD *)Instance + 1) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  KeSetEvent((PRKEVENT)gpevtSynthesizedContainerMouseInput, 1, 0);
  CPushLock::ReleaseLock((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
}
