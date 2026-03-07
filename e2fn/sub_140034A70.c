__int64 __fastcall sub_140034A70(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi

  *a1 = &off_1400D6C00;
  a1[7] = off_1400D6C40;
  a1[25] = off_1400D6C70;
  a1[44] = &off_1400D6CB8;
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
  *a1 = &off_1400D59D0;
  a1[7] = off_1400D5A10;
  a1[25] = off_1400D5A40;
  a1[44] = &off_1400D47C0;
  return sub_14007134C(a1);
}
