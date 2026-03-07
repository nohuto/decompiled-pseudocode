__int64 __fastcall sub_1400327B0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // r8
  volatile signed __int32 *v4; // rdi

  *a1 = &off_1400D6A10;
  a1[7] = off_1400D6A48;
  a1[25] = off_1400D6A78;
  a1[44] = off_1400D6AC0;
  v2 = (volatile signed __int32 *)a1[54];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (void (__fastcall ***)(_QWORD, __int64))a1[50];
  a1[49] = off_1400D6A08;
  if ( v3 )
  {
    if ( *(v3 - 1) )
    {
      (**v3)(v3, 3LL);
    }
    else if ( v3 != (void (__fastcall ***)(_QWORD, __int64))8 )
    {
      ExFreePool(v3 - 1);
    }
    a1[50] = 0LL;
  }
  a1[51] = 0LL;
  a1[52] = 0LL;
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
  a1[44] = &off_1400D4DE8;
  return sub_14007134C(a1);
}
