/*
 * XREFs of ?VidMmCreateCompanionContext@VIDMM_GLOBAL@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@PEAVVIDMM_DEVICE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00E9F6C
 * Callers:
 *     VidMmCreateCompanionContext @ 0x1C002D180 (VidMmCreateCompanionContext.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00AB510 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall VIDMM_GLOBAL::VidMmCreateCompanionContext(
        VIDMM_GLOBAL *this,
        VIDMM_PROCESS **a2,
        struct _VIDSCH_CONTEXT *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx

  v6 = operator new(56LL, 0x39346956u, 64LL);
  v7 = (_QWORD *)v6;
  if ( !v6 )
    return 0LL;
  *(_OWORD *)v6 = 0LL;
  *(_OWORD *)(v6 + 16) = 0LL;
  *(_OWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  KeInitializeSemaphore((PRKSEMAPHORE)(v6 + 24), 128, 128);
  v7[1] = a3;
  *v7 = VIDMM_PROCESS::GetVirtualAddressAllocator(a2[1], *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 0xFFFFFFFF);
  v7[2] = a2;
  return (struct VIDMM_COMPANION_CONTEXT *)v7;
}
