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
