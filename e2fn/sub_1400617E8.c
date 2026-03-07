__int64 __fastcall sub_1400617E8(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *a1 = &off_1400D80D0;
  a1[61] = &off_1400D41D0;
  a1[7] = off_1400D80F8;
  a1[25] = off_1400D8128;
  v2 = (void *)a1[63];
  if ( v2 )
    ExFreePool(v2);
  a1[63] = 0LL;
  a1[64] = 0LL;
  a1[65] = 0LL;
  v3 = (void *)a1[58];
  a1[56] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[58] = 0LL;
  a1[59] = 0LL;
  a1[60] = 0LL;
  v4 = (void *)a1[53];
  a1[51] = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  a1[53] = 0LL;
  a1[54] = 0LL;
  a1[55] = 0LL;
  v5 = (void *)a1[48];
  a1[46] = &off_1400D41D0;
  if ( v5 )
    ExFreePool(v5);
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  return sub_14007134C(a1);
}
