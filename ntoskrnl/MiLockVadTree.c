KIRQL __fastcall MiLockVadTree(char a1)
{
  int v1; // r8d
  bool v2; // zf
  volatile LONG *v3; // rcx
  char v4; // bl

  v1 = a1 & 1;
  v2 = (a1 & 2) == 0;
  v3 = (volatile LONG *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 284);
  if ( v2 )
  {
    if ( v1 )
    {
      v4 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(v3);
      return v4;
    }
    return ExAcquireSpinLockShared(v3);
  }
  if ( !v1 )
    return ExAcquireSpinLockExclusive(v3);
  v4 = 17;
  ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  return v4;
}
