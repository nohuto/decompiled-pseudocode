__int64 __fastcall sub_14005E86C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi

  *a1 = &off_1400D7E80;
  a1[7] = off_1400D7EB0;
  a1[25] = off_1400D7EE0;
  a1[47] = off_1400D7F28;
  v2 = (volatile signed __int32 *)a1[50];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  a1[47] = &off_1400D5BA0;
  *a1 = &off_1400D7DD8;
  a1[7] = off_1400D7E08;
  a1[25] = off_1400D7E38;
  return sub_14007134C(a1);
}
