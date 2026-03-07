__int64 __fastcall SmProcessCreateNotification(__int64 a1)
{
  __int64 ProcessPartition; // rdx
  char v2; // r9

  if ( (*(_DWORD *)(a1 + 2172) & 0x40000000) != 0 )
    return 3221225659LL;
  if ( !dword_140C6AFC0 )
    return 3221225659LL;
  ProcessPartition = SmpGetProcessPartition(a1);
  if ( (*(_DWORD *)(ProcessPartition + 2064) & 0xC) == 0 )
    return 3221225659LL;
  if ( (v2 & 3) != 0 )
    return SmpKeyedStoreCreate(ProcessPartition + 2072);
  return 3221266944LL;
}
