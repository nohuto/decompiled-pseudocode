__int64 __fastcall sub_1400209F0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D5BB8;
  a1[7] = off_1400D5BF0;
  a1[25] = off_1400D5C20;
  a1[44] = off_1400D5C68;
  sub_1400A78F8(a1 + 48);
  v2 = (volatile signed __int32 *)a1[47];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  a1[44] = &off_1400D5BA0;
  return sub_14007134C(a1);
}
