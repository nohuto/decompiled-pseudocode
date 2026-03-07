bool __fastcall IsForegroundWindow(__int64 a1)
{
  return gpqForeground == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) && *(_QWORD *)(gpqForeground + 128LL) == a1;
}
