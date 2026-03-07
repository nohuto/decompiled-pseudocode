LONG __fastcall SmpFlushStorePages(__int64 a1)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 1936LL));
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
