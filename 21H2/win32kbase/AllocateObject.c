/*
 * XREFs of AllocateObject @ 0x1C00274B0
 * Callers:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BEE40 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall AllocateObject(unsigned int a1, unsigned int a2, int a3)
{
  BOOL v4; // ebp
  unsigned int v5; // esi
  void * near *v6; // r13
  PVOID v7; // r12
  __int64 Pool2; // rbx
  unsigned int v10; // edx
  PVOID v11; // rdi
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, __int64, __int64); // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = gulGdiHmgrTraceObjectType && a2 == gulGdiHmgrTraceObjectType;
  v5 = a1 + 160;
  if ( !v4 )
    v5 = a1;
  if ( *((_DWORD *)&laSize + a2) < v5 )
  {
    v10 = (a2 << 24) + 808478791;
    if ( !a3 )
    {
      if ( !v5 )
        goto LABEL_24;
      Pool2 = (__int64)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                         (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                         0x104uLL,
                         v5,
                         v10);
      if ( !Pool2 )
        goto LABEL_24;
      *(_OWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      goto LABEL_21;
    }
    if ( v5 )
    {
      v11 = gpLeakTrackingAllocator;
      v12 = v5;
      if ( (v10 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != v10
        || (v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_19:
        Pool2 = ExAllocatePool2(260LL, v5);
        goto LABEL_20;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != v10 )
      {
        if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_19;
      }
      v18 = 0;
      if ( v5 < 0x1000uLL || (v5 & 0xFFF) != 0 )
      {
        v18 = 1;
        v12 = v5 + 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v12);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v18 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v11,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_20;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v11,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_20;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
    Pool2 = 0LL;
LABEL_20:
    if ( !Pool2 )
      goto LABEL_24;
LABEL_21:
    if ( v4 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v5 + Pool2 - 160), 0LL);
    return Pool2;
  }
  v6 = (&pHmgLookAsideList)[a2];
  v7 = gpLeakTrackingAllocator;
  ++*((_DWORD *)v6 + 9);
  Pool2 = (__int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 1);
  if ( !Pool2 )
  {
    v13 = (__int64 (__fastcall *)(__int64, __int64, __int64))v6[8];
    v14 = *((unsigned int *)v6 + 15);
    v15 = *((unsigned int *)v6 + 14);
    v16 = *((unsigned int *)v6 + 13);
    ++*((_DWORD *)v6 + 10);
    Pool2 = v13(v16, v14, v15);
    if ( !Pool2 )
      goto LABEL_24;
  }
  if ( *(_BYTE *)v6 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v7,
                             Pool2,
                             BackTrace) )
    {
      ++*((_DWORD *)v6 + 11);
      if ( ExQueryDepthSList((PSLIST_HEADER)v6 + 1) < *((_WORD *)v6 + 16) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v6 + 1, (PSLIST_ENTRY)Pool2);
      }
      else
      {
        ++*((_DWORD *)v6 + 12);
        ((void (__fastcall *)(__int64))v6[9])(Pool2);
      }
      goto LABEL_24;
    }
    Pool2 += 16LL;
  }
  if ( Pool2 )
  {
    if ( a3 )
    {
      memset((void *)Pool2, 0, v5);
    }
    else
    {
      *(_OWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
    }
    if ( v4 )
      RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(Pool2 + v5 - 160LL), 0LL);
    *(_WORD *)(Pool2 + 14) = 0x8000;
    return Pool2;
  }
LABEL_24:
  EngSetLastError(8u);
  return 0LL;
}
