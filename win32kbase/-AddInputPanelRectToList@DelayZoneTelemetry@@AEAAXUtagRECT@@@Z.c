/*
 * XREFs of ?AddInputPanelRectToList@DelayZoneTelemetry@@AEAAXUtagRECT@@@Z @ 0x1C0231E20
 * Callers:
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C0232334 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall DelayZoneTelemetry::AddInputPanelRectToList(DelayZoneTelemetry *this, struct tagRECT *a2)
{
  char *v2; // rsi
  char *v3; // rax
  __int64 v5; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  struct tagRECT v12; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v14; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+120h] [rbp+77h] BYREF
  __int64 v17; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (char *)this + 12288;
  v3 = (char *)*((_QWORD *)this + 1536);
  v12 = *a2;
  while ( v3 != v2 )
  {
    v5 = *((_QWORD *)v3 + 2) - *(_QWORD *)&v12.left;
    if ( !v5 )
      v5 = *((_QWORD *)v3 + 3) - *(_QWORD *)&v12.right;
    if ( !v5 )
      return;
    v3 = *(char **)v3;
  }
  v6 = gpLeakTrackingAllocator;
  v14 = 2053403477;
  v16 = 260LL;
  v17 = 32LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 32LL, 2053403477LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
    goto LABEL_25;
  }
  if ( v7 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x7A647355u) )
      return;
    v9 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, 48LL, v14);
    Pool2 = (__int64)v9;
    if ( !v9
      || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
          *v9 = 2053403477LL,
          Pool2 = (__int64)(v9 + 2),
          v9 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v6 + 1),
        0x7A647355uLL);
    }
LABEL_25:
    if ( !Pool2 )
      return;
    goto LABEL_26;
  }
  if ( v7 != 2 )
    return;
  v15 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2053403477, &v15) )
  {
    *(_QWORD *)&v12.left = &v16;
    *(_QWORD *)&v12.right = &v14;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v6,
              (__int64)&v12,
              &v17);
    goto LABEL_25;
  }
  Pool2 = ExAllocatePool2(v10, 48LL, 2053403477LL);
  if ( !Pool2 )
    return;
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v6,
           (const void *)Pool2,
           v15,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_25;
    }
LABEL_21:
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v6,
          Pool2,
          v15,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_21;
LABEL_26:
  *(struct tagRECT *)(Pool2 + 16) = *a2;
  v11 = *(_QWORD *)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v11;
  *(_QWORD *)(Pool2 + 8) = v2;
  *(_QWORD *)(v11 + 8) = Pool2;
  *(_QWORD *)v2 = Pool2;
}
