void *(__fastcall **__fastcall sub_140005C04(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rdi
  void *v3; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D47E0;
  sub_1400A2980(a1 + 45);
  v2 = (volatile signed __int32 *)a1[44];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( !_InterlockedDecrement(v2 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  a1[31] = &off_1400D46F8;
  a1[32] = off_1400D4720;
  sub_140005CFC();
  a1[19] = &off_1400D46F8;
  a1[20] = off_1400D4720;
  sub_140005CFC();
  *a1 = &off_1400D4588;
  sub_1400A2980(a1 + 10);
  v3 = (void *)a1[7];
  a1[5] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[7] = 0LL;
  result = &off_1400D4500;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &off_1400D4500;
  return result;
}
