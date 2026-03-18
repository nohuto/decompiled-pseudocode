/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025E10
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C016EED0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0025F50 (--$AllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this)
{
  __int64 v2; // rbx
  union _SLIST_HEADER *v3; // r14
  PVOID v4; // r15
  struct _SLIST_ENTRY *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  *((_DWORD *)this + 2) = 0;
  v2 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>();
  if ( v2 )
  {
    v3 = (union _SLIST_HEADER *)RGNMEMOBJ::s_pSCANLookAsideList;
    v4 = gpLeakTrackingAllocator;
    ++*((_DWORD *)RGNMEMOBJ::s_pSCANLookAsideList + 9);
    v5 = ExpInterlockedPopEntrySList(v3 + 1);
    if ( !v5 )
    {
      Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v3[4].Alignment;
      v10 = *((unsigned int *)&v3[3].HeaderX64 + 3);
      v11 = *((unsigned int *)&v3[3].HeaderX64 + 2);
      v12 = *((unsigned int *)&v3[3].HeaderX64 + 1);
      ++*((_DWORD *)&v3[2].HeaderX64 + 2);
      v5 = (struct _SLIST_ENTRY *)Alignment(v12, v10, v11);
      if ( !v5 )
        goto LABEL_9;
    }
    if ( LOBYTE(v3->Alignment) )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               v4,
                               v5,
                               BackTrace) )
      {
        ++*((_DWORD *)&v3[2].HeaderX64 + 3);
        if ( ExQueryDepthSList(v3 + 1) < LOWORD(v3[2].Alignment) )
        {
          ExpInterlockedPushEntrySList(v3 + 1, v5);
        }
        else
        {
          ++LODWORD(v3[3].Alignment);
          ((void (__fastcall *)(struct _SLIST_ENTRY *))v3[4].Region)(v5);
        }
LABEL_9:
        *(_QWORD *)(v2 + 88) = 0LL;
        goto LABEL_15;
      }
      ++v5;
    }
    *(_QWORD *)(v2 + 88) = v5;
    if ( !v5 )
    {
LABEL_15:
      REGION::vDeleteREGION((PSLIST_ENTRY)v2);
      *(_QWORD *)this = 0LL;
      return this;
    }
  }
  *(_QWORD *)this = v2;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 88);
    *(_DWORD *)(v2 + 80) = 16;
    *(_DWORD *)(v2 + 84) = 1;
    *(_QWORD *)(v2 + 96) = 0LL;
    *(_QWORD *)(v2 + 104) = 0LL;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0x80000000;
    *(_QWORD *)(v6 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v2 + 40) = v6 + 16;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = 112;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v7 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v7[1] = v7;
    *v7 = v7;
  }
  return this;
}
