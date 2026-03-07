__int64 __fastcall sub_140044F90(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D7200;
  a1[7] = off_1400D7228;
  a1[25] = off_1400D7258;
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
