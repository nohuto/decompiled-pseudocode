/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x140346F70
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiTerminateWsle @ 0x14032AAF0 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140346D60 (MiUnlockNestedPageTableWritePte.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1403482CC (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8

  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  v4 = _InterlockedExchange64(a1, a2);
  if ( MiPteInShadowRange((unsigned __int64)a1) )
    MiWritePteShadow((__int64)a1, a2, v5);
  return v4;
}
