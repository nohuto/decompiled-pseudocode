void *(__fastcall **__fastcall sub_14007134C(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  __int64 v1; // rbx
  volatile signed __int32 *v3; // rbx

  v1 = a1[41];
  *a1 = &off_1400D90F8;
  a1[7] = off_1400D9120;
  a1[25] = off_1400D9150;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  sub_140071984(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  v3 = (volatile signed __int32 *)a1[42];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  sub_1400A2980(a1 + 35);
  while ( a1[34] )
    sub_1400A4398(a1 + 30, a1[31]);
  a1[30] = 0LL;
  a1[31] = 0LL;
  a1[25] = &off_1400D4500;
  return sub_140071138(a1);
}
