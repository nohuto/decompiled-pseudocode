BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  unsigned __int8 v2; // al
  unsigned __int8 CurrentIrql; // r9
  BOOLEAN result; // al

  Flag = Resource->Flag;
  if ( !FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      }
      goto LABEL_9;
    }
LABEL_17:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_17;
  if ( (Flag & 1) == 0 )
    goto LABEL_13;
  v2 = KeGetCurrentIrql();
  if ( v2 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v2, 2uLL, 0LL);
LABEL_9:
  if ( (Flag & 1) != 0 )
  {
    if ( FeatureFastResource2 )
      return ExIsFastResourceHeldExclusive2((ULONG_PTR)Resource);
    else
      return ExIsFastResourceHeldExclusive((ULONG_PTR)Resource);
  }
LABEL_13:
  result = 0;
  if ( (Flag & 0x80u) != 0 )
    return Resource->OwnerEntry.OwnerThread == (_QWORD)KeGetCurrentThread();
  return result;
}
