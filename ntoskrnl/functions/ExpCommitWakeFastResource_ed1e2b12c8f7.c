__int64 __fastcall ExpCommitWakeFastResource(volatile signed __int32 **a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r8

  v4 = (2 * (a4 & 1) + 1) | 4;
  if ( (a4 & 2) == 0 )
    v4 = 2 * (a4 & 1) + 1;
  return KeWakeWaitChain(a1, 0, v4);
}
