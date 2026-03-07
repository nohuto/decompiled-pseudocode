void *(__fastcall **__fastcall sub_1400A3EB4(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  volatile signed __int32 *v3; // rbx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  a1[4] = &off_1400D41D0;
  v2 = (void *)a1[6];
  if ( v2 )
    ExFreePool(v2);
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  v3 = (volatile signed __int32 *)a1[3];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  result = &off_1400D44E8;
  *a1 = &off_1400D44E8;
  return result;
}
