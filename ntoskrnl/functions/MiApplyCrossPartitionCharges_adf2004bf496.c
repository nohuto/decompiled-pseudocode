__int64 __fastcall MiApplyCrossPartitionCharges(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // eax

  v4 = 32LL * a2;
  v5 = *(_QWORD *)(v4 + a1 + 2120);
  v6 = v5 + a3;
  if ( v5 + a3 > v5 && v6 <= *(_QWORD *)(v4 + a1 + 2144) )
  {
    if ( a2 >= 7
      || (v9 = MiConvertCrossPartitionChargeTypeToAggregate((unsigned int)a2),
          result = MiApplyCrossPartitionCharges(a1, v9),
          (int)result >= 0) )
    {
      *(_QWORD *)(v4 + a1 + 2120) = v6;
      if ( v6 > *(_QWORD *)(v4 + a1 + 2136) )
        *(_QWORD *)(v4 + a1 + 2136) = v6;
      return 0LL;
    }
  }
  else
  {
    v7 = *(_QWORD *)(v4 + a1 + 2128);
    if ( v7 != -1 )
      *(_QWORD *)(v4 + a1 + 2128) = v7 + 1;
    return 3221225773LL;
  }
  return result;
}
