/*
 * XREFs of ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C0228DF0
 * Callers:
 *     ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C0229A80 (-sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C0229270 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddq @ 0x1C0229AAC (WPP_RECORDER_AND_TRACE_SF_ddq.c)
 */

__int64 __fastcall CIVChannel::PacketCallback(CIVChannel *this, struct _IVSRContext *a2)
{
  CIVChannel *v3; // rdi
  int v4; // edx
  int v5; // r8d
  bool v6; // bl
  int v7; // edx
  void *v8; // r9
  unsigned int v9; // esi
  unsigned int v10; // eax
  size_t v11; // r14
  char v12; // bl
  NSInstrumentation::CLeakTrackingAllocator *v13; // rsi
  int v14; // eax
  __int64 Pool2; // rdi
  _QWORD *v16; // rax
  size_t v17; // r10
  unsigned int v18; // r11d
  int v19; // r8d
  int v20; // edx
  int v22; // edx
  unsigned int v23; // [rsp+60h] [rbp-A0h]
  unsigned int v24; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v25[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-80h] BYREF
  size_t v27; // [rsp+88h] [rbp-78h] BYREF
  void *Src; // [rsp+90h] [rbp-70h]
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  char v31; // [rsp+190h] [rbp+90h]
  unsigned int v32; // [rsp+198h] [rbp+98h] BYREF

  v3 = this;
  if ( !isChildPartition() )
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 36;
      LOBYTE(v7) = v6;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        36,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        *((_DWORD *)v3 + 2));
    }
    KeBugCheck(0x164u);
  }
  v8 = (void *)*((_QWORD *)a2 + 13);
  v9 = *((_DWORD *)a2 + 40);
  v10 = *((_DWORD *)a2 + 44);
  v11 = *((_QWORD *)a2 + 14);
  Src = v8;
  v23 = v9;
  v24 = v10;
  v12 = 1;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_ddq(WPP_GLOBAL_Control->AttachedDevice, v4, v5, (_DWORD)v8);
  }
  if ( !v9 )
  {
    v13 = gpLeakTrackingAllocator;
    v32 = 1852855881;
    v26 = 260LL;
    v27 = v11;
    v14 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, v11, 1852855881LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v13 + 14, 1uLL);
LABEL_40:
      if ( Pool2 )
        goto LABEL_43;
      goto LABEL_54;
    }
    if ( v14 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E705649u)
        || v11 + 16 < v11 )
      {
        goto LABEL_55;
      }
      v16 = (_QWORD *)ExAllocatePool2(v26 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v32);
      Pool2 = (__int64)v16;
      if ( !v16
        || (_InterlockedAdd64((volatile signed __int64 *)v13 + 14, 1uLL),
            *v16 = 1852855881LL,
            Pool2 = (__int64)(v16 + 2),
            v16 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v13 + 1),
          0x6E705649uLL);
      }
      goto LABEL_40;
    }
    if ( v14 != 2 )
      goto LABEL_55;
    v25[0] = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1852855881, v25) )
    {
      v25[0] = (unsigned __int64)&v26;
      v25[1] = (unsigned __int64)&v32;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v13,
                (__int64)v25,
                &v27);
      goto LABEL_40;
    }
    v31 = 0;
    if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
    {
      v17 = v11 + 16;
      v31 = 1;
      v27 = v11 + 16;
    }
    Pool2 = ExAllocatePool2(260LL, v17, v18);
    if ( Pool2 )
    {
      _InterlockedAdd64((volatile signed __int64 *)v13 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v31 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v13,
               (const void *)Pool2,
               v25[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_40;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v13,
                  Pool2,
                  v25[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_43:
        memmove((void *)Pool2, Src, v11);
        v9 = v23;
        v3 = this;
        goto LABEL_44;
      }
      _InterlockedAdd64((volatile signed __int64 *)v13 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_54:
    v3 = this;
LABEL_55:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v12 = 0;
    }
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 38;
      LOBYTE(v22) = v12;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        12,
        38,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
    }
    return CIVChannel::Receive(v3);
  }
LABEL_44:
  if ( (*((unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))v3 + 3))(*(_QWORD *)v3, v24, v9) )
    return CIVChannel::Receive(v3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v12 = 0;
  }
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = 39;
    LOBYTE(v20) = v12;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v19,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      12,
      39,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
  }
  return 0LL;
}
