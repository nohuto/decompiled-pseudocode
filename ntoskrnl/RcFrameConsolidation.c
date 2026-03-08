/*
 * XREFs of RcFrameConsolidation @ 0x140420BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402DC470 (KeCheckStackAndTargetAddress.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeKernelShadowStackRestoreContext @ 0x1405795E0 (KeKernelShadowStackRestoreContext.c)
 */

void __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int64 a19)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  void *v33; // [rsp+F8h] [rbp+F8h]

  v33 = (void *)(*(__int64 (**)(void))(a1 + 32))();
  if ( (a6 & 0xFFFFFF3F) == 0x10000F )
  {
    _mm_setcsr(HIDWORD(a6));
    KeCheckStackAndTargetAddress((signed __int64)v33, a19);
    if ( (KiKernelCetEnabled & 1) != 0 )
    {
      __asm { rdsspq  rdx }
      KeKernelShadowStackRestoreContext(&retaddr, _RDX, 0LL);
    }
    retaddr = v33;
    _disable();
    __asm { iretq }
  }
  JUMPOUT(0x1404209D5LL);
}
