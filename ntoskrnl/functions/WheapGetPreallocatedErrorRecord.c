__int64 __fastcall WheapGetPreallocatedErrorRecord(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // r8
  unsigned int v3; // r9d

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 28) )
  {
    while ( *(_DWORD *)(v1 + 28) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 28), 1, 0) )
    {
      ++v3;
      v1 += *(unsigned int *)(v1 + 16);
      if ( v3 >= *(_DWORD *)(a1 + 28) )
        return v1 & -(__int64)(v2 != 0);
    }
    v2 = 1;
  }
  return v1 & -(__int64)(v2 != 0);
}
