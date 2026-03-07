_QWORD *__fastcall PTPTelemetry::Usage::IncrementTotalTime(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  _QWORD *result; // rax
  unsigned __int64 v7; // rcx

  v5 = a1;
  result = (_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 11824);
  if ( v5 )
  {
    if ( v5 == 1 )
      result[15] += a2;
  }
  else
  {
    result[12] += a2;
    if ( a2 > result[13] )
      result[13] = a2;
    v7 = result[14];
    if ( !v7 || a2 < v7 )
      result[14] = a2;
  }
  return result;
}
