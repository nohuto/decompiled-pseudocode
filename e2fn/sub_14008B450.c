void __fastcall sub_14008B450(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *a1 = &off_1400D9A08;
  a1[6] = &off_1400D41D0;
  v2 = (void *)a1[8];
  if ( v2 )
    ExFreePool(v2);
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  v3 = (void *)a1[3];
  a1[1] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
}
