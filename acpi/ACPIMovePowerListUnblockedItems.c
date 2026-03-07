__int64 *__fastcall ACPIMovePowerListUnblockedItems(__int64 **a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 *v6; // rax
  __int64 *result; // rax
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-10h]

  v1 = *a1;
  v9 = (__int64 *)&v8;
  v8 = (__int64 *)&v8;
  while ( v1 != (__int64 *)a1 )
  {
    v3 = (__int64)v1;
    v1 = (__int64 *)*v1;
    if ( ACPIIsPowerRequestBlocked(v3) )
    {
      v4 = *(_QWORD *)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3
        || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3)
        || (*v5 = v4, *(_QWORD *)(v4 + 8) = v5, v6 = v9, (__int64 **)*v9 != &v8) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)(v3 + 8) = v9;
      *(_QWORD *)v3 = &v8;
      *v6 = v3;
      v9 = (__int64 *)v3;
    }
    else
    {
      *(_DWORD *)(v3 + 56) &= 0xEEFFFFFF;
    }
  }
  ACPIInternalMovePowerList(a1, &AcpiPowerPhase4List);
  result = v8;
  if ( v8 != (__int64 *)&v8 )
  {
    *a1 = v8;
    result[1] = (__int64)a1;
    result = v9;
    a1[1] = v9;
    *result = (__int64)a1;
  }
  return result;
}
