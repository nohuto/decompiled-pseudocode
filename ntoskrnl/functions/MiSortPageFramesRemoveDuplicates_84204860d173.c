__int64 __fastcall MiSortPageFramesRemoveDuplicates(_QWORD *a1, size_t a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // r10
  size_t v5; // r8
  _QWORD *i; // r9

  v3 = a1;
  qsort(a1, a2, 8uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
  v4 = 0LL;
  v5 = 0LL;
  for ( i = v3; v5 < a2; ++v5 )
  {
    if ( !v5 || *i != *(v3 - 1) )
    {
      *v3++ = *i;
      ++v4;
    }
    ++i;
  }
  return v4;
}
