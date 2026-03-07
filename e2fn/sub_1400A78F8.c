void __fastcall sub_1400A78F8(_QWORD *a1)
{
  void *v2; // rcx

  while ( a1[8] )
    sub_1400A82A4(a1);
  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = (void *)a1[4];
  a1[2] = &off_1400D41D0;
  if ( v2 )
    ExFreePool(v2);
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
}
