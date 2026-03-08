/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C0214F18
 * Callers:
 *     AddPalmRejectionDelayZone @ 0x1C0216F34 (AddPalmRejectionDelayZone.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0232148 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3,
        void *a4,
        struct tagRECT *a5,
        int a6)
{
  __int64 v10; // r8
  unsigned int v11; // r15d
  char v12; // si
  int v13; // edx
  NSInstrumentation::CLeakTrackingAllocator *v14; // rdi
  int v15; // eax
  __int64 Pool2; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // r11
  __int128 v20; // xmm0
  struct tagRECT *v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  char v31; // [rsp+40h] [rbp-C0h]
  char v32; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  CInpLockGuard *v38[7]; // [rsp+88h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v41; // [rsp+198h] [rbp+98h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v38,
    (DelayZonePalmRejection *)((char *)this + 112),
    0LL);
  v11 = 0;
  Object = 0LL;
  v34 = 0LL;
  v12 = 1;
  if ( a2 )
  {
    LOBYTE(v10) = 1;
    v13 = CompositionInputObject::ResolveHandle(a2, 1LL, v10, (struct CompositionInputObject **)&Object);
    if ( v13 < 0 )
      goto LABEL_45;
  }
  if ( a4 )
  {
    LOBYTE(v10) = 1;
    v13 = CompositionInputObject::ResolveHandle(a4, 1LL, v10, (struct CompositionInputObject **)&v34);
    if ( v13 < 0 )
      goto LABEL_45;
  }
  v14 = gpLeakTrackingAllocator;
  v40 = 2053403477;
  v35 = 260LL;
  v37 = 104LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 104LL, 2053403477LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL);
    goto LABEL_20;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 )
    {
      v41 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053403477, &v41) )
      {
        *(_QWORD *)&v36 = &v35;
        *((_QWORD *)&v36 + 1) = &v40;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v14,
                  (__int64)&v36,
                  &v37);
        goto LABEL_20;
      }
      Pool2 = ExAllocatePool2(v19, 120LL, v18);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v14 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v14,
                 Pool2,
                 v41,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_23;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v14,
                    (const void *)Pool2,
                    v41,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_20;
        }
        _InterlockedAdd64((volatile signed __int64 *)v14 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_44:
    v13 = -1073741801;
LABEL_45:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v12 = 0;
    }
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v31 = v13;
      LOBYTE(v13) = v12;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        8,
        25,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
        v31);
    }
    goto LABEL_52;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
    goto LABEL_44;
  v17 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v40);
  Pool2 = (__int64)v17;
  if ( !v17
    || (_InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL),
        *v17 = 2053403477LL,
        Pool2 = (__int64)(v17 + 2),
        v17 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v14 + 1),
      0x7A647355uLL);
  }
LABEL_20:
  if ( !Pool2 )
    goto LABEL_44;
LABEL_23:
  if ( Object )
    ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  if ( v34 )
    ObReferenceObjectByPointer(v34, 3u, ExCompositionObjectType, 0);
  v20 = (__int128)*a3;
  *(_QWORD *)(Pool2 + 72) = Object;
  *(_QWORD *)(Pool2 + 80) = v34;
  v21 = a5;
  *(_OWORD *)(Pool2 + 24) = v20;
  *(struct tagRECT *)(Pool2 + 40) = *v21;
  *(_QWORD *)(Pool2 + 16) = KeGetCurrentThread();
  if ( a6 )
    v22 = *(_DWORD *)(*((_QWORD *)gptiCurrent + 53) + 56LL);
  else
    v22 = 0;
  *(_DWORD *)(Pool2 + 64) = v22;
  v11 = *((_DWORD *)this + 22);
  v23 = v11 + 1;
  if ( v11 == -1 )
    v23 = 1;
  *((_DWORD *)this + 22) = v23;
  *(_DWORD *)(Pool2 + 56) = v11;
  *(_DWORD *)(Pool2 + 92) = 3;
  v24 = *((_DWORD *)this + 26);
  *(_QWORD *)(Pool2 + 96) = 0LL;
  *(_DWORD *)(Pool2 + 88) = v24;
  v25 = (__int64 *)((char *)this + 72);
  *(_BYTE *)(Pool2 + 60) = 0;
  v26 = *((_QWORD *)this + 9);
  if ( *(DelayZonePalmRejection **)(v26 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v26;
  *(_QWORD *)(Pool2 + 8) = v25;
  *(_QWORD *)(v26 + 8) = Pool2;
  *v25 = Pool2;
  v27 = *((_DWORD *)this + 23) + 1;
  *((_DWORD *)this + 23) = v27;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v12 = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = v27;
    LOBYTE(v27) = v12;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v10,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      24,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      v11,
      v32);
  }
  v28 = *((_QWORD *)this + 16);
  if ( v28 )
  {
    v29 = *((unsigned int *)this + 1);
    v36 = (__int128)*a3;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v28, v29, v10, 3LL, &v36);
  }
LABEL_52:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v38);
  return v11;
}
