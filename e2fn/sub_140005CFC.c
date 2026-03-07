void *(__fastcall **__fastcall sub_140005CFC(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D46C0;
  a1[1] = &off_1400D46E8;
  a1[3] = &off_1400D41D0;
  v2 = (void *)a1[5];
  if ( v2 )
    ExFreePool(v2);
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[1] = &off_1400D46A0;
  result = &off_1400D44E8;
  *a1 = &off_1400D44E8;
  return result;
}
