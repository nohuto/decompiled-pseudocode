__int64 __fastcall sub_14006C5B4(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  void *v3; // rcx
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rdi

  *a1 = &off_1400D8DA8;
  a1[7] = off_1400D8DD0;
  a1[25] = off_1400D8E00;
  a1[44] = off_1400D8E48;
  v2 = (volatile signed __int32 *)a1[58];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (void *)a1[52];
  a1[50] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  v4 = (volatile signed __int32 *)a1[49];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
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
  a1[44] = &off_1400D5BA0;
  return sub_14007134C(a1);
}
