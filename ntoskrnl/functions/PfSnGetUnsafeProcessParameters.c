__int64 PfSnGetUnsafeProcessParameters()
{
  unsigned __int64 v0; // rdx
  __int64 result; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24];
  result = 0LL;
  if ( v0 )
  {
    if ( (*(_QWORD *)(v0 + 32) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    return *(_QWORD *)(v0 + 32);
  }
  return result;
}
