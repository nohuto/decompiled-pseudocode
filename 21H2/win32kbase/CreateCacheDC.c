/*
 * XREFs of CreateCacheDC @ 0x1C006AA00
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     InitUserScreen @ 0x1C006C88C (InitUserScreen.c)
 * Callees:
 *     GreGetBounds @ 0x1C002AEA0 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     IsGetStyleWindowSupported @ 0x1C006AC48 (IsGetStyleWindowSupported.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CreateCacheDC(__int64 a1, unsigned int a2, __int64 a3)
{
  PVOID v3; // rdi
  __int64 Pool2; // rbx
  HDEV v8; // rcx
  HDC DisplayDC; // rdi
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63647355) != 0x63647355
    || (v14 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 96LL);
LABEL_3:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1667527509 )
  {
    if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 112LL);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v3,
                             Pool2,
                             BackTrace) )
      goto LABEL_40;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v3,
                           Pool2,
                           BackTrace) )
  {
LABEL_40:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
LABEL_4:
  if ( a3 )
    v8 = *(HDEV *)(a3 + 80);
  else
    v8 = (HDEV)*((_QWORD *)gpDispInfo + 5);
  DisplayDC = GreCreateDisplayDC(v8, 0, 2);
  if ( !DisplayDC )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() >= 0 && qword_1C029C3F0 )
      v10 = qword_1C029C3F0(a1, 2848LL);
    else
      v10 = 0LL;
    v11 = a2 & 0xFFFFBFFF;
    if ( v10 )
      v11 = a2;
    a2 = v11;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)Pool2 = *((_QWORD *)gpDispInfo + 3);
  *((_QWORD *)gpDispInfo + 3) = Pool2;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  *(_QWORD *)(Pool2 + 48) = 0LL;
  *(_QWORD *)(Pool2 + 56) = 0LL;
  *(_QWORD *)(Pool2 + 80) = 0LL;
  *(_QWORD *)(Pool2 + 8) = DisplayDC;
  *(_DWORD *)(Pool2 + 64) = a2;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_QWORD *)(Pool2 + 32) = v10;
  *(_QWORD *)(Pool2 + 88) = a3;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx((__int64)DisplayDC, 0x80000002, 0, 0);
    *(_QWORD *)(Pool2 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 248) = Pool2;
    if ( (a2 & 0x4000) != 0 && qword_1C029C438 && (int)qword_1C029C438() >= 0 && qword_1C029C440 )
      qword_1C029C440(Pool2, 0LL);
  }
  else
  {
    GreSetDCOwnerEx((__int64)DisplayDC, 0x80000012, 0, 0);
    *(_QWORD *)(Pool2 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 136);
    if ( (*(_BYTE *)(*(_QWORD *)(v13 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v13 + 40) = Pool2;
    *(_DWORD *)(Pool2 + 64) |= 0x1000u;
    if ( qword_1C029C428 && (int)qword_1C029C428() >= 0 && qword_1C029C430 )
      qword_1C029C430(Pool2);
  }
  if ( *((_QWORD *)gpDispInfo + 4) )
    GreGetBounds(*(HDC *)(Pool2 + 8), 0LL, 1);
  return *(_QWORD *)(Pool2 + 8);
}
