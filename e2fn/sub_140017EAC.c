__int64 __fastcall sub_140017EAC(_QWORD *a1)
{
  void *v2; // rcx
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rdi

  *a1 = &off_1400D5708;
  a1[7] = off_1400D5748;
  a1[25] = off_1400D5778;
  a1[62] = off_1400D57C0;
  a1[70] = off_1400D4D58;
  v2 = (void *)a1[71];
  if ( v2 )
  {
    ExFreePool(v2);
    a1[71] = 0LL;
  }
  a1[72] = 0LL;
  a1[73] = 0LL;
  v3 = (volatile signed __int32 *)a1[68];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[66];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  a1[62] = &off_1400D52F0;
  return sub_14001214C(a1);
}
