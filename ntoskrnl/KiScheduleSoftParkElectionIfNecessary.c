__int64 __fastcall KiScheduleSoftParkElectionIfNecessary(__int64 a1)
{
  __int64 result; // rax

  result = KiShouldSoftParkElectionBePerformed();
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 708) )
    {
      *(_BYTE *)(a1 + 708) = 1;
      return KiInsertQueueDpc(a1 + 720, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
