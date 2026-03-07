__int64 __fastcall sub_14006D988(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx

  *a1 = &off_1400D8E70;
  a1[7] = off_1400D8E98;
  a1[25] = off_1400D8EC8;
  v2 = (volatile signed __int32 *)a1[57];
  if ( v2 )
  {
    if ( !_InterlockedDecrement(v2 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( !_InterlockedDecrement(v2 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[55];
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 2) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( !_InterlockedDecrement(v3 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  while ( a1[53] )
    sub_1400AF3A8(a1 + 48, a1[49]);
  a1[48] = 0LL;
  a1[49] = 0LL;
  v4 = (volatile signed __int32 *)a1[51];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
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
  return sub_14007134C(a1);
}
