/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C0089B30
 * Callers:
 *     NtUserGetKeyState @ 0x1C002CDC0 (NtUserGetKeyState.c)
 *     UpdateAsyncKeyState @ 0x1C003E060 (UpdateAsyncKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01EC3B4 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0089CC0 (ProcessUpdateKeyStateEvent.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x1C0089DF0 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  _OWORD *v2; // rsi
  __int64 v3; // rax
  PVOID v4; // rsi
  __int64 Pool2; // rbx
  _OWORD *v6; // rax
  unsigned int v7; // edx
  _DWORD *v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (*(_DWORD *)(a1 + 388) & 1) == 0 || *(struct tagTHREADINFO **)(a1 + 96) == gptiRit )
    return;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v2 = (_OWORD *)(a1 + 196);
    ProcessUpdateKeyStateEvent(a1, &gafAsyncKeyState, a1 + 196);
LABEL_5:
    *v2 = 0LL;
    v2[1] = 0LL;
    *(_DWORD *)(a1 + 388) &= ~1u;
    return;
  }
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v3 + 96) == 4 )
  {
    v6 = *(_OWORD **)(v3 + 32);
    v2 = (_OWORD *)(a1 + 196);
    v7 = 0;
    v8 = (_DWORD *)(a1 + 196);
    *v6 = gafAsyncKeyState;
    v9 = v6 + 4;
    v6[1] = xmmword_1C0294E60;
    v6[2] = xmmword_1C0294E70;
    v6[3] = xmmword_1C0294E80;
    do
    {
      ++v7;
      *v9++ |= *v8++;
    }
    while ( v7 < 8 );
    if ( qword_1C029BE58 )
      qword_1C029BE58(*(_QWORD *)(a1 + 96), 8256LL);
    goto LABEL_5;
  }
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x736B7355) == 0x736B7355
    && (v10 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1936421717 )
    {
      if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_9;
    }
    Pool2 = ExAllocatePool2(260LL, 112LL);
    if ( !Pool2 )
      return;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v4,
                               Pool2,
                               BackTrace) )
      {
LABEL_24:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return;
      }
LABEL_11:
      v2 = (_OWORD *)(a1 + 196);
      *(_OWORD *)Pool2 = gafAsyncKeyState;
      *(_OWORD *)(Pool2 + 16) = xmmword_1C0294E60;
      *(_OWORD *)(Pool2 + 32) = xmmword_1C0294E70;
      *(_OWORD *)(Pool2 + 48) = xmmword_1C0294E80;
      *(_OWORD *)(Pool2 + 64) = *(_OWORD *)(a1 + 196);
      *(_OWORD *)(Pool2 + 80) = *(_OWORD *)(a1 + 212);
      if ( !(unsigned int)ApiSetEditionPostUpdateKeyStateEvent(a1, Pool2) )
      {
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
        return;
      }
      goto LABEL_5;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
      goto LABEL_24;
    Pool2 += 16LL;
  }
  else
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, 96LL);
  }
  if ( Pool2 )
    goto LABEL_11;
}
