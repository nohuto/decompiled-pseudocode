void __fastcall sub_14005DC20(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[10];
  if ( v2 )
    ExFreePool(v2);
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
}
