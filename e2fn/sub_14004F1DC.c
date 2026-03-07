__int64 __fastcall sub_14004F1DC(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rsi
  void *v5; // rcx
  volatile signed __int32 *v6; // rbx

  *a1 = &off_1400D7538;
  v2 = a1 + 209;
  a1[7] = off_1400D7560;
  a1[25] = off_1400D7590;
  a1[44] = off_1400D75D8;
  v3 = (void *)a1[211];
  *v2 = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  v2[2] = 0LL;
  v4 = 32LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  do
  {
    v2 -= 5;
    --v4;
    v5 = (void *)v2[2];
    *v2 = &off_1400D41D0;
    if ( v5 )
      ExFreePool(v5);
    v2[2] = 0LL;
    v2[3] = 0LL;
    v2[4] = 0LL;
  }
  while ( v4 );
  v6 = (volatile signed __int32 *)a1[47];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  a1[44] = &off_1400D7428;
  return sub_14007134C(a1);
}
