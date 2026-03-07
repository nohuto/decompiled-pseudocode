void *(__fastcall **__fastcall sub_14009260C(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rbx

  *a1 = &off_1400D9F88;
  a1[7] = off_1400D9FB0;
  a1[25] = off_1400D9FE0;
  v2 = (volatile signed __int32 *)a1[47];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return sub_14007134C(a1);
}
