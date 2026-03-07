__int64 __fastcall sub_140020958(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D5C80;
  a1[7] = off_1400D5CB8;
  a1[25] = off_1400D5CE8;
  a1[44] = off_1400D5D30;
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
