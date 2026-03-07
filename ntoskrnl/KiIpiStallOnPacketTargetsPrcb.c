__int64 __fastcall KiIpiStallOnPacketTargetsPrcb(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a2 + 11648);
    if ( !(_DWORD)result )
      break;
    if ( (++v3 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v3);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
