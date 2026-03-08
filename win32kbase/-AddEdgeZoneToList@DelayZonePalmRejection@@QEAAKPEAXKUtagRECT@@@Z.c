/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C02153A8
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C0216EE0 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  __int64 Pool2; // rbx
  int v11; // r8d
  char v12; // si
  _QWORD *v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // r11
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v17; // edi
  int v18; // eax
  __int64 *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  char v23; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v24[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h] BYREF
  CInpLockGuard *v27[8]; // [rsp+78h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+188h] [rbp+80h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v27,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v8 = gpLeakTrackingAllocator;
  v29 = 2053403477;
  v25 = 260LL;
  v26 = 104LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 104LL, 2053403477LL);
    v12 = 1;
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
    goto LABEL_16;
  }
  v12 = 1;
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v24[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053403477, v24) )
      {
        v24[0] = (unsigned __int64)&v25;
        v24[1] = (unsigned __int64)&v29;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v8,
                  (__int64)v24,
                  &v26);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v15, 120LL, v14);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v8,
                 Pool2,
                 v24[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_19;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v8,
                    (const void *)Pool2,
                    v24[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_31:
    v17 = 0;
    goto LABEL_32;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
    goto LABEL_31;
  v13 = (_QWORD *)ExAllocatePool2(v25 & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v29);
  Pool2 = (__int64)v13;
  if ( !v13
    || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
        *v13 = 2053403477LL,
        Pool2 = (__int64)(v13 + 2),
        v13 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v8 + 1),
      0x7A647355uLL);
  }
LABEL_16:
  if ( !Pool2 )
    goto LABEL_31;
LABEL_19:
  *(_QWORD *)(Pool2 + 72) = 0LL;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  *(struct tagRECT *)(Pool2 + 24) = *a4;
  *(_OWORD *)(Pool2 + 40) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(Pool2 + 64) = 0;
  *(_QWORD *)(Pool2 + 16) = CurrentThread;
  v17 = *((_DWORD *)this + 22);
  v18 = v17 + 1;
  if ( v17 == -1 )
    v18 = 1;
  *((_DWORD *)this + 22) = v18;
  v19 = (__int64 *)((char *)this + 72);
  *(_DWORD *)(Pool2 + 88) = 0;
  *(_DWORD *)(Pool2 + 56) = v17;
  *(_DWORD *)(Pool2 + 92) = a3;
  *(_QWORD *)(Pool2 + 96) = a2;
  *(_BYTE *)(Pool2 + 60) = 1;
  v20 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v20 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v20;
  *(_QWORD *)(Pool2 + 8) = v19;
  *(_QWORD *)(v20 + 8) = Pool2;
  *v19 = Pool2;
  v21 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v21;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v12 = 0;
  }
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = v21;
    LOBYTE(v21) = v12;
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      26,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      v17,
      v23);
  }
LABEL_32:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v27);
  return v17;
}
