__int64 __fastcall sub_14002118C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D5D58;
  a1[7] = off_1400D5D90;
  a1[25] = off_1400D5DC0;
  a1[44] = off_1400D5E08;
  v2 = (volatile signed __int32 *)a1[59];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return sub_1400209F0(a1);
}
