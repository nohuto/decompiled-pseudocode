void __fastcall sub_140025590(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[9];
  if ( v2 )
  {
    ExFreePool(v2);
    a1[9] = 0LL;
  }
  a1[10] = 0LL;
  a1[11] = 0LL;
}
