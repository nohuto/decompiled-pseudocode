/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0075534
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0074EDC (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     GreLockSprite @ 0x1C0030D20 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C006FE40 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C006FE80 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, __int64 a2, __int64 a3)
{
  _QWORD **v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  int v12; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite();
  GreLockDisplayDevice(*(_QWORD *)a1);
  v4 = (_QWORD **)(*(_QWORD *)a1 + 2600LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v9 = (_QWORD *)*v5;
    v10 = v5;
    v5 = v9;
    if ( (_QWORD *)v9[1] != v10 || (v11 = (_QWORD *)v10[1], (_QWORD *)*v11 != v10) )
      __fastfail(3u);
    *v11 = v9;
    v9[1] = v11;
    v12 = *((_DWORD *)v10 + 5);
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2616LL) -= v12;
      if ( qword_1C029ADC8 )
        qword_1C029ADC8(*(_QWORD *)a1, (char *)v10 + 28, 1LL);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v10);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v8);
  }
  GreUnlockVisRgn(*(_QWORD *)a1, v6, v7);
}
