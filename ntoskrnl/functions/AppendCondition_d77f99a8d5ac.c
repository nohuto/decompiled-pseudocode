__int64 __fastcall AppendCondition(const void **a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t Size)
{
  unsigned int v5; // edi
  unsigned int v9; // ebx
  PVOID v10; // rax
  PVOID v11; // rbp
  void *v12; // r13
  unsigned int v13; // ebx

  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v9 = *a3 + Size;
    if ( v9 < *a3 )
      return 534;
    if ( v9 > *a2 )
    {
      v10 = SddlpAlloc(v9);
      v11 = v10;
      if ( !v10 )
        return 8;
      v12 = (void *)*a1;
      memmove(v10, *a1, *a2);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      *a1 = v11;
      *a2 = v9;
    }
    v13 = *a3;
    memmove((char *)*a1 + *a3, a4, (unsigned int)Size);
    *a3 = v13 + Size;
    return v5;
  }
  return 87LL;
}
