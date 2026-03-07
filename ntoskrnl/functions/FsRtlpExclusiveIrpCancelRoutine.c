__int64 __fastcall FsRtlpExclusiveIrpCancelRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return FsRtlpCancelExclusiveIrp(a2, 0LL, a3);
}
