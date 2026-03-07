_QWORD *__fastcall sub_140004480(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v5; // rbx

  *a1 = &off_1400D4790;
  a1[1] = 0xA5A5A5A5A5000001uLL;
  sub_1400040D4((__int64)(a1 + 2), a2, (__int64)L" Attributes");
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a3 + 8LL))(*a3, a1 + 7);
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[14] = 0LL;
  v5 = (volatile signed __int32 *)a3[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return a1;
}
