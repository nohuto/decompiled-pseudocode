__int64 __fastcall MmFreeMemoryRanges(ULONG_PTR a1)
{
  unsigned int v1; // edx
  __int64 v2; // r9
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = 0LL;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 >= 2 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2
    || *(_DWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 8)
    || KeGetCurrentIrql()
    || (v1 & 1) == 0
    || *(_QWORD *)(a1 + 24) != 0x40000000LL )
  {
    return 3221225485LL;
  }
  v4[2] = *(_QWORD *)(a1 + 48);
  v4[0] = v2;
  MiReleaseMemoryRuns(a1, v4, 1);
  return 0LL;
}
