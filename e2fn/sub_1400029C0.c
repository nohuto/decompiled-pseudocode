void *(__fastcall **__fastcall sub_1400029C0(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  void *v2; // rcx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax

  *a1 = &off_1400D45F8;
  sub_1400A2A00(a1 + 18);
  *a1 = &off_1400D4588;
  sub_1400A2980(a1 + 10);
  v2 = (void *)a1[7];
  a1[5] = &off_1400D41D0;
  if ( v2 )
    ExFreePool(v2);
  a1[7] = 0LL;
  result = &off_1400D4500;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &off_1400D4500;
  return result;
}
