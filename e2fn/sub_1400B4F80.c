void __fastcall sub_1400B4F80(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // rdi
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+58h] [rbp-28h] BYREF

  Pool2 = ExAllocatePool2(64LL, 88LL, 1819571039LL);
  if ( Pool2 )
  {
    v7 = *a3;
    sub_14008FE98(v8, a3 + 1);
    sub_14008058C(v9, a3 + 5);
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 16) = v7;
    sub_14008FE98((_QWORD *)(Pool2 + 24), v8);
    sub_14008058C((_QWORD *)(Pool2 + 56), v9);
    sub_1400B4E38(&v7);
    if ( a1[12] )
    {
      *(_QWORD *)(Pool2 + 8) = a2;
      *(_QWORD *)Pool2 = *(_QWORD *)a2;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = Pool2;
      *(_QWORD *)a2 = Pool2;
    }
    else
    {
      *(_QWORD *)(Pool2 + 8) = a1;
      *(_QWORD *)Pool2 = a1;
      a1[1] = Pool2;
      *a1 = Pool2;
    }
    ++a1[12];
  }
}
