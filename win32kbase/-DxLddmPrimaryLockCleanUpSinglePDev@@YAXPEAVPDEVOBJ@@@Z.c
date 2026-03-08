/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C001F834
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C001F220 (GreSuspendDirectDraw.c)
 * Callees:
 *     GreUnlockDisplayDevice @ 0x1C001F8B0 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C001F900 (GreLockDisplayDevice.c)
 *     GreUnlockSprite @ 0x1C001F940 (GreUnlockSprite.c)
 *     GreLockSprite @ 0x1C001F9A0 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  int v7; // ecx

  GreLockVisRgn(*(_QWORD *)a1);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v2 = (_QWORD **)(*(_QWORD *)a1 + 2600LL);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (_QWORD *)*v3;
    v5 = v3;
    v3 = v4;
    if ( (_QWORD *)v4[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    v7 = *((_DWORD *)v5 + 5);
    if ( v7 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2616LL) -= v7;
      if ( qword_1C02D55C8 )
        qword_1C02D55C8(*(_QWORD *)a1, (char *)v5 + 28, 1LL);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  GreUnlockSprite(*(_QWORD *)a1);
  GreUnlockVisRgn(*(_QWORD *)a1);
}
