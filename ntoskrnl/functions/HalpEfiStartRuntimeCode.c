__int64 __fastcall HalpEfiStartRuntimeCode(unsigned int a1)
{
  unsigned int *HalReserved; // rdx
  __int64 result; // rax

  HalReserved = KeGetPcr()->HalReserved;
  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result >= 2u )
  {
    _InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
  }
  else
  {
    while ( 1 )
    {
      while ( (HalReserved[8] & 0x80000000) != 0 )
        _mm_pause();
      _m_prefetchw(HalReserved + 8);
      result = (unsigned int)_InterlockedOr((volatile signed __int32 *)HalReserved + 8, a1);
      if ( (int)result >= 0 )
        break;
      _InterlockedAnd((volatile signed __int32 *)HalReserved + 8, ~a1);
    }
  }
  return result;
}
