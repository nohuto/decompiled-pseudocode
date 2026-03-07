void *(__fastcall **__fastcall sub_140080994(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  void *v3; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D98E0;
  a1[7] = off_1400D4D58;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    ExFreePool(v2);
    a1[8] = 0LL;
  }
  a1[9] = 0LL;
  a1[10] = 0LL;
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
