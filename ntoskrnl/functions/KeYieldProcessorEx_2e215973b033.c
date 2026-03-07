void __fastcall KeYieldProcessorEx(_DWORD *a1)
{
  if ( a1
    && (++*a1, (*a1 & HvlLongSpinCountMask) == 0)
    && (HvlEnlightenments & 0x40) != 0
    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
  {
    HvlNotifyLongSpinWait((unsigned int)*a1);
  }
  else
  {
    _mm_pause();
  }
}
