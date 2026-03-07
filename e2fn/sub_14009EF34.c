void *(__fastcall **__fastcall sub_14009EF34(_QWORD *a1))(CUnknown *__hidden this, unsigned int)
{
  volatile signed __int32 *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  *a1 = &off_1400DA578;
  a1[7] = off_1400DA5A0;
  a1[25] = off_1400DA5D0;
  v2 = (volatile signed __int32 *)a1[86];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  v3 = (void *)a1[82];
  a1[80] = &off_1400D41D0;
  if ( v3 )
    ExFreePool(v3);
  a1[82] = 0LL;
  a1[83] = 0LL;
  a1[84] = 0LL;
  v4 = (void *)a1[77];
  a1[75] = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  a1[77] = 0LL;
  a1[78] = 0LL;
  a1[79] = 0LL;
  v5 = (void *)a1[72];
  a1[70] = &off_1400D41D0;
  if ( v5 )
    ExFreePool(v5);
  a1[72] = 0LL;
  a1[73] = 0LL;
  a1[74] = 0LL;
  v6 = (void *)a1[67];
  a1[65] = &off_1400D41D0;
  if ( v6 )
    ExFreePool(v6);
  a1[67] = 0LL;
  a1[68] = 0LL;
  a1[69] = 0LL;
  v7 = (void *)a1[62];
  a1[60] = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  a1[62] = 0LL;
  a1[63] = 0LL;
  a1[64] = 0LL;
  v8 = (void *)a1[57];
  a1[55] = &off_1400D41D0;
  if ( v8 )
    ExFreePool(v8);
  a1[57] = 0LL;
  a1[58] = 0LL;
  a1[59] = 0LL;
  v9 = (void *)a1[52];
  a1[50] = &off_1400D41D0;
  if ( v9 )
    ExFreePool(v9);
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  v10 = (void *)a1[47];
  a1[45] = &off_1400D41D0;
  if ( v10 )
    ExFreePool(v10);
  a1[47] = 0LL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  return sub_14007134C(a1);
}
