void *(__fastcall **__fastcall sub_14000579C(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rdi
  void *v3; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D4730;
  sub_1400A2980(a1 + 9);
  v2 = (volatile signed __int32 *)a1[8];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (void *)a1[4];
  a1[2] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[4] = 0LL;
  result = &off_1400D44E8;
  a1[5] = 0LL;
  a1[6] = 0LL;
  *a1 = &off_1400D44E8;
  return result;
}
