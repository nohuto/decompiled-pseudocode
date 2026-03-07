void *(__fastcall **__fastcall sub_14006DAF0(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D8F10;
  a1[12] = &off_1400D41D0;
  v2 = (void *)a1[14];
  if ( v2 )
    ExFreePool(v2);
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  v3 = (void *)a1[9];
  a1[7] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
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
