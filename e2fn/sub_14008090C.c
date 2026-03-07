void *(__fastcall **__fastcall sub_14008090C(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v1; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  v1 = (void *)a1[8];
  *a1 = &off_1400D98C8;
  memset(v1, 0, a1[9]);
  v3 = (void *)a1[8];
  a1[7] = off_1400D4D58;
  if ( v3 )
  {
    ExFreePool(v3);
    a1[8] = 0LL;
  }
  a1[9] = 0LL;
  a1[10] = 0LL;
  v4 = (void *)a1[4];
  a1[2] = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  a1[4] = 0LL;
  result = &off_1400D44E8;
  a1[5] = 0LL;
  a1[6] = 0LL;
  *a1 = &off_1400D44E8;
  return result;
}
