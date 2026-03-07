char __fastcall CmpFindSecurityCellCacheIndex(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v6; // rcx
  char result; // al
  _DWORD *LowerBoundInSortedArray; // rax
  unsigned __int64 v9; // rdx
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_DWORD *)(a1 + 1872);
  if ( v3 )
  {
    v6 = *(int *)(a1 + 1880);
    if ( (int)v6 >= 0 && (unsigned int)v6 < v3 && *(_DWORD *)(*(_QWORD *)(a1 + 1888) + 16 * v6) == a2 )
    {
      *a3 = v6;
      return 1;
    }
    else
    {
      LowerBoundInSortedArray = (_DWORD *)RtlFindLowerBoundInSortedArray(
                                            (unsigned int)&v10,
                                            *(_QWORD *)(a1 + 1888),
                                            v3,
                                            v3,
                                            (__int64)CmpSearchSecurityCellCache);
      v9 = ((unsigned __int64)LowerBoundInSortedArray - *(_QWORD *)(a1 + 1888)) >> 4;
      if ( (unsigned int)v9 < *(_DWORD *)(a1 + 1872) && *LowerBoundInSortedArray == v10 )
      {
        *(_DWORD *)(a1 + 1880) = v9;
        result = 1;
        *a3 = v9;
      }
      else
      {
        *a3 = v9;
        return 0;
      }
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
