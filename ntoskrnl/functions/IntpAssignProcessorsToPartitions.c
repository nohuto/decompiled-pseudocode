__int64 __fastcall IntpAssignProcessorsToPartitions(__int64 a1, ULONG_PTR a2, unsigned __int8 a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 v7; // rsi

  v3 = *(unsigned __int8 *)(a1 + 1);
  v5 = v3 / a3;
  v6 = v3 % a3;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      while ( *(_BYTE *)(a2 + 1) < (unsigned __int8)v5 )
        IntpAddNextProcessorToPartition(a2);
      if ( (_BYTE)v6 )
      {
        IntpAddNextProcessorToPartition(a2);
        LOBYTE(v6) = v6 - 1;
      }
      a2 += 16LL;
      --v7;
    }
    while ( v7 );
  }
  if ( (_BYTE)v6 )
    IntPartCriticalFailure(0x1004uLL, (unsigned __int8)v6);
  return 0LL;
}
