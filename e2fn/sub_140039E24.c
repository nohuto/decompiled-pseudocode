__int64 __fastcall sub_140039E24(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D6FC0;
  a1[7] = off_1400D6FE8;
  a1[25] = off_1400D7018;
  v2 = (volatile signed __int32 *)a1[48];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  *a1 = &off_1400D6F20;
  a1[7] = off_1400D6F48;
  a1[25] = off_1400D6F78;
  return sub_14007134C(a1);
}
