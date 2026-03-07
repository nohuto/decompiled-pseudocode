void *(__fastcall **__fastcall sub_14008FAC4(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  volatile signed __int32 *v3; // rbx

  *a1 = &off_1400D9D58;
  a1[7] = off_1400D9D80;
  a1[25] = off_1400D9DB0;
  a1[50] = off_1400D4BE0;
  v2 = (void *)a1[51];
  if ( v2 )
  {
    sub_1400A5BB4(v2);
    a1[51] = 0LL;
  }
  a1[52] = 0LL;
  a1[53] = 0LL;
  v3 = (volatile signed __int32 *)a1[49];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return sub_14007134C(a1);
}
