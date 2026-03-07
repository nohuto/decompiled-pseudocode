__int64 __fastcall HUBPSM20_FlushingUserResetForOverCurrentOnOverCurrentClear(__int64 a1)
{
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 960) + 1336LL), 0xFFFFFFFB);
  return 3013LL;
}
