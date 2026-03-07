void *(__fastcall **__fastcall sub_14008C6D4(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rdi
  void *v3; // rcx

  *a1 = &off_1400D9A20;
  a1[7] = off_1400D9A48;
  a1[25] = off_1400D9A78;
  a1[44] = &off_1400D9AC0;
  v2 = (volatile signed __int32 *)a1[52];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (void *)a1[48];
  a1[46] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[44] = &off_1400D46A0;
  return sub_14007134C(a1);
}
