void __fastcall KeAbCrossThreadDeleteNopDpcRoutine(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  _InterlockedDecrement(a3);
}
