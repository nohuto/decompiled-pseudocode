unsigned __int64 __fastcall KiUpdateTotalCyclesCurrentThread(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rbx

  v5 = KiEndThreadCycleAccumulation(a1, a2, a3, 0LL);
  KiStartThreadCycleAccumulation(a1, a2, 0);
  return v5;
}
