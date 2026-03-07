__int64 __fastcall sub_14005C9A4(_QWORD *a1)
{
  _QWORD *v2; // rcx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx

  *a1 = &off_1400D7D10;
  a1[7] = off_1400D7D38;
  a1[25] = off_1400D7D68;
  a1[44] = off_1400D7DB0;
  v2 = a1 + 68;
  *v2 = &off_1400D46F8;
  v2[1] = off_1400D4720;
  sub_140005CFC(v2);
  a1[56] = &off_1400D46F8;
  a1[57] = off_1400D4720;
  sub_140005CFC(a1 + 56);
  v3 = (volatile signed __int32 *)a1[55];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  sub_1400A2980(a1 + 48);
  v4 = (volatile signed __int32 *)a1[47];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  a1[44] = &off_1400D5BA0;
  return sub_14007134C(a1);
}
