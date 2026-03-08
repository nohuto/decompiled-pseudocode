/*
 * XREFs of KiWaitForContextSwap @ 0x1402A77E8
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1402A7380 (KiOutSwapKernelStacks.c)
 *     PspReaper @ 0x1402A75B0 (PspReaper.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  unsigned int v2; // ebx
  char result; // al

  v2 = 0;
  while ( 1 )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
