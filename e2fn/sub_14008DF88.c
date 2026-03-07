void *(__fastcall **__fastcall sub_14008DF88(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D9B00;
  a1[7] = off_1400D9B28;
  a1[25] = off_1400D9B58;
  a1[44] = off_1400D9BA0;
  v2 = (volatile signed __int32 *)a1[48];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  a1[44] = &off_1400D9088;
  return sub_14007134C(a1);
}
