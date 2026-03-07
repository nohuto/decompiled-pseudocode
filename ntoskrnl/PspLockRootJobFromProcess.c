__int64 __fastcall PspLockRootJobFromProcess(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 i; // [rsp+50h] [rbp+18h]

  v9 = *(_QWORD *)(a1 + 1296);
  v6 = a2;
  for ( i = *(_QWORD *)(v9 + 1296); ; i = *(_QWORD *)(v9 + 1296) )
  {
    PspLockJobExclusive(i, a2);
    if ( v9 == *(_QWORD *)(a1 + 1296) && i == *(_QWORD *)(v9 + 1296) )
      break;
    PspUnlockJob(i, v6);
    a2 = v6;
    v9 = *(_QWORD *)(a1 + 1296);
  }
  *a3 = v9;
  result = i;
  *a4 = i;
  return result;
}
