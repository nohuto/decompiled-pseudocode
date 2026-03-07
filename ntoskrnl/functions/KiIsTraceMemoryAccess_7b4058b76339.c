bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return KiDynamicTraceEnabled && a1 >= qword_140D1F2A8 && a1 < qword_140D1F2B0 && KeGetCurrentIrql() == 15;
}
