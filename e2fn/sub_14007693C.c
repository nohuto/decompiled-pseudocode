void *(__fastcall **__fastcall sub_14007693C(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx

  *a1 = &off_1400D9560;
  a1[7] = off_1400D9590;
  a1[25] = off_1400D95C0;
  a1[44] = off_1400D9608;
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
  v3 = (volatile signed __int32 *)a1[47];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  a1[44] = &off_1400D47C0;
  return sub_14007134C(a1);
}
