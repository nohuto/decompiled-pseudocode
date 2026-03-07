__int64 __fastcall GreGetPeakHandleCount(__int64 a1)
{
  return **(unsigned int **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
}
