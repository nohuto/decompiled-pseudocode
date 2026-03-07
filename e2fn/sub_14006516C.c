__int64 __fastcall sub_14006516C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D8698;
  a1[7] = off_1400D86C0;
  a1[25] = off_1400D86F0;
  a1[44] = off_1400D8738;
  sub_1400A2980(a1 + 62);
  sub_1400A2980(a1 + 56);
  sub_1400A2980(a1 + 50);
  v2 = (volatile signed __int32 *)a1[49];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  a1[44] = &off_1400D47C0;
  return sub_14007134C(a1);
}
