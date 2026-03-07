__int64 __fastcall CcReferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( a2 && _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
    __fastfail(0xEu);
  return nullsub_3(14LL);
}
