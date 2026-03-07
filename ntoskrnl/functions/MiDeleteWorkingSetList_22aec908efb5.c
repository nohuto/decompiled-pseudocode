void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      MiDeleteProcessLargePageCache(a1 - 1664);
      ExFreePoolWithTag(v1, 0);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
