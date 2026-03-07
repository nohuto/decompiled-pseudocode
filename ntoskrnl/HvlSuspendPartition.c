__int64 __fastcall HvlSuspendPartition(LONGLONG a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, (PHYSICAL_ADDRESS)1LL);
}
