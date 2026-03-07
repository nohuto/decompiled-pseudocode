__int64 __fastcall Xp10ComputeAndWriteCrc(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // esi

  v3 = *(_DWORD *)(a3 + 8);
  if ( (v3 & 7) != 0 )
  {
    v3 = (v3 & 0xFFFFFFF8) + 8;
    *(_DWORD *)(a3 + 8) = v3;
  }
  if ( ((*a1 >> 14) & 1) == 0 )
  {
    v5 = v3 + 64;
    if ( v3 + 64 <= *(_DWORD *)(a3 + 12) )
    {
      *(_QWORD *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)a3) = Xp10ComputeCrc64(a2);
      goto LABEL_9;
    }
    return 3221225507LL;
  }
  v5 = v3 + 32;
  if ( v3 + 32 > *(_DWORD *)(a3 + 12) )
    return 3221225507LL;
  *(_DWORD *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)a3) = Xp10ComputeCrc32(a2);
LABEL_9:
  *(_DWORD *)(a3 + 8) = v5;
  return 0LL;
}
