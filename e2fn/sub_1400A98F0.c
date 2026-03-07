void __fastcall sub_1400A98F0(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    sub_1400A9720(*(_QWORD **)(a1 + 16));
    ExFreePool(v1);
  }
}
