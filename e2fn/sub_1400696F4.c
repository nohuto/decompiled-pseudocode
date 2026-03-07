__int64 __fastcall sub_1400696F4(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v3; // rcx
  void *v4; // rcx
  volatile signed __int32 *v5; // rbx

  v1 = a1 + 63;
  *a1 = &off_1400D8AC8;
  a1[7] = off_1400D8AF0;
  a1[25] = off_1400D8B20;
  a1[44] = off_1400D8B68;
  a1[63] = &off_1400D7CD0;
  a1[64] = off_1400D7CF8;
  v3 = (void *)a1[74];
  v1[9] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  v1[11] = 0LL;
  v1[12] = 0LL;
  v1[13] = 0LL;
  sub_140005CFC(v1);
  a1[48] = &off_1400D7CD0;
  a1[49] = off_1400D7CF8;
  v4 = (void *)a1[59];
  a1[57] = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  a1[59] = 0LL;
  a1[60] = 0LL;
  a1[61] = 0LL;
  sub_140005CFC(a1 + 48);
  v5 = (volatile signed __int32 *)a1[47];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  a1[44] = &off_1400D4DE8;
  return sub_14007134C(a1);
}
