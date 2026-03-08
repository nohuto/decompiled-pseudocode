/*
 * XREFs of CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x1402FE704
 * Callers:
 *     CcDeletePrivateVolumeCacheMap @ 0x1403BC0E4 (CcDeletePrivateVolumeCacheMap.c)
 * Callees:
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 */

char __fastcall CcDereferencePartitionAndPrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  char v3; // dl
  char v4; // al
  signed __int64 v5; // rcx
  bool v6; // cc
  signed __int64 v7; // rcx

  v3 = CcDereferencePartition(a1);
  v4 = 0;
  if ( a2 )
  {
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v5 <= 1;
    v7 = v5 - 1;
    if ( v6 )
    {
      if ( v7 )
        __fastfail(0xEu);
      v4 = 1;
    }
  }
  return v3 & v4;
}
