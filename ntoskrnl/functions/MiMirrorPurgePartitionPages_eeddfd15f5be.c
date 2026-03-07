__int64 __fastcall MiMirrorPurgePartitionPages(__int64 a1, int a2)
{
  if ( a2 )
  {
    MiPurgePartitionStandby();
    *(_BYTE *)(a1 + 15780) = 0;
  }
  return MiPurgeZeroList(a1);
}
