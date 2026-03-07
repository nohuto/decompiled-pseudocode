void __fastcall MiEndDpcGang(__int64 a1)
{
  PVOID *v1; // rdi
  PVOID *v3; // rcx
  void *v4; // rcx

  v1 = (PVOID *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
  {
    if ( *v1 != (PVOID)(a1 + 24) )
    {
      ExFreePoolWithTag(*v1, 0);
      *v1 = 0LL;
    }
  }
  else
  {
    v3 = *(PVOID **)(a1 + 8);
    if ( v3 != v1 )
    {
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  v4 = *(void **)(a1 + 216);
  if ( v4 )
  {
    if ( v4 != (void *)(a1 + 232) )
      ExFreePoolWithTag(v4, 0);
  }
}
