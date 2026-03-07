void *(__fastcall **__fastcall sub_14000D1A0(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D4D68;
  a1[10] = off_1400D4D60;
  v2 = (void *)a1[11];
  if ( v2 )
  {
    sub_1400A639C(v2);
    a1[11] = 0LL;
  }
  a1[12] = 0LL;
  a1[13] = 0LL;
  v3 = (void *)a1[7];
  a1[6] = off_1400D4D58;
  if ( v3 )
  {
    ExFreePool(v3);
    a1[7] = 0LL;
  }
  a1[8] = 0LL;
  a1[9] = 0LL;
  v4 = (void *)a1[3];
  a1[2] = off_1400D4D58;
  if ( v4 )
  {
    ExFreePool(v4);
    a1[3] = 0LL;
  }
  a1[4] = 0LL;
  result = &off_1400D47C0;
  a1[5] = 0LL;
  *a1 = &off_1400D47C0;
  return result;
}
