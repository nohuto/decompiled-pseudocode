void __fastcall sub_1400B4E38(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  a1[5] = off_1400D4D58;
  v2 = (void *)a1[6];
  if ( v2 )
  {
    ExFreePool(v2);
    a1[6] = 0LL;
  }
  a1[7] = 0LL;
  a1[8] = 0LL;
  v3 = (void *)a1[2];
  a1[1] = off_1400D4D58;
  if ( v3 )
  {
    ExFreePool(v3);
    a1[2] = 0LL;
  }
  a1[3] = 0LL;
  a1[4] = 0LL;
}
