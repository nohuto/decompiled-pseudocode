__int64 __fastcall sub_1400455A0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D72B0;
  a1[7] = off_1400D72D8;
  a1[25] = off_1400D7308;
  a1[49] = &off_1400D44E8;
  a1[47] = &off_1400D44E8;
  v2 = (volatile signed __int32 *)a1[46];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return sub_14007134C(a1);
}
